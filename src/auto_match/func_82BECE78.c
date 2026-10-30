extern __int64 fn_82BA02A8(__int64);
extern int fn_82BF6FC0(void *, unsigned int, void *, unsigned int);
extern int fn_82BF7098(void *, unsigned int, void *, unsigned int);
extern unsigned int fn_82F6D460(void *, unsigned int);

typedef struct Vt_82BECE78 { void *s0; void *s1; int (*f8)(void *, void *); } Vt_82BECE78;
typedef struct Sub_82BECE78 { Vt_82BECE78 *vt; } Sub_82BECE78;
typedef struct Obj_82BECE78 { char pad[0xc]; Sub_82BECE78 *sub; __int64 f10; int f18; void *f1c; } Obj_82BECE78;
typedef struct Str_82BECE78 { char pad[0xc]; unsigned int pos; } Str_82BECE78;

int fn_82BECE78(Obj_82BECE78 *param_1, Str_82BECE78 *param_2)
{
  unsigned int start;
  unsigned int uVar1;
  int tmp0, tmp1, tmp2;
  __int64 tmp8;

  if (param_2 != 0 && param_1->sub != 0) {
    start = param_2->pos;
    tmp0 = 0;
    if (fn_82BF6FC0(param_2, start, &tmp0, 4) != 0 &&
        param_1->sub->vt->f8(param_1->sub, param_2) != 0) {
      tmp1 = (param_2->pos - start) - 4;
      fn_82BF7098(param_2, start, &tmp1, 4);
      tmp8 = fn_82BA02A8(param_1->f10);
      if (fn_82BF6FC0(param_2, param_2->pos, &tmp8, 8) != 0) {
        tmp2 = param_1->f18;
        if (fn_82BF6FC0(param_2, param_2->pos, &tmp2, 4) != 0) {
          if (param_1->f1c != 0) {
            uVar1 = fn_82F6D460(param_1->f1c, 0x104);
          } else {
            uVar1 = 0;
          }
          if (uVar1 != 0x104) {
            tmp0 = uVar1;
            if (fn_82BF6FC0(param_2, param_2->pos, &tmp0, 4) != 0 &&
                (uVar1 == 0 || fn_82BF6FC0(param_2, param_2->pos, param_1->f1c, uVar1) != 0)) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}
