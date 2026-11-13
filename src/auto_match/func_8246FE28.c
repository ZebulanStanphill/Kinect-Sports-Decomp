extern int fn_824651F0();
extern int fn_82468FC0();
extern int fn_82469038();
extern int fn_8246B178();
extern int fn_8246B2A8();
extern int fn_82672C20();
extern unsigned int lbl_82193AF0;


void fn_8246FE28(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int *piVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x50);
  uVar4 = *(unsigned int *)(iVar3 + 0x34);
  if ((uVar4 != 0) && (uVar5 = *(unsigned int *)(iVar3 + 0x74), uVar8 = (unsigned __int64)uVar5, uVar5 != 0)) {
    iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x3c);
    if (*(float *)(iVar3 + 0x118) <= *(float *)(iVar3 + 0x234)) {
      uVar7 = fn_8246B178(uVar8 + 0x74,3,0xffffffff831c6cac);
    }
    else {
      uVar7 = fn_8246B178((unsigned __int64)uVar4 + 0x74,3,0xffffffff831c6cac);
      uVar8 = (unsigned __int64)uVar4;
    }
    fn_8246B2A8(uVar8,uVar7);
  }
  fVar1 = *(float *)(param_1 + 0x4c);
  fVar2 = *(float *)(param_1 + 0x24);
  if ((fVar2 < fVar1 - lbl_82193AF0) || (fVar1 + lbl_82193AF0 < fVar2)) {
    if (fVar2 <= fVar1) {
      fn_824651F0(*(unsigned int *)(param_1 + 0x440),param_1 + 0x114);
      piVar6 = *(int **)(param_1 + 0x444);
      if (*piVar6 != 4) {
        *piVar6 = 4;
        fn_82672C20(piVar6[1],0xffffffff821bc3ac,0,0);
      }
      uVar7 = 2;
    }
    else {
      fn_824651F0(*(unsigned int *)(param_1 + 0x440),param_1 + 0x110);
      piVar6 = *(int **)(param_1 + 0x444);
      if (*piVar6 != 3) {
        *piVar6 = 3;
        fn_82672C20(piVar6[1],0xffffffff821bc39c,0,0);
      }
      uVar7 = 1;
    }
    fn_82469038(*(unsigned int *)(param_1 + 0x418),uVar7);
  }
  else {
    fn_824651F0(*(unsigned int *)(param_1 + 0x440),param_1 + 0x10c);
    piVar6 = *(int **)(param_1 + 0x444);
    if (*piVar6 != 5) {
      *piVar6 = 5;
      fn_82672C20(piVar6[1],0xffffffff821bc3bc,0,0);
    }
    fn_82468FC0(*(unsigned int *)(param_1 + 0x418));
  }
  return;
}

