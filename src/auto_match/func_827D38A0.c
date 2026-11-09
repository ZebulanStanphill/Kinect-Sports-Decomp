typedef struct { int type; int pad[14]; unsigned int x; } T_827D38A0;
int inflateSyncPoint(int *p) { T_827D38A0 *q; if (!p || !(q=(T_827D38A0 *)p[7])) return -2; return q->type==13 && q->x==0; }
