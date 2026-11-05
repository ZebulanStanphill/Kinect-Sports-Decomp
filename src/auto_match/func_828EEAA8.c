typedef struct Node_828EEAA8 { struct Node_828EEAA8 *left,*parent,*right; char value[62]; unsigned char nil; } Node;
typedef struct Tree_828EEAA8 { int pad; Node *head; } Tree;
extern unsigned char fn_828A0C20(void *, const void *);
Node *fn_828EEAA8(Tree *t,const void *key) {
 Node *p=t->head->parent, *best=t->head;
 while (!p->nil) {
  if (fn_828A0C20(p->value,key)) p=p->right;
  else {best=p;p=p->left;}
 }
 return best;
}
