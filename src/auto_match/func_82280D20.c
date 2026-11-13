extern unsigned int *auStack_90;
extern int fn_8226AE28();
extern int fn_8226B4D0();
extern int fn_8226C610();
extern int fn_822811F8();
extern int fn_8265C9E0();
extern int fn_827EFC90();


void fn_82280D20(int param_1,__int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned char auStack_90 [120];
  
  uVar1 = fn_8265C9E0(0x150);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_8226B4D0(uVar1,*(unsigned int *)(param_1 + 0x14),param_2 + 0x20,param_2 + 0x28,
                              param_2 + 0x30,*(unsigned int *)(param_1 + 0x18));
  }
  *(unsigned int *)(param_1 + 0x7c) = uVar2;
  uVar4 = 1;
  iVar3 = (**(int (***)())**(unsigned int **)(*(int *)(param_1 + 0x14) + 0x1b4))();
  if (1 < iVar3) {
    do {
      fn_827EFC90(*(unsigned int *)(param_1 + 0x1c),uVar4 & 0xffff,
                        *(unsigned int *)(param_1 + 0x7c),0);
      uVar4 = uVar4 + 1;
      iVar3 = (**(int (***)())**(unsigned int **)(*(int *)(param_1 + 0x14) + 0x1b4))();
    } while ((int)uVar4 < iVar3);
  }
  fn_822811F8(auStack_90);
  uVar1 = fn_8265C9E0(0xb4);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_8226AE28(uVar1,*(unsigned int *)(*(int *)(param_1 + 0x7c) + 0x4c),
                              *(unsigned int *)(*(int *)(param_1 + 0x7c) + 0x48),auStack_90);
  }
  *(unsigned int *)(param_1 + 0x84) = uVar2;
  fn_8226C610(*(unsigned int *)(param_1 + 0x7c));
  return;
}

