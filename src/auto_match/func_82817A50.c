typedef struct { int off; int val; } E;
typedef struct { int first; int p4; int p8; int flag; int n; int p14; E e[1]; } O;
void fn_82817A50(O *o, void (*cb)(int, int, int), int arg, int base)
{ int i; E *e; cb(base, arg, o->first);
  if (o->flag != 0) { e = o->e; i = 0;
    if (o->n > 0) { do { *(int *)(e->off + base) = e->val + base; i++; e++; } while (i < o->n); } } }
