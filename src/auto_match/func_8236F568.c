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


unsigned __int64 fn_8236F568(int param_1,unsigned __int64 param_2,int param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int *puStack_40;
  int aiStack_3c [1];
  
  puStack_40 = (unsigned int *)fn_8265C9E0(0x10);
  iVar3 = 0;
  if (puStack_40 == (unsigned int *)0x0) {
    puStack_40 = (unsigned int *)0x0;
  }
  else {
    *puStack_40 = 0;
    puStack_40[1] = 0;
    puStack_40[2] = 0;
  }
  fn_82536690(param_1 + 0x20,&puStack_40);
  uVar1 = fn_8251F720(param_2,0);
  if (uVar1 != 0) {
    uVar2 = fn_8251FBA8(uVar1);
    iVar3 = fn_8265CA60();
    fn_82A1DD38(iVar3,uVar1,uVar2);
  }
  *(unsigned int *)(iVar3 + 0x24) = *(unsigned int *)(**(int **)(param_1 + 8) + param_3 * 4);
  *(unsigned int **)(iVar3 + 0x28) = puStack_40;
  *(int **)(iVar3 + 0x2c) = aiStack_3c;
  aiStack_3c[0] = param_1;
  uVar2 = fn_8235A170();
  uVar2 = fn_822B7900(uVar2,iVar3);
  fn_8265CAA0(iVar3);
  if ((uVar1 & 0xffffffff) != 0) {
    fn_8251FA58(uVar1);
  }
  return uVar2;
}

