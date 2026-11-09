typedef struct { int pad[21]; unsigned n; int pad2; int *v; } Table_82E62EC8; int fn_82E62EC8(Table_82E62EC8 *p,unsigned i) { int r=0; if (i>=p->n) r=0x80070057; else p->v[i]=0; return r; }
