
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
int findKthLargest(struct Node* root, int k) {
    struct Node* curr = root;
    int count = 0;
    int kthLargest = -1;

    while (curr != NULL) {
        if (curr->right == NULL) {
            count++;

            if (count == k) {
                kthLargest = curr->data;
            }

            curr = curr->left;
        } else {
            struct Node* pre = curr->right;

            while (pre->left != NULL && pre->left != curr) {
                pre = pre->left;
            }

            if (pre->left == NULL) {
                pre->left = curr;
                curr = curr->right;
            } else {
                pre->left = NULL;
                count++;

                if (count == k) {
                    kthLargest = curr->data;
                }

                curr = curr->left;
            }
        }
    }

    return kthLargest;
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
    int kthLargest = findKthLargest(root, k);

    if (kthLargest != -1) {
        printf("The %dth largest element is %d\n", k, kthLargest);
    } else {
        printf("The %dth largest element is not present in the BST\n", k);
    }

    return 0;
}
        </pre>
    </div>
<h3>output</h3>
    <div id="div5">
        <pre>

The 3th largest element is 60

--------------------------------
</pre>
    </div>
</body>
</html>
