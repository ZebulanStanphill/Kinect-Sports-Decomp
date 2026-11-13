extern unsigned int *auStack_30;
extern int fn_823000E0();
extern unsigned int lbl_821CA460;
extern unsigned int uStack_20;


void fn_82312250(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned char auStack_30 [16];
  unsigned int uStack_20;
  
  uVar4 = lbl_821CA460;
  iVar1 = *(int *)(param_1 + 0xc);
  uStack_20 = 0;
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0xe10);
  iVar3 = *(int *)(iVar1 + 0x1e8);
  *(unsigned int *)(iVar1 + 500) = lbl_821CA460;
  *(unsigned int *)(iVar2 + 0xc20) = uVar4;
  *(unsigned int *)(iVar3 + 0x578) = 0;
  fn_823000E0(*(unsigned int *)(iVar1 + 0x1e8),auStack_30);
  *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x240) = 0;
  return;
}

