typedef struct Node { struct Node *left,*right; } Node; void fn_82822390(Node *p,Node **out) { Node *n=p->right; Node *l=p->left; if(n) { do { *out=n; n=n->right; } while(n); } else *out=l ? p : 0; }
