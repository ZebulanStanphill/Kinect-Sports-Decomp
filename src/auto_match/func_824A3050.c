typedef struct Str_824A3050 { union { char buf[16]; char *ptr; } u; unsigned len, cap; } Str;
typedef struct Node_824A3050 { struct Node_824A3050 *left,*parent,*right; Str key; char pad[13]; unsigned char nil; } Node;
typedef struct { int pad; Node *head; } Tree;
extern int fn_8260D428(Str *,unsigned,unsigned,const char *,unsigned);
static __forceinline int compare(Str *a,Str *b) { unsigned n=b->len; const char *s; if(b->cap>=16) s=b->u.ptr; else s=b->u.buf; return fn_8260D428(a,0,a->len,s,n); }
Node *fn_824A3050(Tree *t,Str *key) {Node *best=t->head,*p=best->parent; while(!p->nil) {if(compare(&p->key,key)<0) p=p->right; else {best=p;p=p->left;} } return best;}
