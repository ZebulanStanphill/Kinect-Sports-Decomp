struct Item_823A2098 { char pad[0x20]; float v; };
struct S2_823A2098 { Item_823A2098 **arr; int pad[3]; unsigned idx; };
struct Y_823A2098 { S2_823A2098 *z; };
struct X_823A2098 { Y_823A2098 *y; };
struct Stats_823A2098 {
  char pad[0x90];
  unsigned max;
  unsigned min;
  unsigned count;
  int sum;
  void AddSum(int d) { sum = sum + d; }
  void UpdateMax(unsigned v) { if (v > max) max = v; }
  void Inc() { count = count + 1; }
};
struct Flat_823A2098 {
  char pad[0x968];
  unsigned min;
  void UpdateMin(unsigned v) { if (v < min || min == 0) min = v; }
};
struct M_823A2098 {
  char pad0[8];
  X_823A2098 *x;
  char pad1[0x878 - 0xc];
  float f878;
  char pad2[0x8d4 - 0x87c];
  Stats_823A2098 stats;
};
struct Sub_823A2098 { int pad; int pad1; M_823A2098 *m; };
struct Obj_823A2098 { int pad; int pad1; Sub_823A2098 *sub; };

extern "C" void fn_823A2098(Obj_823A2098 *o)
{
  M_823A2098 *m;
  unsigned v;
  m = o->sub->m;
  m->stats.AddSum((unsigned)m->f878);
  m = o->sub->m;
  v = (int)m->x->y->z->arr[m->x->y->z->idx]->v;
  m->stats.UpdateMax(v);
  if (v != 0) {
    ((Flat_823A2098 *)o->sub->m)->UpdateMin(v);
  }
  o->sub->m->stats.Inc();
}
