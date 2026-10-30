typedef struct Pair_826AAB20 { int first; int second; } Pair_826AAB20;
typedef struct Obj_826AAB20 {
  unsigned int f0;
  int pad[6];
  int f1c;
  int f20;
  unsigned int f24;
  unsigned int f28;
} Obj_826AAB20;
extern void fn_82682298(Obj_826AAB20 *p, Pair_826AAB20 *pr);

void fn_826AAB20(Obj_826AAB20 *p)
{
  unsigned int n = p->f0; Pair_826AAB20 pr; pr.second = 0; pr.first = 0; fn_82682298(p, &pr); p->f1c = 0; p->f24 = n < p->f24 ? p->f24 : n; p->f28 = n;
}
