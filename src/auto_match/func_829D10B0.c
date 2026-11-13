typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82645740();
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_829C9180();
extern int fn_829CB790();
extern int fn_829CB7D8();
extern int fn_829CFA60();
extern int fn_829D0440();
extern int fn_82A1F228();
extern int fn_82A93C88();
extern int fn_82A93E40();
extern int fn_82A93F70();
extern unsigned int lbl_83215054;
extern unsigned int lbl_83217128;
extern unsigned int lbl_83217324;
extern unsigned int lbl_83217328;
extern unsigned int lbl_83217334;


unsigned __int64 fn_829D10B0(int param_1,int param_2,__int64 param_3,unsigned __int64 param_4,
                       unsigned __int64 param_5)

{
  bool bVar1;
  unsigned char *puVar2;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  int *piVar9;
  unsigned int uVar10;
  int *piVar11;
  int *piVar12;
  
  puVar2 = lbl_83217128;
  uVar7 = 0;
  *(unsigned int *)(lbl_83217128 + 0x38) = 1;
  iVar5 = fn_829CFA60(puVar2);
  iVar6 = fn_829CB7D8(1);
  if ((iVar6 != 0) || (iVar5 != 0)) {
    RtlLeaveCriticalSection(0xffffffff8315c428);
    fn_82645740(lbl_83215054);
    while( true ) {
      RtlEnterCriticalSection(0xffffffff8315c428);
      iVar5 = fn_829CFA60(puVar2);
      uVar3 = KfAcquireSpinLock(0xffffffff8321732c);
      if ((lbl_83217324 != 0) || (bVar1 = false, lbl_83217328 != 0)) {
        bVar1 = true;
      }
      KfReleaseSpinLock(0xffffffff8321732c,uVar3);
      if ((!bVar1) && (iVar5 == 0)) break;
      RtlLeaveCriticalSection(0xffffffff8315c428);
      KeSetEvent(0xffffffff83215034,1,0);
    }
  }
  if (2 < *(unsigned int *)(puVar2 + 0x18)) {
    uVar7 = 0xffffffff83010003;
    goto LAB_829d1484;
  }
  *puVar2 = 1;
  *(unsigned int *)(puVar2 + 4) = 0;
  *(int *)(puVar2 + 0x14) = param_2;
  piVar9 = (int *)(puVar2 + 0x24);
  *(unsigned char **)(puVar2 + 8) = puVar2 + 8;
  *(unsigned char **)(puVar2 + 0xc) = puVar2 + 8;
  *(unsigned char **)(puVar2 + 0x30) = puVar2 + 0x30;
  *(unsigned char **)(puVar2 + 0x34) = puVar2 + 0x30;
  *(int **)(puVar2 + 0x24) = piVar9;
  *(int **)(puVar2 + 0x28) = piVar9;
  if (((param_4 & 0xffffffff) == 0) ||
     (iVar5 = ObReferenceObjectByHandle(param_4,0,puVar2 + 0x10), -1 < iVar5)) {
LAB_829d122c:
    *(int *)(puVar2 + 0x18) = (int)(param_3 + 2);
    iVar5 = fn_8265C940((param_3 + 2) * 0x78,0x209c0000);
    if (iVar5 == 0) {
      uVar7 = 0xffffffff8007000e;
      goto LAB_829d1434;
    }
    fn_8265C990(*(unsigned int *)(puVar2 + 0x1c),0x209c0000);
    *(int *)(puVar2 + 0x1c) = iVar5;
    *(unsigned int *)(puVar2 + 0x20) = 0;
    if ((int)uVar7 < 0) goto LAB_829d1434;
    uVar4 = fn_8265C940(((unsigned __int64)*(unsigned int *)(puVar2 + 0x18) +
                               ((unsigned __int64)*(unsigned int *)(puVar2 + 0x18) & 0x7fffffff) * 2 & 0xffff) <<
                              0x10,0xffffffff8c9c0000);
    if ((uVar4 & 0xffffffff) == 0) {
      uVar7 = 0xffffffff8007000e;
      goto LAB_829d1434;
    }
    fn_829C9180(puVar2 + 0x40,0x400);
    fn_8265C990(*(unsigned int *)(puVar2 + 0x3c),0xffffffff8c9c0000);
    *(int *)(puVar2 + 0x3c) = (int)uVar4;
    fn_82A1F228(uVar4,((unsigned __int64)*(unsigned int *)(puVar2 + 0x18) +
                        ((unsigned __int64)*(unsigned int *)(puVar2 + 0x18) & 0x7fffffff) * 2 & 0xffff) << 0x10,4);
    fn_82A93E40(0x140,0xf0,*(unsigned int *)(puVar2 + 0x18),1,4,0x1a220058,0,1);
    fn_82A93F70(puVar2 + 0x40,*(unsigned int *)(puVar2 + 0x3c));
    uVar8 = 0;
    if (*(int *)(puVar2 + 0x18) != 0) {
      uVar10 = 0;
      iVar5 = 0;
      do {
        piVar12 = (int *)(iVar5 + *(int *)(puVar2 + 0x1c));
        piVar11 = piVar12 + 0xc;
        piVar12[0x1a] = uVar10 >> 1;
        piVar12[5] = 0;
        piVar12[6] = param_1;
        piVar12[8] = param_2;
        piVar12[0x19] = uVar10 + *(int *)(puVar2 + 0x3c);
        fn_82A93C88(0x140,0xf0,1,4,0x1a220058,0,1,0);
        fn_82A93F70(piVar11,piVar12[0x19]);
        piVar12[7] = (int)piVar11;
        piVar12[0x1b] = 0;
        fn_829CB790(piVar11);
        iVar6 = *piVar9;
        piVar12[1] = (int)piVar9;
        uVar8 = uVar8 + 1;
        iVar5 = iVar5 + 0x78;
        uVar10 = uVar10 + 0x30000;
        *piVar12 = iVar6;
        *(int **)(iVar6 + 4) = piVar12;
        *piVar9 = (int)piVar12;
      } while (uVar8 < *(unsigned int *)(puVar2 + 0x18));
    }
    iVar5 = ObOpenObjectByPointer(puVar2,param_5);
    if ((iVar5 < 0) && (uVar7 = RtlNtStatusToDosError(), 0 < (int)uVar7)) {
      uVar7 = uVar7 & 0xffff | 0xffffffff80070000;
    }
    if ((int)uVar7 < 0) goto LAB_829d1434;
  }
  else {
    uVar7 = RtlNtStatusToDosError();
    if (0 < (int)uVar7) {
      uVar7 = uVar7 & 0xffff | 0xffffffff80070000;
    }
    if (-1 < (int)uVar7) goto LAB_829d122c;
LAB_829d1434:
    fn_829D0440(puVar2,0);
    if ((int)uVar7 < 0) goto LAB_829d1484;
  }
  sync(0);
  if ((*(unsigned int *)(puVar2 + 0x14) & 0x10000) == 0) {
    KeSetEvent(puVar2,1,0);
    if (*(int *)(puVar2 + 0x10) != 0) {
      KeSetEvent(*(int *)(puVar2 + 0x10),1,0);
    }
  }
LAB_829d1484:
  *(unsigned int *)(puVar2 + 0x38) = 0;
  lbl_83217334 = 0;
  sync(0);
  return uVar7;
}

