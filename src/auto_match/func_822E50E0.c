extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_822B7900();
extern int fn_8235A120();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_8265CA60();
extern int fn_8265CAA0();
extern int fn_82A1DD38();


unsigned __int64 fn_822E50E0(int param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [64];
  
  iVar3 = 0;
  uVar1 = fn_8251F720(param_2,0);
  if (uVar1 != 0) {
    uVar2 = fn_8251FBA8(uVar1);
    iVar3 = fn_8265CA60();
    fn_82A1DD38(iVar3,uVar1,uVar2);
  }
  *(unsigned char **)(iVar3 + 0x48) = auStack_40;
  *(unsigned char **)(iVar3 + 0x4c) = auStack_50;
  **(unsigned int **)(iVar3 + 0x48) = *(unsigned int *)(param_1 + 0x20);
  *(unsigned int *)(*(int *)(iVar3 + 0x48) + 4) = *(unsigned int *)(param_1 + 0x118);
  *(int *)(*(int *)(iVar3 + 0x48) + 8) = param_1 + 0x80;
  *(int *)(*(int *)(iVar3 + 0x48) + 0xc) = param_1 + 0xc0;
  **(int **)(iVar3 + 0x4c) = param_1;
  uVar2 = fn_8235A120();
  uVar2 = fn_822B7900(uVar2,iVar3);
  fn_8265CAA0(iVar3);
  if ((uVar1 & 0xffffffff) != 0) {
    fn_8251FA58(uVar1);
  }
  return uVar2;
}

