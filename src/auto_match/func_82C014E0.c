extern int fn_823AA370();
extern int fn_8263CBB0();
extern int fn_828D45F8();


unsigned __int64 fn_82C014E0(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  
  iVar3 = fn_828D45F8(param_2);
  if ((*(int *)(param_1 + 0x7c) == iVar3) &&
     (iVar3 = fn_823AA370(param_2), *(int *)(param_1 + 0x80) == iVar3)) {
    return 0;
  }
  uVar4 = fn_828D45F8(param_2);
  *(unsigned int *)(param_1 + 0x7c) = uVar4;
  uVar5 = fn_823AA370(param_2);
  uVar1 = *(unsigned int *)(param_1 + 0x7c);
  *(unsigned int *)(param_1 + 0x164) = uVar5;
  uVar2 = uVar1 >> 1;
  *(unsigned int *)(param_1 + 0x80) = uVar5;
  *(unsigned int *)(param_1 + 0x168) = uVar5 >> 1;
  *(unsigned int *)(param_1 + 0x150) = uVar2;
  *(unsigned int *)(param_1 + 0x158) = uVar1;
  *(unsigned int *)(param_1 + 0x14c) = uVar1;
  *(unsigned int *)(param_1 + 0x154) = uVar2;
  *(unsigned int *)(param_1 + 0x15c) = uVar2;
  *(unsigned int *)(param_1 + 0x160) = uVar2;
  *(unsigned int *)(param_1 + 0x16c) = uVar5 >> 1;
                    /* WARNING: Subroutine does not return */
  fn_8263CBB0(*(unsigned int *)(param_1 + 0x38),0,0,0x80000000);
}

