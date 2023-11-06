
<html>
<head>
    
</head>
<body>
<h3>Code:</h3>
    <div id="div4">
        <pre>
#include &lt;stdio.h&gt; 
#include &lt;stdlib.h&gt; 
struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};
struct TreeNode* createNode(int data) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
void binaryTreeToBST(struct TreeNode* root, int* arr, int* index) {
    if (root == NULL) {
        return;
    }
    binaryTreeToBST(root->left, arr, index);
    root->data = arr[(*index)++];
    binaryTreeToBST(root->right, arr, index);
}
int countNodes(struct TreeNode* root) {
    if (root == NULL) {
        return 0;
    }
    return 1 + countNodes(root->left) + countNodes(root->right);
}
void storeInOrder(struct TreeNode* root, int* arr, int* index) {
    if (root == NULL) {
        return;
    }
    storeInOrder(root->left, arr, index);
    arr[(*index)++] = root->data;
    storeInOrder(root->right, arr, index);
}
void convertToBST(struct TreeNode* root) {
	int i,j;
    int numNodes = countNodes(root);
    int* arr = (int*)malloc(numNodes * sizeof(int));
    int index = 0;
    storeInOrder(root, arr, &index);
    for ( i = 0; i < numNodes - 1; i++) {
        for (j = i + 1; j < numNodes; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    index = 0;
    binaryTreeToBST(root, arr, &index);
    free(arr);
}
void inOrderTraversal(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }
    inOrderTraversal(root->left);
    printf("%d ", root->data);
    inOrderTraversal(root->right);
}

int main() {
   
    struct TreeNode* root = createNode(4);
    root->left = createNode(2);
    root->right = createNode(6);
    root->left->left = createNode(1);
    root->left->right = createNode(3);
    root->right->left = createNode(5);
    root->right->right = createNode(7);

    printf("Binary Tree (In-order traversal): ");
    inOrderTraversal(root);
    printf("\n");
    convertToBST(root);

    printf("Binary Search Tree (In-order traversal): ");
    inOrderTraversal(root);
    printf("\n");

    return 0;
}

        </pre>
    </div>
<h3>output</h3>
    <div id="div5">
        <pre>

Binary Tree (In-order traversal): 1 2 3 4 5 6 7
Binary Search Tree (In-order traversal): 1 2 3 4 5 6 7

--------------------------------
</pre>
    </div>
</body>
</html>
