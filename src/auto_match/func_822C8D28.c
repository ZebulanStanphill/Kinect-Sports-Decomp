extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_82365BD8();
extern unsigned int iStack_34;
extern unsigned int iStack_3c;
extern unsigned int iStack_5c;


void fn_822C8D28(int param_1)

{
  unsigned int uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  int *piVar8;
  unsigned char auStack_60 [4];
  int iStack_5c;
  unsigned char auStack_58 [8];
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [4];
  int iStack_3c;
  unsigned char auStack_38 [4];
  int iStack_34;
  
  puVar6 = (unsigned int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x28) != 0) {
    puVar7 = (unsigned int *)(param_1 + 0x20);
    (**(int (***)())(**(int **)(param_1 + 0x20) + 8))();
    iVar3 = fn_82365BD8(auStack_58,puVar7);
    iVar4 = fn_82365BD8(auStack_50,puVar6);
    fn_82365BD8(auStack_40,iVar4);
    fn_82365BD8(auStack_38,iVar3);
    if (*(int *)(iVar4 + 4) != 0) {
      fn_822315A0();
    }
    if (*(int *)(iVar3 + 4) != 0) {
      fn_822315A0();
    }
    puVar5 = (unsigned int *)fn_82365BD8(auStack_60,puVar6);
    uVar1 = puVar5[1];
    puVar5[1] = *(unsigned int *)(param_1 + 0x24);
    *(unsigned int *)(param_1 + 0x24) = uVar1;
    uVar1 = *puVar5;
    *puVar5 = *puVar7;
    *puVar7 = uVar1;
    if (iStack_5c != 0) {
      fn_822315A0();
    }
    iVar3 = *(int *)(param_1 + 0x2c);
    *(unsigned int *)(param_1 + 0x2c) = 0;
    *puVar6 = 0;
    if (iVar3 != 0) {
      fn_822315A0();
    }
    (**(int (***)())(*(int *)*puVar7 + 4))();
    piVar2 = *(int **)(*(int *)(param_1 + 0x3c) + 0xc);
    for (piVar8 = *(int **)(*(int *)(param_1 + 0x3c) + 8); piVar8 != piVar2; piVar8 = piVar8 + 1) {
      (**(int (***)())((*(unsigned int *)(*piVar8 + 8) & 0xfffffffe) + 4))(*piVar8 + 0x10,auStack_40);
    }
    if (iStack_34 != 0) {
      fn_822315A0();
    }
    if (iStack_3c != 0) {
      fn_822315A0();
    }
  }
  return;
}

