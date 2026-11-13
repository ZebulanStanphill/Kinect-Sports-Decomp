extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_8c;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82672C20();
extern unsigned int uStack_38;
extern unsigned int uStack_48;
extern unsigned int uStack_58;
extern unsigned int uStack_68;
extern unsigned int uStack_78;


void fn_8229E540(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned char uVar5;
  unsigned char uVar7;
  unsigned char *puVar6;
  __int64 lVar8;
  unsigned int auStack_8c [3];
  unsigned char auStack_80 [8];
  unsigned int uStack_78;
  unsigned char auStack_70 [8];
  unsigned int uStack_68;
  unsigned char auStack_60 [8];
  unsigned char uStack_58;
  unsigned char auStack_50 [8];
  unsigned char uStack_48;
  unsigned char auStack_40 [8];
  unsigned char uStack_38;
  unsigned char auStack_30 [48];
  
  puVar4 = auStack_8c;
  lVar8 = 5;
  uVar7 = 0;
  do {
    puVar4[3] = 0;
    puVar4 = puVar4 + 4;
    *puVar4 = 0;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  uVar1 = *(unsigned int *)(param_1 + 8);
  fn_82273CD8(auStack_80,5);
  uVar2 = *(unsigned int *)(param_1 + 0xc);
  uStack_78 = uVar1;
  fn_82273CD8(auStack_70,5);
  if (*(short **)(param_1 + 0x10) != (short *)0x0) {
    uVar5 = 1;
    if (**(short **)(param_1 + 0x10) != 0) goto LAB_8229e5b8;
  }
  uVar5 = 0;
LAB_8229e5b8:
  uStack_68 = uVar2;
  fn_82273CD8(auStack_60,2);
  if ((*(short **)(param_1 + 0x14) != (short *)0x0) && (**(short **)(param_1 + 0x14) != 0)) {
    uVar7 = 1;
  }
  uStack_58 = uVar5;
  fn_82273CD8(auStack_50,2);
  iVar3 = *(int *)(param_1 + 4);
  uStack_48 = uVar7;
  fn_82273CD8(auStack_40,2);
  uStack_38 = iVar3 == 1;
  fn_82672C20(*param_2,0xffffffff821ab52c,auStack_80,5);
  puVar6 = auStack_30;
  lVar8 = 4;
  do {
    puVar6 = puVar6 + -0x10;
    fn_82273C88(puVar6);
    lVar8 = lVar8 + -1;
  } while (-1 < lVar8);
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return;
}

