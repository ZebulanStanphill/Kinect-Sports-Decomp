extern unsigned int *auStack_70;
extern unsigned int *auStack_7c;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8240D930();
extern int fn_82522ED8();
extern int fn_8258DF98();
extern int fn_8258E3A8();
extern int fn_82648D40();
extern int fn_8265C990();
extern int fn_8265CA20();
extern int fn_8265CAA0();
extern int fn_82F63CA0();
extern unsigned int iStack_80;


void fn_825F0E10(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned int uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iStack_80;
  unsigned char auStack_7c [12];
  unsigned char auStack_70 [112];
  
  piVar10 = (int *)(param_1 + 0x1c);
  uVar7 = 0;
  if (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2 != 0) {
    iVar8 = 0;
    do {
      if (*(int *)(param_1 + 0xb8) != 0) {
        iVar3 = *(int *)(iVar8 + *(int *)(param_1 + 0xb8));
        if (iVar3 != 0) {
          fn_82522ED8(iVar3);
          uVar1 = *(unsigned int *)(param_1 + 0xb4);
          uVar5 = fn_8240D930(*(unsigned int *)(iVar8 + *piVar10));
          uVar5 = fn_82230110(auStack_70,uVar5);
          uVar2 = *(unsigned int *)(param_1 + 0xc0);
          fn_8258E3A8(&iStack_80,uVar2,uVar5);
          iVar3 = iStack_80;
          lVar6 = (unsigned __int64)*(unsigned int *)(iStack_80 + 0x2c) - 1;
          *(int *)(iStack_80 + 0x2c) = (int)lVar6;
          if (lVar6 == 0) {
            fn_8265C990(*(unsigned int *)(iStack_80 + 0x28),uVar1);
            *(unsigned int *)(iVar3 + 0x28) = 0;
            fn_8258DF98(auStack_7c,uVar2,iVar3);
          }
          fn_82230300(uVar5,1,0);
        }
      }
      if (*(int *)(param_1 + 0xb0) != 0) {
        iVar3 = *(int *)(iVar8 + *(int *)(param_1 + 0xb0));
        if (iVar3 != 0) {
          fn_8265CA20(iVar3);
        }
      }
      puVar4 = *(unsigned int **)(iVar8 + *piVar10);
      if (puVar4 != (unsigned int *)0x0) {
        (**(int (***)())*puVar4)(puVar4,1);
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 4;
    } while (uVar7 < (unsigned int)(*(int *)(param_1 + 0x20) - *piVar10 >> 2));
  }
  piVar9 = (int *)(param_1 + 0x2c);
  uVar7 = 0;
  if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) >> 2 != 0) {
    iVar8 = 0;
    do {
      fn_8265CA20(*(unsigned int *)(iVar8 + *piVar9));
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 4;
    } while (uVar7 < (unsigned int)(*(int *)(param_1 + 0x30) - *piVar9 >> 2));
  }
  iVar8 = *piVar10;
  if (iVar8 != *(int *)(param_1 + 0x20)) {
    fn_82F63CA0(iVar8,*(int *)(param_1 + 0x20),0);
    *(int *)(param_1 + 0x20) = iVar8;
  }
  iVar8 = *piVar9;
  if (iVar8 != *(int *)(param_1 + 0x30)) {
    fn_82F63CA0(iVar8,*(int *)(param_1 + 0x30),0);
    *(int *)(param_1 + 0x30) = iVar8;
  }
  if (*(int *)(param_1 + 0xb8) != 0) {
    fn_8265CAA0();
    *(unsigned int *)(param_1 + 0xb8) = 0;
  }
  if (*(int *)(param_1 + 0xb0) != 0) {
    fn_8265CAA0();
    *(unsigned int *)(param_1 + 0xb0) = 0;
  }
  piVar10 = (int *)(param_1 + 0x10c);
  lVar6 = 4;
  do {
    if (*piVar10 != 0) {
      fn_82648D40();
      *piVar10 = 0;
    }
    lVar6 = lVar6 + -1;
    piVar10 = piVar10 + 0x38;
  } while (lVar6 != 0);
  return;
}

