extern int fn_822B7900();
extern int fn_8235A170();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_82536690();
extern int fn_8265C9E0();
extern int fn_8265CA60();
extern int fn_8265CAA0();
extern int fn_82A1DD38();
extern unsigned int iStack_40;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;


unsigned __int64 fn_82368640(int param_1,unsigned __int64 param_2,int param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int *apuStack_50 [4];
  struct { int first; unsigned int second; } stack_pair_40;

  unsigned int uStack_38;
  unsigned int uStack_34;
  
  apuStack_50[0] = (unsigned int *)fn_8265C9E0(0x10);
  iVar3 = 0;
  if (apuStack_50[0] == (unsigned int *)0x0) {
    apuStack_50[0] = (unsigned int *)0x0;
  }
  else {
    *apuStack_50[0] = 0;
    apuStack_50[0][1] = 0;
    apuStack_50[0][2] = 0;
  }
  fn_82536690(param_1 + 0x20,apuStack_50);
  uVar1 = fn_8251F720(param_2,0);
  if (uVar1 != 0) {
    uVar2 = fn_8251FBA8(uVar1);
    iVar3 = fn_8265CA60();
    fn_82A1DD38(iVar3,uVar1,uVar2);
  }
  uStack_38 = *(unsigned int *)(((unsigned int)LZCOUNT(param_3) >> 3 & 4) + **(int **)(param_1 + 8));
  uStack_34 = *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 4);
  stack_pair_40.second = *(unsigned int *)(*(int *)(param_1 + 0x1c) + 8);
  *(unsigned int *)(iVar3 + 0x24) = *(unsigned int *)(param_3 * 4 + **(int **)(param_1 + 8));
  *(unsigned int **)(iVar3 + 0x28) = apuStack_50[0];
  *(int **)(iVar3 + 0x2c) = &stack_pair_40.first;
  stack_pair_40.first = param_1;
  uVar2 = fn_8235A170();
  uVar2 = fn_822B7900(uVar2,iVar3);
  fn_8265CAA0(iVar3);
  if ((uVar1 & 0xffffffff) != 0) {
    fn_8251FA58(uVar1);
  }
  return uVar2;
}

