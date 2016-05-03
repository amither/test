#include <iostream>
using namespace std;
struct _node
{
    int v;
    struct _node *left;
    struct _node *right;

    _node(int i, struct _node *pleft, struct _node *pright)
    {
        v = i;
        left = pleft;
        right = pright;
    };
};

typedef struct _node node;

void print(node *r)
{
    if (r==NULL)return;
    cout << (r->v) << endl;
    print (r->left);
    print (r->right);
}

node *get_last_comm(node * root , node *n1, node *n2)
{
    if (root == NULL)
        return NULL;

    if (root == n1 || root == n2)
        return root;

    node *pleft = get_last_comm(root->left, n1, n2);
    node *pright = get_last_comm(root->right, n1, n2);

    if (pleft ==  NULL)
        return pright;

    if (pright == NULL)
        return pleft;

    return root;
}

int main()
{
    node a(1, NULL, NULL);
    node b(2, NULL, NULL);
    node c(3, NULL, NULL);
    node d(4, &a, &b);
    node e(5, NULL, &c);
    node r(6, &d, &e);
    print(&r);
    cout << "----" << endl;
    node *comm = get_last_comm(&r, &a , &b);
    cout << comm->v << endl;
    return 0;
}
