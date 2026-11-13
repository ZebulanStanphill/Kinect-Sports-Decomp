#define true 1
extern unsigned int *auStack_44;
extern unsigned int *auStack_78;
extern unsigned int *auStack_90;
extern int fn_824973B0();
extern int fn_824977B8();
extern unsigned int iStack00000024;
extern unsigned int iStack_50;
extern unsigned int lbl_821BEBB0;
extern unsigned int stack0x00000024;
extern unsigned int uStack_2c;
extern unsigned int uStack_48;
extern unsigned int uStack_60;


void fn_82496F60(int param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  unsigned int *puVar6;
  int *piVar7;
  unsigned int *puVar8;
  unsigned int uVar9;
  __int64 lVar10;
  int iStack00000024;
  unsigned char auStack_90 [24];
  unsigned int auStack_78 [6];
  unsigned int uStack_60;
  int iStack_50;
  unsigned char **ppuStack_4c;
  unsigned int uStack_48;
  unsigned int auStack_44 [6];
  unsigned int uStack_2c;
  
  iVar1 = *(int *)(param_1 + 0x54);
  auStack_78[0] = *(unsigned int *)(iVar1 + 0x100);
  if (*(int *)(iVar1 + 0x188) == 0) {
    uVar9 = 0;
  }
  else {
    puVar6 = auStack_78;
    puVar8 = (unsigned int *)(iVar1 + 0x188);
    lVar10 = 5;
    do {
      puVar8 = puVar8 + 1;
      puVar6 = puVar6 + 1;
      *puVar6 = *puVar8;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    uVar9 = 1;
    *(unsigned int *)(iVar1 + 0x188) = 0;
  }
  iStack00000024 = param_3;
  uStack_60 = uVar9;
  iVar3 = fn_824973B0(param_1 + 0x28,&stack0x00000024);
  iVar1 = *(int *)(param_1 + 0x2c);
  piVar7 = (int *)(iVar3 * 8 + *(int *)(param_1 + 0x38));
  iVar3 = *piVar7;
  piVar2 = (int *)iVar3;
  while( true ) {
    iVar5 = iVar1;
    if (iVar3 != iVar1) {
      iVar5 = *(int *)piVar7[1];
    }
    piVar4 = (int *)iVar1;
    if ((piVar2 == (int *)iVar5) || (piVar4 = piVar2, piVar2[2] == param_3)) break;
    piVar2 = (int *)*piVar2;
  }
  if (piVar4 == (int *)iVar1) {
    uStack_48 = 0;
    puVar6 = auStack_44;
    puVar8 = auStack_78;
    ppuStack_4c = &lbl_821BEBB0;
    auStack_44[0] = auStack_78[0];
    lVar10 = 5;
    do {
      puVar8 = puVar8 + 1;
      puVar6 = puVar6 + 1;
      *puVar6 = *puVar8;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    uStack_2c = 0;
    iStack_50 = param_3;
    piVar4 = (int *)fn_824977B8(auStack_90,param_1 + 0x28,&iStack_50);
    piVar4 = (int *)*piVar4;
  }
  *(int *)((int)piVar4 + 0x10) = param_3;
  puVar6 = (unsigned int *)((int)piVar4 + 0x14);
  *(unsigned int *)((int)piVar4 + 0x14) = auStack_78[0];
  puVar8 = auStack_78;
  lVar10 = 5;
  do {
    puVar8 = puVar8 + 1;
    puVar6 = puVar6 + 1;
    *puVar6 = *puVar8;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  *(unsigned int *)((int)piVar4 + 0x2c) = uVar9;
  return;
}

