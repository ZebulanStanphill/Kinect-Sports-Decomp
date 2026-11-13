extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_8c;
extern unsigned int *auStack_a0;
extern int memcpy();
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;


void fn_82392AB0(int param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned char auStack_a0;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  unsigned int uStack_90;
  unsigned int auStack_8c [3];
  struct { unsigned int first; unsigned int second; } stack_pair_80;

  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [64];

  (**(int (***)())(**(int **)(param_1 + 0x2c) + 0x14))(*(int **)(param_1 + 0x2c),param_2,auStack_60);
  (**(int (***)())(**(int **)(param_1 + 0x34) + 0x14))(*(int **)(param_1 + 0x34),param_2,&stack_pair_80.first);
  (**(int (***)())(**(int **)(param_1 + 0x3c) + 0x14))(*(int **)(param_1 + 0x3c),param_2,&uStack_9c);
  (**(int (***)())(**(int **)(param_1 + 0x44) + 0x14))(*(int **)(param_1 + 0x44),param_2,auStack_70);
  (**(int (***)())(**(int **)(param_1 + 0x4c) + 0x14))(*(int **)(param_1 + 0x4c),param_2,&uStack_98);
  (**(int (***)())(**(int **)(param_1 + 0x54) + 0x14))(*(int **)(param_1 + 0x54),param_2,&uStack_94);
  (**(int (***)())(**(int **)(param_1 + 0x5c) + 0x14))(*(int **)(param_1 + 0x5c),param_2,&uStack_90);
  (**(int (***)())(**(int **)(param_1 + 100) + 0x14))(*(int **)(param_1 + 100),param_2,auStack_8c);
  (**(int (***)())(**(int **)(param_1 + 0x6c) + 0x14))(*(int **)(param_1 + 0x6c),param_2,&auStack_a0);
  if (param_3 != 0) {
    memcpy(*(int *)(param_1 + 8) + param_3,auStack_60,0x40);
    iVar4 = *(int *)(param_1 + 0xc) + param_3;
    *(unsigned int *)(*(int *)(param_1 + 0xc) + param_3) = stack_pair_80.first;
    *(unsigned int *)(iVar4 + 4) = stack_pair_80.second;
    *(unsigned int *)(iVar4 + 8) = uStack_78;
    *(unsigned int *)(iVar4 + 0xc) = uStack_74;
    *(unsigned int *)(*(int *)(param_1 + 0x10) + param_3) = uStack_9c;
    puVar2 = (unsigned int *)((unsigned int)(auStack_70 + in_r0) & 0xfffffff0);
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    uVar7 = puVar2[3];
    puVar3 = (unsigned int *)(*(int *)(param_1 + 0x14) + param_3 & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    puVar3[2] = uVar6;
    puVar3[3] = uVar7;
    *(unsigned int *)(*(int *)(param_1 + 0x18) + param_3) = uStack_98;
    *(unsigned int *)(*(int *)(param_1 + 0x1c) + param_3) = uStack_94;
    iVar4 = *(int *)(param_1 + 0x24);
    *(unsigned int *)(*(int *)(param_1 + 0x20) + param_3) = uStack_90;
    iVar1 = *(int *)(param_1 + 0x28);
    *(unsigned int *)(iVar4 + param_3) = auStack_8c[0];
    *(unsigned char *)(iVar1 + param_3) = auStack_a0;
  }
  return;
}
