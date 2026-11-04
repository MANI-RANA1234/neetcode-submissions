class PrefixTree {
private:
    class TrieNode {
    public:
        TrieNode* children[26];
        bool isEnd;

        TrieNode() {
            isEnd = false;

            for (int i = 0; i < 26; i++) {
                children[i] = nullptr;
            }
        }
    };

    TrieNode* root;

public:
    PrefixTree() {
        root = new TrieNode();
    }

    void insert(string word) {
        TrieNode* current = root;

        for (char c : word) {
            int index = c - 'a';

            if (current->children[index] == nullptr) {
                current->children[index] = new TrieNode();
            }

            current = current->children[index];
        }

        current->isEnd = true;
    }

    bool search(string word) {
        TrieNode* current = root;

        for (char c : word) {
            int index = c - 'a';

            if (current->children[index] == nullptr) {
                return false;
            }

            current = current->children[index];
        }

        return current->isEnd;
    }

    bool startsWith(string prefix) {
        TrieNode* current = root;

        for (char c : prefix) {
            int index = c - 'a';

            if (current->children[index] == nullptr) {
                return false;
            }

            current = current->children[index];
        }

        return true;
    }
};