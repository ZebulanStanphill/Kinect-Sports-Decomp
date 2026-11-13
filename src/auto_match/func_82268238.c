extern void fn_82230300(unsigned int, int, int);
extern void fn_82268B68(void *);
extern void fn_8265CA20(void *);
extern void fn_82A1C0F0(void *);
extern void fn_82A1E0B8(int);

typedef struct { unsigned int begin, end, cap; } Vec_82268238;
typedef struct { unsigned int kind; int pad[2]; int f0c; int pad2[3]; int f1c; int sub[1]; } Res_82268238;

void fn_82268238(int param_1)
{
  Res_82268238 *piVar1;
  unsigned int p, e;
  Vec_82268238 *v;

  piVar1 = *(Res_82268238 **)(param_1 + 0x30);
  if (piVar1 != 0) {
    if (piVar1->f1c != -1) {
      if (piVar1->kind == 0x3e5) {
        fn_82A1C0F0(piVar1);
      }
      fn_82A1E0B8(piVar1->f1c);
    }
    fn_82A1E0B8(piVar1->f0c);
    fn_82268B68(piVar1->sub);
    fn_8265CA20(piVar1);
  }
  p = *(unsigned int *)(param_1 + 0x20);
  if (p != 0) {
    e = *(unsigned int *)(param_1 + 0x24);
    for (; p != e; p += 0x38) {
      fn_82230300(p + 8, 1, 0);
    }
    fn_8265CA20(*(void **)(param_1 + 0x20));
  }
  *(unsigned int *)(param_1 + 0x20) = 0;
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(unsigned int *)(param_1 + 0x28) = 0;
  v = (Vec_82268238 *)(param_1 + 0x10);
  if (v->begin != 0) {
    for (p = v->begin; p != v->end; p += 0x78) {
    }
    fn_8265CA20((void *)v->begin);
  }
  v->begin = 0;
  v->end = 0;
  v->cap = 0;
  fn_82268B68((void *)param_1);
}
