/* LTCG lane: --ltcg func_826ABE30.c gives 100.0% (variadic callee frame) */
typedef struct Pair_826B05C0 { unsigned first; unsigned second; unsigned char flags; char pad[7]; } Pair_826B05C0;
typedef struct Env_826B05C0 { char pad[8]; unsigned top; unsigned limit; int pad2; unsigned f14; char pad3[0x78 - 0x18]; struct { char pad[0x288]; int f288; } *gfx; } Env_826B05C0;
typedef struct Ctx_826B05C0 { Env_826B05C0 *env; char pad[0x20]; int log; char pad2[0x36 - 0x28]; unsigned char flags; } Ctx_826B05C0;

extern unsigned fn_8267B890(int, int, int);
extern void fn_826824B0(unsigned);
extern void fn_82683270(unsigned *, int);
extern void fn_82695DA0(void *, unsigned);
extern void fn_82696330(void *);
extern unsigned fn_82696958(void *, Env_826B05C0 *);
extern void fn_82696B20(Pair_826B05C0 *, void *, Env_826B05C0 *);
extern void fn_826A7A58(unsigned, void *, Pair_826B05C0 *);
extern void fn_826ABE30(void *, const char *);
extern unsigned fn_826C2AC8(unsigned, void *, int);
extern void fn_826C2D98(unsigned, void *, unsigned);

void fn_826B05C0(Ctx_826B05C0 *param_1)
{
  char v1[16];
  char v2[16];
  Pair_826B05C0 pa;
  Pair_826B05C0 pb;
  unsigned char obj[16];
  unsigned top;
  unsigned arg;
  unsigned iVar2;
  unsigned mem;
  unsigned r;
  unsigned *sp;
  unsigned t;

  fn_82695DA0(v1, param_1->env->top);
  top = param_1->env->top;
  arg = top - 0x10;
  if (top <= param_1->env->limit)
    arg = param_1->env->f14;
  fn_82695DA0(v2, arg);
  fn_82696B20(&pa, v1, param_1->env);
  fn_82696B20(&pb, v2, param_1->env);
  if (pa.first == 0 || pb.first == 0) {
    if ((param_1->flags & 0x80) != 0) {
      if (pa.first == 0)
        fn_826ABE30(&param_1->log, "Error: can't extend with unknown super class.\n");
      else
        fn_826ABE30(&param_1->log, "Error: can't extend the unknown class.\n");
    }
  } else {
    obj[0] = 0;
    if ((*(unsigned char (**)(int, void *, unsigned, void *))(*(int *)(pa.first + 0x10) + 0x2c))(pa.first + 0x10, (char *)param_1->env + 0x78, *(unsigned *)((char *)param_1->env + 0x78) + 0x130, obj) == 0 || obj[0] != 6) {
      if ((param_1->flags & 0x80) != 0)
        fn_826ABE30(&param_1->log, "Error: can't extend by the class w/o prototype.\n");
    } else {
      iVar2 = fn_82696958(obj, param_1->env);
      if (iVar2 != 0)
        *(unsigned *)(iVar2 + 8) = (*(int *)(iVar2 + 8) + 1U) & 0x8fffffff;
      mem = fn_8267B890(param_1->env->gfx->f288, 0x50, 0);
      r = mem != 0 ? fn_826C2AC8(mem, (char *)param_1->env + 0x78, iVar2) : 0;
      fn_826C2D98(pb.first, (char *)param_1->env + 0x78, r);
      fn_826A7A58(r + 0x10, (char *)param_1->env + 0x78, &pa);
      if (r != 0)
        fn_826824B0(r);
      if (iVar2 != 0)
        fn_826824B0(iVar2);
    }
    fn_82696330(obj);
  }
  sp = &param_1->env->top;
  t = *sp;
  if (t - 0x20U < param_1->env->limit) {
    fn_82683270(sp, 2);
  } else {
    fn_82696330((void *)t);
    *sp = *sp - 0x10;
    fn_82696330((void *)*sp);
    *sp = *sp - 0x10;
  }
  if ((pb.flags & 2) == 0 && pb.first != 0)
    fn_826824B0(pb.first);
  pb.first = 0;
  if ((pb.flags & 1) == 0 && pb.second != 0)
    fn_826824B0(pb.second);
  pb.second = 0;
  if ((pa.flags & 2) == 0 && pa.first != 0)
    fn_826824B0(pa.first);
  pa.first = 0;
  if ((pa.flags & 1) == 0 && pa.second != 0)
    fn_826824B0(pa.second);
  pa.second = 0;
  fn_82696330(v2);
  fn_82696330(v1);
}
