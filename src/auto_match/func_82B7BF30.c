typedef int (*code)();
extern unsigned int fn_82BA0310(unsigned int v);

unsigned int fn_82B7BF30(int param_1, int param_2)
{
  unsigned int uVar1;
  unsigned int uStack_20;
  unsigned char auStack_1c[4];

  uVar1 = fn_82BA0310(*(unsigned int *)(param_1 + 0xab0));
  (*(code *)(**(int **)(param_1 + 0x5d0) + 0x10))
            (*(int **)(param_1 + 0x5d0), param_2, uVar1, &uStack_20, auStack_1c);
  return uStack_20;
}
