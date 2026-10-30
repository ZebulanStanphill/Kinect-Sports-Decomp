typedef struct Arg_82494808 { void *vt; void *p; float f; unsigned a; unsigned b; } Arg_82494808;
typedef struct Item_82494808 { int *tab; char pad[0xc]; unsigned idx; } Item_82494808;
typedef struct List_82494808 { Item_82494808 **beg; Item_82494808 **end; } List_82494808;
typedef struct Obj_82494808 { char pad[4]; char sub[0x10]; List_82494808 *list; } Obj_82494808;
extern void fn_822ABBF0(int, Arg_82494808 *);
extern unsigned int lbl_821BEEBC;

void fn_82494808(Obj_82494808 *o, float f, unsigned a, unsigned b)
{
  Arg_82494808 arg;
  List_82494808 *l = o->list;
  Item_82494808 **it;
  arg.p = o->sub;
  arg.f = f;
  arg.vt = &lbl_821BEEBC;
  arg.a = a;
  arg.b = b;
  for (it = l->beg; it < l->end; it++)
    fn_822ABBF0((*it)->tab[(*it)->idx], &arg);
}
