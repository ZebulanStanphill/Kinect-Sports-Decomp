typedef unsigned int U32;
typedef int (*code)();
extern int fn_82687270();
extern int fn_826D7CA0();
extern unsigned char fn_826DC448();

typedef struct { int first; void *second; } Pair;
typedef struct { int *p; U32 v; } Res;

Res *fn_826DCF88(Res *param_1, int param_2, int *param_3)
{
  int h = *param_3;
  int iVar1 = *(int *)(param_2 + 0x1c);

  param_1->p = 0;
  param_1->v = 0;
  {
    int *piVar3;
    Pair stack_pair_28;
    int aiStack_30;

    stack_pair_28.first = 0;
    stack_pair_28.second = 0;
    aiStack_30 = h;
    if (fn_826DC448(*(U32 *)(*(int *)(iVar1 + 0xc) + 0x20), &stack_pair_28, &aiStack_30)) {
      piVar3 = (int *)fn_826D7CA0(&stack_pair_28, *(U32 *)(param_2 + 0x1c) + 0x18, &aiStack_30);
      if (piVar3 != 0) {
        if (((*(code *)(*piVar3 + 8))(piVar3) & 0x8000) != 0) {
          param_1->p = piVar3;
          param_1->v = *(U32 *)(aiStack_30 + 0x2c);
        }
      }
    }
    if ((stack_pair_28.first == 0) && (stack_pair_28.second != 0)) {
      fn_82687270(stack_pair_28.second);
    }
  }
  return param_1;
}
