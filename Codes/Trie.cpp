#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class TrieNode {
public:
    unordered_map<char, TrieNode*> children;
    bool isEndOfWord;

    TrieNode() 
    {
        isEndOfWord = false;
    }
};

class Trie 
{
  public:
    TrieNode* root;

    Trie() {
        root = new TrieNode();
    }

    void insert(string key) {
        TrieNode* node = root;
        for (char c : key) {
            if (node->children.find(c) == node->children.end()) {
                node->children[c] = new TrieNode();
            }
            node = node->children[c];
        }
        node->isEndOfWord = true;
    }

    bool search(string key) {
        TrieNode* node = root;
        for (char c : key) {
            if (node->children.find(c) == node->children.end()) {
                return false;
            }
            node = node->children[c];
        }
        return node->isEndOfWord;
    }

    void suggestHelper(TrieNode* node, vector<string>& results, string prefix) {
        if (node->isEndOfWord) {
            results.push_back(prefix);
        }
        for (auto it : node->children) {
            suggestHelper(it.second, results, prefix + it.first);
        }
    }

    vector<string> suggest(string prefix) {
        TrieNode* node = root;
        vector<string> results;
        for (char c : prefix) {
            if (node->children.find(c) == node->children.end()) {
                return results;
            }
            node = node->children[c];
        }
        suggestHelper(node, results, prefix);
        return results;
    }
};

int main() {
    Trie trie;
    trie.insert("electronics");
    trie.insert("fashion");
    trie.insert("home");
    trie.insert("beauty");
    trie.insert("toys");

    vector<string> suggestions = trie.suggest("fa");
    for (string suggestion : suggestions) 
    {
        cout << suggestion << endl;
    }

    return 0;
}
