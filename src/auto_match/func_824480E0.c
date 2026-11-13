extern int fn_82437388();
extern int fn_82448010();
extern int fn_8244C688();
extern int fn_8265C9E0();
extern unsigned int lbl_821B9CF0;


unsigned int * fn_824480E0(unsigned int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  
  fn_8244C688();
  *param_1 = &lbl_821B9CF0;
  iVar2 = fn_8265C9E0(0x44);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_82448010();
  }
  param_1[0x12] = iVar2;
  iVar1 = *(int *)(*(int *)param_1[0x10] + 0xa0);
  if (((iVar1 == 0) || (*(int *)(iVar1 + 0x40) != 1)) ||
     (iVar1 = *(int *)(*(int *)param_1[0x10] + 0xa0), iVar1 == 0)) {
    *(unsigned int *)(param_1[0x12] + 0x14) = *(unsigned int *)(param_2 + 0x1a8);
    *(unsigned int *)(param_1[0x12] + 0x18) = *(unsigned int *)(param_2 + 0x1ac);
    uVar3 = *(unsigned int *)(param_2 + 0x1b0);
  }
  else {
    *(unsigned int *)(iVar2 + 0x14) = *(unsigned int *)(iVar1 + 0x160);
    *(unsigned int *)(param_1[0x12] + 0x18) = *(unsigned int *)(iVar1 + 0x164);
    uVar3 = *(unsigned int *)(iVar1 + 0x168);
  }
  *(unsigned int *)(param_1[0x12] + 0x1c) = uVar3;
  *(unsigned int *)(param_1[0x12] + 0x10) = *(unsigned int *)(param_2 + 0x19c);
  *(unsigned int *)(param_1[0x12] + 0x20) = *(unsigned int *)(param_2 + 0x1a0);
  *(unsigned int *)(param_1[0x12] + 0x24) = *(unsigned int *)(param_2 + 0x1a4);
  *(unsigned int *)(param_1[0x10] + 0x208) = 0x1a;
  *(unsigned int *)(param_1[0x10] + 0x114) = 2;
  fn_82437388(param_1);
  *(unsigned int *)(param_1[0x10] + 0x180) = 0x23;
  return param_1;
}

