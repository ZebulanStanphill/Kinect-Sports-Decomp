typedef struct Node_82661160 Node_82661160;
typedef struct Tree_82661160 Tree_82661160;

extern Node_82661160 **fn_82F953B8(Node_82661160 *);
extern Node_82661160 **fn_8265D5A8(Node_82661160 *);
extern Node_82661160 **fn_82F92208(Node_82661160 *);
extern char *fn_82F953A8(Node_82661160 *);
extern Node_82661160 **fn_82F92000(Tree_82661160 *);

void fn_82661160(Tree_82661160 *tree, Node_82661160 *where)
{
    Node_82661160 *pnode = *fn_82F953B8(where);
    *fn_82F953B8(where) = *fn_8265D5A8(pnode);
    if (*fn_82F953A8(*fn_8265D5A8(pnode)) == 0)
        *fn_82F92208(*fn_8265D5A8(pnode)) = where;
    *fn_82F92208(pnode) = *fn_82F92208(where);
    if (where == *fn_82F92000(tree))
        *fn_82F92000(tree) = pnode;
    else if (where == *fn_8265D5A8(*fn_82F92208(where)))
        *fn_8265D5A8(*fn_82F92208(where)) = pnode;
    else
        *fn_82F953B8(*fn_82F92208(where)) = pnode;
    *fn_8265D5A8(pnode) = where;
    *fn_82F92208(where) = pnode;
}
