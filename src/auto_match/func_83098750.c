extern unsigned int *auStack_30;
extern int fn_8309C9D8();
extern unsigned int iStack_1c;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82187C08;
extern unsigned int lbl_8326570C;
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_20;


void fn_83098750(int *param_1,int param_2,int param_3,unsigned int *param_4)

{
  unsigned int *puVar1;
  int in_r0;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned char auStack_30 [1];
  unsigned int uStack_20;
  int iStack_1c;
  unsigned int uStack_18;
  unsigned int uStack_14;
  
  puVar1 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  *(int *)(param_3 + 0x28) = param_2;
  *(unsigned int *)(param_3 + 0x60) = *(unsigned int *)(param_2 + 0x24);
  *(unsigned int *)(param_3 + 0x2c) = *(unsigned int *)(param_2 + 0x30);
  iStack_1c = param_2 + 0x10;
  *(unsigned int *)(param_3 + 0x30) = *(unsigned int *)(param_2 + 0x30);
  puVar1 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  *(int *)(param_3 + 0x24) = param_2;
  uStack_18 = 0x10;
  uStack_14 = 0;
  uStack_20 = 1;
  if (*(char *)(param_2 + 0x20) == '\0') {
    *(unsigned int *)(param_3 + 100) = 0;
  }
  else {
    iVar2 = *(int *)(param_3 + 0x18) + 0x10;
    if (*(int *)(param_3 + 0x18) == 0) {
      iVar2 = 0;
    }
    *(int *)(param_3 + 100) = iVar2;
  }
  uVar3 = lbl_82002AE0;
  if (*(char *)(param_2 + 0x3c) == '\0') {
    *(unsigned int *)(param_3 + 0x70) = 0;
  }
  else {
    if (param_4 == (unsigned int *)0x0) {
      param_4 = (unsigned int *)0x0;
    }
    else {
      uVar4 = *(unsigned int *)(param_2 + 0x34);
      uVar5 = *(unsigned int *)(param_2 + 0x30);
      param_4[1] = lbl_82002AE0;
      param_4[5] = 0;
      param_4[6] = 0;
      *param_4 = &lbl_82187C08;
      param_4[4] = uVar4;
      param_4[2] = uVar5;
      param_4[3] = uVar5;
    }
    *(unsigned int **)(param_3 + 0x70) = param_4;
    lbl_8326570C = fn_8309C9D8;
  }
  iVar2 = *(int *)(param_2 + 0x30);
  *(unsigned int *)(iVar2 + 0x50) = 0;
  *(unsigned int *)(iVar2 + 0x10) = uVar3;
  *(unsigned int *)(iVar2 + 0x40) = 0;
  *(unsigned int *)(iVar2 + 0x20) = 0xffffffff;
  *(unsigned int *)(iVar2 + 0x14) = 0xffffffff;
  (**(int (***)())(*param_1 + 0x5c))(param_1,auStack_30,param_3,0);
  return;
}

