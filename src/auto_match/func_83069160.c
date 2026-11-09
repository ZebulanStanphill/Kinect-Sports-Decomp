typedef struct N { char a[4]; struct N *next; char b[8]; struct D *data; } N; typedef struct D { char pad[0x28]; void *key; } D; typedef struct { char pad[0x10]; N *head; } O;
N *fn_83069160(O *p, void *key) { N *n=p->head; while(n) { if (n->data->key==key) return n; n=n->next; } return n; }
