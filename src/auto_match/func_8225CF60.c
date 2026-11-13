extern unsigned int *auStack_50;
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern unsigned int *auStack_88;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_e0;
extern int fn_8225E7B8();
extern int fn_822C5B18();
extern int fn_82359C18();
extern unsigned int uStack_78;
extern unsigned int uStack_90;


unsigned int fn_8225CF60(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  int *piVar5;
  unsigned int *puVar6;
  unsigned char auStack_e0 [16];
  int aiStack_d0 [4];
  int *piStack_c0;
  int aiStack_b8 [4];
  int *piStack_a8;
  unsigned char auStack_a0 [16];
  unsigned int uStack_90;
  unsigned char auStack_88 [16];
  unsigned int uStack_78;
  unsigned int auStack_70 [2];
  unsigned char auStack_68 [24];
  unsigned char auStack_50 [32];
  
  uVar1 = *(unsigned int *)(param_1 + 0x44);
  *(unsigned int *)(param_1 + 0x44) = uVar1 + 1;
  fn_822C5B18(aiStack_d0);
  fn_822C5B18(aiStack_b8,param_3);
  puVar3 = *(unsigned int **)(param_1 + 0x38);
  puVar6 = (unsigned int *)(*(unsigned int **)(param_1 + 0x38))[1];
  while (*(char *)((int)puVar6 + 0x49) == '\0') {
    if ((unsigned int)puVar6[4] < uVar1) {
      puVar6 = (unsigned int *)puVar6[2];
    }
    else {
      puVar3 = puVar6;
      puVar6 = (unsigned int *)*puVar6;
    }
  }
  if ((puVar3 == *(unsigned int **)(param_1 + 0x38)) || (uVar1 < (unsigned int)puVar3[4])) {
    uStack_90 = 0;
    uStack_78 = 0;
    auStack_70[0] = uVar1;
    fn_822C5B18(auStack_68,auStack_a0);
    fn_822C5B18(auStack_50,auStack_88);
    puVar3 = (unsigned int *)fn_8225E7B8(auStack_e0,param_1 + 0x34,puVar3,auStack_70);
    puVar3 = (unsigned int *)*puVar3;
    fn_82359C18(auStack_50);
    fn_82359C18(auStack_68);
    fn_82359C18(auStack_88);
    fn_82359C18(auStack_a0);
  }
  piVar5 = puVar3 + 6;
  if (piVar5 != aiStack_d0) {
    piVar2 = (int *)puVar3[10];
    if (piVar2 != (int *)0x0) {
      (**(int (***)())(*piVar2 + 0xc))(piVar2,piVar5 != piVar2);
      puVar3[10] = 0;
    }
    if (piStack_c0 == (int *)0x0) {
      puVar3[10] = 0;
    }
    else {
      if (piStack_c0 != aiStack_d0) {
        piVar5 = (int *)0x0;
      }
      uVar4 = (**(int (***)())*piStack_c0)(piStack_c0,piVar5);
      puVar3[10] = uVar4;
    }
  }
  piVar5 = puVar3 + 0xc;
  if (piVar5 != aiStack_b8) {
    piVar2 = (int *)puVar3[0x10];
    if (piVar2 != (int *)0x0) {
      (**(int (***)())(*piVar2 + 0xc))(piVar2,piVar5 != piVar2);
      puVar3[0x10] = 0;
    }
    if (piStack_a8 == (int *)0x0) {
      puVar3[0x10] = 0;
    }
    else {
      if (piStack_a8 != aiStack_b8) {
        piVar5 = (int *)0x0;
      }
      uVar4 = (**(int (***)())*piStack_a8)(piStack_a8,piVar5);
      puVar3[0x10] = uVar4;
    }
  }
  fn_82359C18(aiStack_b8);
  fn_82359C18(aiStack_d0);
  fn_82359C18(param_2);
  fn_82359C18(param_3);
  return uVar1;
}

