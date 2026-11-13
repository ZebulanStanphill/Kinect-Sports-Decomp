extern int fn_829E5388();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005344;
extern unsigned int lbl_82005748;
extern unsigned int lbl_8201EBA4;
extern unsigned int lbl_8201FBB0;
extern unsigned int lbl_82057AB0;
extern unsigned int lbl_82057AB8;
extern unsigned int lbl_82057ABC;
extern unsigned int lbl_821AAD20;


int fn_829E2FF8(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  
  uVar1 = lbl_82005748;
  *(unsigned int *)(param_1 + 8) = 0;
  uVar2 = lbl_8201EBA4;
  *(unsigned int *)(param_1 + 0x18) = 1;
  uVar3 = lbl_8201FBB0;
  *(unsigned int *)(param_1 + 0x1c) = 1;
  *(unsigned int *)(param_1 + 0x10) = uVar1;
  *(unsigned int *)(param_1 + 0x20) = 4;
  *(unsigned int *)(param_1 + 0x14) = uVar1;
  *(unsigned __int64 *)(param_1 + 0x28) = 1;
  *(unsigned int *)(param_1 + 0x34) = uVar2;
  *(unsigned int *)(param_1 + 0x30) = 0;
  *(unsigned int *)(param_1 + 0x38) = uVar3;
  fn_829E5388(param_1 + 0x40);
  *(unsigned int *)(param_1 + 0x5c) = 0;
  *(unsigned char *)(param_1 + 0x6c) = 0;
  *(unsigned char *)(param_1 + 0x6d) = 0;
  *(unsigned char *)(param_1 + 0x78) = 0;
  uVar5 = lbl_821AAD20;
  uVar4 = lbl_82057ABC;
  uVar3 = lbl_82057AB8;
  uVar1 = lbl_82002AE0;
  *(unsigned int *)(param_1 + 0x68) = 2;
  uVar2 = lbl_82057AB0;
  *(unsigned int *)(param_1 + 0x54) = uVar4;
  *(unsigned int *)(param_1 + 0x58) = uVar4;
  *(unsigned int *)(param_1 + 0x60) = uVar5;
  *(unsigned int *)(param_1 + 100) = uVar1;
  *(unsigned int *)(param_1 + 0x70) = uVar3;
  *(unsigned int *)(param_1 + 0x74) = uVar2;
  *(unsigned int *)(param_1 + 0x84) = 0;
  uVar1 = lbl_82005344;
  *(unsigned int *)(param_1 + 0x7c) = uVar5;
  *(unsigned int *)(param_1 + 0x80) = uVar5;
  *(unsigned int *)(param_1 + 0x88) = 0;
  *(unsigned int *)(param_1 + 0x90) = uVar1;
  *(unsigned char *)(param_1 + 0x8c) = 0;
  return param_1;
}

