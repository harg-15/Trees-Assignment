void decode_huff(node* root, string s) {
    node* curr = root;
    for (char c : s) {
        if (c == '0') curr = curr->left;
        else curr = curr->right;

        if (curr->left == NULL && curr->right == NULL) {
            cout << curr->data;
            curr = root;
        }
    }
}
