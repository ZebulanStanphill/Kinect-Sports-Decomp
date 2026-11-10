typedef struct Node_825B85F0 { struct Node_825B85F0 *left, *parent, *right; char pad[5]; unsigned char nil; } Node_825B85F0;
typedef struct Tree_825B85F0 { int allocator; Node_825B85F0 *head; unsigned count; int pad; } Tree_825B85F0;
extern Tree_825B85F0 lbl_83297034;
extern void fn_822733C8(Tree_825B85F0 *, Node_825B85F0 *);
extern void fn_8265CA20(void *);
extern void fn_8259BDA8(Node_825B85F0 **);
extern void fn_825B86B8(void *, Node_825B85F0 *);
static __forceinline void erase_825B85F0(Tree_825B85F0 *tree,unsigned first,unsigned last) {
 char tmp[4];
 if(first==(unsigned)tree->head->left && last==(unsigned)tree->head) {
  Node_825B85F0 *p=tree->head->parent;
  while(!p->nil){Node_825B85F0 *q;fn_822733C8(tree,p->right);q=p->left;fn_8265CA20(p);p=q;}
  tree->head->parent=tree->head;tree->head->left=tree->head;tree->head->right=tree->head;tree->count=0;
 }else while(first!=last){Node_825B85F0 *p=(Node_825B85F0 *)first;fn_8259BDA8((Node_825B85F0 **)&first);fn_825B86B8(tmp,p);}
}
void fn_825B85F0(void) {
 Node_825B85F0 *first=lbl_83297034.head->left;
 Node_825B85F0 *last=lbl_83297034.head;
 erase_825B85F0(&lbl_83297034,(unsigned)first,(unsigned)last);
 fn_8265CA20(lbl_83297034.head);
}
