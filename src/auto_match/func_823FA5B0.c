extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_8c;
extern unsigned int *auStack_a0;
extern int memcpy();
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;


void fn_823FA5B0(int param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int *puVar3;
  __int64 lVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned char auStack_a0;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  unsigned int uStack_90;
  unsigned int auStack_8c [3];
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [16];
  unsigned int auStack_60 [8];
  unsigned int auStack_40 [4];
  
  puVar3 = auStack_60;
  auStack_60[0] = 0;
  lVar4 = 7;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0xffffffff;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  puVar3 = auStack_40;
  auStack_40[0] = 0;
  lVar4 = 7;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0xffffffff;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  (**(int (***)())(**(int **)(param_1 + 0x30) + 0x14))(*(int **)(param_1 + 0x30),param_2,&uStack_9c);
  (**(int (***)())(**(int **)(param_1 + 0x38) + 0x14))(*(int **)(param_1 + 0x38),param_2,auStack_80);
  (**(int (***)())(**(int **)(param_1 + 0x40) + 0x14))(*(int **)(param_1 + 0x40),param_2,&auStack_a0);
  (**(int (***)())(**(int **)(param_1 + 0x48) + 0x14))(*(int **)(param_1 + 0x48),param_2,&uStack_98);
  (**(int (***)())(**(int **)(param_1 + 0x50) + 0x14))(*(int **)(param_1 + 0x50),param_2,&uStack_94);
  (**(int (***)())(**(int **)(param_1 + 0x58) + 0x14))(*(int **)(param_1 + 0x58),param_2,&uStack_90);
  (**(int (***)())(**(int **)(param_1 + 0x60) + 0x14))(*(int **)(param_1 + 0x60),param_2,auStack_8c);
  (**(int (***)())(**(int **)(param_1 + 0x68) + 0x14))(*(int **)(param_1 + 0x68),param_2,auStack_70);
  (**(int (***)())(**(int **)(param_1 + 0x70) + 0x14))(*(int **)(param_1 + 0x70),param_2,auStack_60);
  (**(int (***)())(**(int **)(param_1 + 0x78) + 0x14))(*(int **)(param_1 + 0x78),param_2,auStack_40);
  if (param_3 != 0) {
    *(unsigned int *)(*(int *)(param_1 + 8) + param_3) = uStack_9c;
    puVar3 = (unsigned int *)((unsigned int)(auStack_80 + in_r0) & 0xfffffff0);
    uVar5 = puVar3[1];
    uVar6 = puVar3[2];
    uVar7 = puVar3[3];
    puVar2 = (unsigned int *)(*(int *)(param_1 + 0xc) + param_3 & 0xfffffff0);
    *puVar2 = *puVar3;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    *(unsigned char *)(*(int *)(param_1 + 0x10) + param_3) = auStack_a0;
    *(unsigned int *)(*(int *)(param_1 + 0x14) + param_3) = uStack_98;
    iVar1 = *(int *)(param_1 + 0x1c);
    *(unsigned int *)(*(int *)(param_1 + 0x18) + param_3) = uStack_94;
    *(unsigned int *)(iVar1 + param_3) = uStack_90;
    iVar1 = *(int *)(param_1 + 0x24);
    *(unsigned int *)(*(int *)(param_1 + 0x20) + param_3) = auStack_8c[0];
    puVar3 = (unsigned int *)((unsigned int)(auStack_70 + in_r0) & 0xfffffff0);
    uVar5 = puVar3[1];
    uVar6 = puVar3[2];
    uVar7 = puVar3[3];
    puVar2 = (unsigned int *)(iVar1 + param_3 & 0xfffffff0);
    *puVar2 = *puVar3;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    memcpy(*(int *)(param_1 + 0x28) + param_3,auStack_60,0x20);
    memcpy(*(int *)(param_1 + 0x2c) + param_3,auStack_40,0x20);
  }
  return;
}

