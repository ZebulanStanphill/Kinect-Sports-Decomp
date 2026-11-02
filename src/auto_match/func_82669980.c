typedef struct Node_82669980 Node_82669980;
typedef struct Tree_82669980 Tree_82669980;

extern Node_82669980 **fn_8265D5A8(Node_82669980 *);
extern Node_82669980 **fn_82F953B8(Node_82669980 *);
extern Node_82669980 **fn_82F92208(Node_82669980 *);
extern char *fn_82F953A8(Node_82669980 *);
extern Node_82669980 **fn_82F92000(Tree_82669980 *);

void fn_82669980(Tree_82669980 *tree, Node_82669980 *where)
{
    Node_82669980 *pnode = *fn_8265D5A8(where);
    *fn_8265D5A8(where) = *fn_82F953B8(pnode);
    if (*fn_82F953A8(*fn_82F953B8(pnode)) == 0)
        *fn_82F92208(*fn_82F953B8(pnode)) = where;
    *fn_82F92208(pnode) = *fn_82F92208(where);
    if (where == *fn_82F92000(tree))
        *fn_82F92000(tree) = pnode;
    else if (where == *fn_82F953B8(*fn_82F92208(where)))
        *fn_82F953B8(*fn_82F92208(where)) = pnode;
    else
        *fn_8265D5A8(*fn_82F92208(where)) = pnode;
    *fn_82F953B8(pnode) = where;
    *fn_82F92208(where) = pnode;
}
