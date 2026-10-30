struct Item { unsigned __int64 value; unsigned __int64 rest; };
struct Table { Item *items; unsigned int flags; int max; };
extern "C" void fn_82CEA8B0(Table *t) { int n=t->max+1; for (int i=0;i<n;i++) t->items[i].value=~(unsigned __int64)0; t->flags &= 0x80000000; }
