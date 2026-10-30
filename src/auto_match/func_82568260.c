typedef struct { char pad[0x10]; unsigned int f10; unsigned int f14; unsigned int f18; unsigned int f1c; unsigned int f20; unsigned int f24; char pad28[8]; } Rec_82568260;
typedef struct { char pad[0x60]; unsigned int *f60; char pad64[0x70]; int idx; Rec_82568260 *recs; } Obj_82568260;
typedef struct { char pad[0x18]; int f18; } Arg_82568260;
extern unsigned int fn_825BCB58(unsigned int, int);

void fn_82568260(Obj_82568260 *o, Arg_82568260 *a)
{
  unsigned int v;
  int i;
  v = o->f60 ? *o->f60 : 0;
  v = fn_825BCB58(v, a->f18);
  i = o->idx;
  o->recs[i].f20 = 1;
  o->recs[i].f24 = 1;
  o->recs[i].f10 = v;
  o->recs[i].f14 = 0;
  o->recs[i].f18 = 0;
  o->recs[i].f1c = 0;
}
