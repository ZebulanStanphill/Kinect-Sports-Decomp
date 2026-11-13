extern unsigned int *auStack_50;
extern int fn_822BFBD0();
extern int fn_82321D30();
extern int fn_82359698();
extern int fn_823599A8();
extern int fn_82359C18();
extern int fn_82409F90();
extern int fn_8240A638();
extern unsigned int lbl_821B7F84;


void fn_8240A6E8(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned char auStack_50 [16];
  unsigned char **appuStack_40 [4];
  unsigned char ***pppuStack_30;
  
  fn_8240A638();
  (**(int (***)())(**(int **)(param_1 + 0x14) + 4))();
  fn_822BFBD0();
  (**(int (***)())(**(int **)(param_1 + 0x14) + 8))();
  fn_822BFBD0();
  iVar3 = (**(int (***)())(**(int **)(param_1 + 0x14) + 4))();
  *(unsigned int *)(*(int *)(iVar3 + 0x5b0) + 4) = 1;
  fn_82321D30(auStack_50);
  puVar1 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar2 = (unsigned int *)(in_r0 + iVar3 + 0x80 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  iVar3 = (**(int (***)())(**(int **)(param_1 + 0x14) + 8))();
  *(unsigned int *)(*(int *)(iVar3 + 0x5b0) + 4) = 1;
  fn_82321D30(auStack_50);
  puVar1 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar2 = (unsigned int *)(in_r0 + iVar3 + 0x80 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  pppuStack_30 = appuStack_40;
  *(unsigned int *)(**(int **)(param_1 + 0x54) + 0x1d0) = 1;
  appuStack_40[0] = &lbl_821B7F84;
  fn_823599A8(*(unsigned int *)(param_1 + 8),appuStack_40);
  fn_82359C18(appuStack_40);
  if (*(int *)(*(int *)(param_1 + 0x10) + 0xe0) == 0) {
    fn_82409F90(param_1,4);
  }
  else {
    fn_82359698(*(unsigned int *)(param_1 + 8),3);
  }
  return;
}

