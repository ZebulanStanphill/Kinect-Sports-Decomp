typedef struct N {char pad[12]; void *key; char p[4]; struct N *next;} N; int fn_83008D78(N *p, void *key) { N *n=p; while(n) { if(key==n->key) return 1; n=n->next; } return 0; }

