struct Item { int value; int rest; };
struct Table { Item *items; unsigned int flags; int max; };
extern "C" void fn_82CEA480(Table *t) { int n=t->max+1; for (int i=0;i<n;i++) t->items[i].value=-1; t->flags &= 0x80000000; }
