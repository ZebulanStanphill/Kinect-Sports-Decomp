typedef struct Div_824973B0 { int quot; int rem; } Div_824973B0;
typedef struct Obj_824973B0 {
  char pad[0x20];
  unsigned mask;
  unsigned limit;
} Obj_824973B0;

extern Div_824973B0 fn_82F65C10(int n, int d);

unsigned fn_824973B0(Obj_824973B0 *o, int *seed)
{
  Div_824973B0 d;
  int v;
  unsigned r;
  d = fn_82F65C10(*seed, 0x1f31d);
  v = d.rem * 0x41a7 - d.quot * 0xb14;
  if (v < 0)
    v += 0x7fffffff;
  r = o->mask & v;
  if (o->limit <= r)
    r = r - (o->mask >> 1) - 1;
  return r;
}
