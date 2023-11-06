
<html>
<head>
    
</head>
<body>
<h3>Code:</h3>
    <div id="div4">
        <pre>
#include &lt;stdio.h&gt; 
#include &lt;stdlib.h&gt; 
#include &lt;limt.h&gt; 
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}
struct Node* constructBST(int postorder[], int size, int* index, int min, int max) {
    if (*index < 0 || postorder[*index] < min || postorder[*index] > max) {
        return NULL;
    }
    struct Node* root = newNode(postorder[(*index)--]);
    root->right = constructBST(postorder, size, index, root->data, max);
    root->left = constructBST(postorder, size, index, min, root->data);

    return root;
}
void inOrderTraversal(struct Node* root) {
    if (root) {
        inOrderTraversal(root->left);
        printf("%d ", root->data);
        inOrderTraversal(root->right);
    }
}

int main() {
    int postorder[] = {1, 7, 5, 50, 40, 10};
    int size = sizeof(postorder) / sizeof(postorder[0]);
    int index = size - 1;

    printf("In-order traversal of constructed BST: ");
    struct Node* root = constructBST(postorder, size, &index, INT_MIN, INT_MAX);
    inOrderTraversal(root);

    return 0;
}
        </pre>
    </div>
<h3>output</h3>
    <div id="div5">
        <pre>
In-order traversal of constructed BST: 1 5 7 10 40 50
--------------------------------
</pre>
    </div>
</body>
</html>
