
<html>
<head>
    
</head>
<body>
<h3>Code:</h3>
    <div id="div4">
        <pre>
#include &lt;stdio.h&gt; 
#include &lt;stdlib.h&gt; 

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
int findKthSmallest(struct Node* root, int k) {
    struct Node* stack[100];
    int top = -1;
    struct Node* current = root;

    while (current || top >= 0) {
        while (current) {
            stack[++top] = current;
            current = current->left;
        }

        current = stack[top--];
        k--;

        if (k == 0) {
            return current->data;
        }

        current = current->right;
    }

    return -1; 
}

int main() {
    struct Node* root = newNode(50);
    root->left = newNode(30);
    root->right = newNode(70);
    root->left->left = newNode(20);
    root->left->right = newNode(40);
    root->right->left = newNode(60);
    root->right->right = newNode(80);

    int k = 3;

    int kthSmallest = findKthSmallest(root, k);

    if (kthSmallest != -1) {
        printf("The %dth smallest element in the BST is: %d\n", k, kthSmallest);
    } else {
        printf("The BST doesn't have %d elements.\n", k);
    }

    return 0;
}
        </pre>
    </div>
<h3>output</h3>
    <div id="div5">
        <pre>

The 3th smallest element in the BST is: 40

--------------------------------
</pre>
    </div>
</body>
</html>
