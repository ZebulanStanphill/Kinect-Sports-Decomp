extern int fn_82231540();
extern int fn_82248AE8();
extern int fn_82365BD8();
extern int fn_8248E650();
extern int fn_8248EA08();
extern int fn_8248EB98();
extern int fn_8265CA20();
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned __int64 fn_8248E0B0(int param_1)

{
  int *piVar1;
  unsigned int uVar2;
  char cVar5;
  unsigned __int64 uVar3;
  int iVar4;
  int *piVar6;
  int *piVar7;
  unsigned int uVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  unsigned int *puVar11;
  unsigned __int64 uVar12;
  int *piVar13;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  puVar11 = (unsigned int *)(param_1 + 0x4c);
  cVar5 = fn_82248AE8(&uStack_50,*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) >> 3);
  uVar2 = uStack_50;
  uVar10 = (unsigned __int64)uStack_50;
  if (cVar5 == '\0') {
    uVar12 = (unsigned __int64)uStack_4c;
  }
  else {
    uVar8 = *(unsigned int *)(param_1 + 0x50);
    uVar12 = uVar10;
    if ((unsigned __int64)*puVar11 != (unsigned __int64)uVar8) {
      lVar9 = *puVar11 - uVar10;
      do {
        if ((uVar12 & 0xffffffff) != 0) {
          fn_82365BD8(uVar12,lVar9 + uVar12);
        }
        uVar12 = uVar12 + 8;
      } while ((lVar9 + uVar12 & 0xffffffff) != (unsigned __int64)uVar8);
    }
  }
  fn_8248EA08(uVar10,uVar12,(int)((int)uVar12 - uVar2) >> 3,0);
  uVar3 = fn_8248EB98(uVar10,uVar12);
  if ((uVar3 & 0xffffffff) != (uVar12 & 0xffffffff)) {
    fn_82231540(uVar3,uVar12);
    uVar12 = uVar3;
  }
  if (*(unsigned int *)(param_1 + 0x5c) <= (unsigned int)((int)((int)uVar12 - uVar2) >> 3)) goto LAB_8248e244;
  if (*(unsigned int *)(param_1 + 0x44) < *(unsigned int *)(param_1 + 0x28)) {
    *(unsigned int *)(param_1 + 0x44) = *(unsigned int *)(param_1 + 0x28);
  }
  piVar13 = (int *)(param_1 + 8);
  if ((unsigned int)((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 0xc) <= *(unsigned int *)(param_1 + 0x44))
  goto LAB_8248e244;
  piVar1 = *(int **)(param_1 + 0x50);
  piVar7 = (int *)*puVar11;
  piVar6 = (int *)(*(unsigned int *)(param_1 + 0x44) * 0xc + *piVar13);
  if (piVar7 == piVar1) {
LAB_8248e290:
    iVar4 = (**(int (***)())(*(int *)*piVar6 + 8))();
    if (iVar4 == 0) goto LAB_8248e244;
    piVar6 = (int *)(*(int *)(param_1 + 0x44) * 0xc + *piVar13);
  }
  else {
    do {
      if (*piVar7 == *piVar6) break;
      piVar7 = piVar7 + 2;
    } while (piVar7 != piVar1);
    if (piVar7 == piVar1) goto LAB_8248e290;
  }
  fn_8248E650(puVar11,piVar6);
  iVar4 = *(int *)(param_1 + 0x44);
  uVar8 = iVar4 + 1;
  *(unsigned int *)(param_1 + 0x44) = uVar8;
  if (uVar8 < (unsigned int)((*(int *)(param_1 + 0xc) - *piVar13) / 0xc)) {
    if (uVar2 != 0) {
      fn_82231540(uVar10,uVar12);
      fn_8265CA20(uVar10);
    }
    return 1;
  }
  *(int *)(param_1 + 0x44) = iVar4;
LAB_8248e244:
  if (uVar2 != 0) {
    fn_82231540(uVar10,uVar12);
    fn_8265CA20(uVar10);
  }
  return 0;
}

