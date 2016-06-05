#include <bits/stdc++.h>
#define REP(x, y, z) for(int x = y; x <= z; x++)
using namespace std;
struct Node{
    int val;
    Node *Left, *Right, *Parent;
    Node(){
        val = 0;
        Left = NULL;
        Right = NULL;
        Parent = NULL;
    }
    ~Node(){
        delete Left;
        delete Right;
    }
    void setValue(const int& v){
        val = v;
    }
    const int& getValue(){
        return val;
    }
    Node* insertLeft(Node* pa, const int& v){
        Left = new Node;
        Left->Parent = pa;
        Left->setValue(v);
    }
    Node* insertRight(Node* pa, const int& v){
        Right = new Node;
        Right->Parent = pa;
        Right->setValue(v);
    }
};
class BST{
public:
    Node* root;
    BST(){
        root = NULL;
    }
    void Insert(const int& v){
        if(root == NULL){
            root = new Node;
            root->setValue(v);
        }
        else{
            Node* n = root;
            while(1){
                int tmp = n->getValue();
                if(tmp > v){
                    if(n->Left == NULL){
                        n->insertLeft(n, v);
                        return;
                    }
                    else n = n->Left;
                }
                else if(tmp < v){
                    if(n->Right == NULL){
                        n->insertRight(n, v);
                        return;
                    }
                    else n = n->Right;
                }
                else{
                    printf("error:%d already exist\n", v);
                    return;
                }
            }
        }
    }
    Node* Search(const int& v){
        Node* n = root;
        while(n != NULL){
            int tmp = n->getValue();
            if(tmp > v)n = n->Left;
            else if(tmp < v)n = n->Right;
            else return n;
        }
        return NULL;
    }
    void Delete(const int& v){
        Node* n = Search(v);
        if(n == NULL)printf("%d is not in the tree\n", v);
        else if(n->Left == NULL && n->Right == NULL){
            if(n == root)root = NULL;
            else if(n->Parent->Left == n)n->Parent->Left = NULL;
            else if(n->Parent->Right == n)n->Parent->Right = NULL;
        }
        else if(n->Left != NULL && n->Right != NULL){
            Node* tmp = n->Right;
            if(tmp->Left == NULL){
                n->setValue(tmp->getValue());
                if(tmp->Right == NULL)n->Right = NULL;
                else{
                    n->Right= tmp->Right;
                    tmp->Right->Parent = n;
                }
            }
            else{
                while(tmp->Left != NULL)tmp = tmp->Left;
                n->setValue(tmp->getValue());
                if(tmp->Right == NULL)tmp->Parent->Left = NULL;
                else{
                    tmp->Parent->Left = tmp->Right;
                    tmp->Right->Parent = tmp->Parent;
                }
            }
        }
        else if(n->Left != NULL){
            if(n == root)root = n->Left;
            else{
                if(n->Parent->Left == n)n->Parent->Left = n->Left;
                else if(n->Parent->Right == n)n->Parent->Right = n->Left;
                n->Left->Parent = n->Parent;
            }
        }
        else if(n->Right != NULL){
            if(n == root)root = n->Right;
            else{
                if(n->Parent->Left == n)n->Parent->Left = n->Right;
                else if(n->Parent->Right == n)n->Parent->Right = n->Right;
                n->Right->Parent = n->Parent;
            }
        }
    }
    void Inorder(Node* n){
        if(n != NULL){
            Inorder(n->Left);
            printf(" %d", n->getValue());
            Inorder(n->Right);
        }
    }
    void Preorder(Node* n){
        if(n != NULL){
            printf(" %d", n->getValue());
            Preorder(n->Left);
            Preorder(n->Right);
        }
    }
};
int main(){
    BST tree;
    char c;
    while((c = getchar()) != EOF){
        switch(c){
            int tmp;
            case 'a':
                while(scanf("%d", &tmp)){
                    if(tmp == -1)break;
                    tree.Insert(tmp);
                }
                break;
            case 'b':
                while(scanf("%d", &tmp)){
                    if(tmp == -1)break;
                    tree.Delete(tmp);
                }
                break;
            case 'c':
                while(scanf("%d", &tmp)){
                    if(tmp == -1)break;
                    if(tree.Search(tmp) == NULL)printf("%d is not in the tree\n", tmp);
                    else printf("%d is in the tree\n", tmp);
                }
                break;
            case 'e':
                printf("Inorder:");
                tree.Inorder(tree.root);
                puts("");
                printf("Preorder:");
                tree.Preorder(tree.root);
                puts("");
        }
    }
}
