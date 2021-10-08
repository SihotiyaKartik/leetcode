class TrieNode{
    public:
    bool isEnd = false;
    TrieNode *children[26] = {NULL};
    
};

class Trie {
private:
    TrieNode *root = NULL;
public:
    
    Trie() {
        root = new TrieNode;
    }
    
    void insert(string word) {
        TrieNode* temp = root;
        for(int i=0;i<word.size();i++){
            
            int index = word[i] - 'a';
            if(!temp->children[index]){
                temp->children[index] = new TrieNode;
            }
            temp = temp->children[index];
            
        }
        temp->isEnd = true;
        
        
        
        
    }
    
    bool search(string word) {
        TrieNode *temp = root;
        for(int i=0;i<word.size();i++){
            int index = word[i] - 'a';
            if(!temp->children[index])return false;
            temp = temp->children[index];
            
            
        }
        return temp->isEnd;
        
        
        
        
        
    }
    
    bool startsWith(string prefix) {
        
        TrieNode* temp = root;
        for(int i=0;i<prefix.size();i++){
            
            int index = prefix[i] - 'a';
            if(!temp->children[index])return false;
            temp = temp->children[index];
            
        }
        return true;
        
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */