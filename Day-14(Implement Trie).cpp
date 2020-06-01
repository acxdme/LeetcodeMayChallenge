/*
Implement a trie with insert, search, and startsWith methods.

Example:

Trie trie = new Trie();

trie.insert("apple");
trie.search("apple");   // returns true
trie.search("app");     // returns false
trie.startsWith("app"); // returns true
trie.insert("app");   
trie.search("app");     // returns true
Note:

You may assume that all inputs are consist of lowercase letters a-z.
All inputs are guaranteed to be non-empty strings.
*/

#define MAX_NODES 10000
class Trie {
    struct Trienode
    {
        char val;
        int count;
        int endsHere;
        Trienode *child[26];
    };
    Trienode *root;
    
    Trienode *getNode(int index)
    {
        Trienode *newnode = new Trienode;
        newnode->val = 'a'+index;
        newnode->count = newnode->endsHere = 0;
        for(int i=0;i<26;++i)
            newnode->child[i] = NULL;
        return newnode;
    }
public:
    /** Initialize your data structure here. */
    Trie() 
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        root = getNode('/'-'a');
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        Trienode *curr = root;
        int index;
        for(int i=0;word[i]!='\0';++i)
        {
            index = word[i]-'a';
            if(curr->child[index]==NULL)
                curr->child[index] = getNode(index);
            curr->child[index]->count +=1;
            curr = curr->child[index];
        }
        curr->endsHere +=1;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        Trienode *curr = root;
        int index;
        for(int i=0;word[i]!='\0';++i)
        {
            index = word[i]-'a';
            if(curr->child[index]==NULL)
                return false;
            curr = curr->child[index];
        }
        return (curr->endsHere > 0);
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Trienode *curr = root;
        int index;
        for(int i=0;prefix[i]!='\0';++i)
        {
            index = prefix[i]-'a';
            if(curr->child[index]==NULL)
                return false;
            curr = curr->child[index];
        }
        return (curr->count > 0);
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
