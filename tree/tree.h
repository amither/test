struct _node
{
    int v;
    struct _node *left;
    struct _node *right;

    _node(int i, pleft, pright)
    {
        v = i;
        left = pleft;
        right = pright;
    }
    
    _node(int i)
    
    {
        _node(i, NULL, NULL);  
    }
}

typedef struct _node node;

