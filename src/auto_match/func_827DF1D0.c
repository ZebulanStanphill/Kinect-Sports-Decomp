typedef struct Node { char pad[12]; void *value; } Node;
extern void fn_827E0658(Node **, void *, void **);
void *fn_827DF1D0(char *p,void *key) { Node *a[4]; fn_827E0658(a,p+0xf0,&key); if(a[0] != *(Node **)(p+0xf4)) return a[0]->value; return 0; }
