extern unsigned int *auStack_30;
extern unsigned int *auStack_48;
extern unsigned int *auStack_4f;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_823F9A88(int param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned char uStack_50;
  unsigned char auStack_4f;
  unsigned int uStack_4c;
  unsigned int auStack_48;
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  unsigned int uStack_38;
  unsigned char auStack_30 [16];

  (**(int (***)())(**(int **)(param_1 + 0x20) + 0x14))(*(int **)(param_1 + 0x20),param_2,&uStack_4c);
  (**(int (***)())(**(int **)(param_1 + 0x28) + 0x14))(*(int **)(param_1 + 0x28),param_2,&auStack_48);
  (**(int (***)())(**(int **)(param_1 + 0x30) + 0x14))(*(int **)(param_1 + 0x30),param_2,&stack_pair_40.first);
  (**(int (***)())(**(int **)(param_1 + 0x38) + 0x14))(*(int **)(param_1 + 0x38),param_2,&uStack_50);
  (**(int (***)())(**(int **)(param_1 + 0x40) + 0x14))(*(int **)(param_1 + 0x40),param_2,&auStack_4f);
  (**(int (***)())(**(int **)(param_1 + 0x48) + 0x14))(*(int **)(param_1 + 0x48),param_2,auStack_30);
  if (param_3 != 0) {
    *(unsigned int *)(*(int *)(param_1 + 8) + param_3) = uStack_4c;
    *(unsigned int *)(*(int *)(param_1 + 0xc) + param_3) = auStack_48;
    iVar3 = *(int *)(param_1 + 0x10) + param_3;
    *(unsigned int *)(*(int *)(param_1 + 0x10) + param_3) = stack_pair_40.first;
    *(unsigned int *)(iVar3 + 4) = stack_pair_40.second;
    *(unsigned int *)(iVar3 + 8) = uStack_38;
    *(unsigned char *)(*(int *)(param_1 + 0x14) + param_3) = uStack_50;
    *(unsigned char *)(*(int *)(param_1 + 0x18) + param_3) = auStack_4f;
    puVar1 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (unsigned int *)(*(int *)(param_1 + 0x1c) + param_3 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
  }
  return;
}
