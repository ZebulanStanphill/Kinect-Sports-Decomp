typedef struct { int pad[16]; unsigned key; } Item; int fn_82965240(int a,int b,int *p) { Item **v=(Item **)p[5]; unsigned x=v[a]->key, y=v[b]->key; if (x<y) return -1; return x>y; }
