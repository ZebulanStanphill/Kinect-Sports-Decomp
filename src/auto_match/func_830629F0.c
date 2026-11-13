extern unsigned int *auStack_20;
extern int fn_83062940();
extern unsigned int iStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


__int64 fn_830629F0(unsigned int *param_1)

{
  int *piVar1;
  int iVar2;
  unsigned int uVar3;
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  int iStack_28;
  unsigned char auStack_20 [16];
  
  stack_pair_30.first = *param_1;
  iStack_28 = param_1[4] + param_1[3];
  stack_pair_30.second = 0;
  piVar1 = (int *)fn_83062940(auStack_20,&stack_pair_30.first,1);
  iVar2 = 0;
  if ((int *)*piVar1 != (int *)0x0) {
    iVar2 = *(int *)*piVar1;
  }
  uVar3 = (unsigned int)piVar1[2] >> 2;
  if (*(unsigned int *)(iVar2 + 8) <= uVar3) {
    uVar3 = uVar3 - *(unsigned int *)(iVar2 + 8);
  }
  return (unsigned __int64)*(unsigned int *)(*(int *)(iVar2 + 4) + uVar3 * 4) +
         ((unsigned __int64)(unsigned int)piVar1[2] & 3) * 4;
}

