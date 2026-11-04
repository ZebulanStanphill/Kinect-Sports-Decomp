typedef struct Node_828CCE98 { struct Node_828CCE98 *left,*parent,*right; unsigned key; char pad[25]; unsigned char nil; } Node;
typedef struct { int pad; Node *head; } Tree;
void fn_828CCE98(Node **out, Tree *t, unsigned *key) {
 Node *lo=t->head; Node *hi=t->head; Node *p=t->head->parent;
 while(!p->nil) {
 if(p->key < *key) p=p->right;
 else { if(hi->nil && *key < p->key) hi=p; lo=p; p=p->left; }
 }
 if(hi->nil) p=t->head->parent; else p=hi->left;
 while(!p->nil) { if(*key < p->key) { hi=p; p=p->left; } else p=p->right; }
 out[1]=hi; out[0]=lo;
}
