typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_120;
extern unsigned int *auStack_140;
extern unsigned int *auStack_c0;
extern int fn_8294AC48();
extern int fn_829632A0();
extern int fn_829632F0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_82BA02A8();
extern unsigned int uStack_124;
extern unsigned int uStack_128;
extern unsigned int uStack_12c;
extern unsigned int uStack_130;


__int64 fn_82999EC0(int *param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  bool bVar3;
  bool bVar4;
  int iVar6;
  __int64 lVar5;
  int iVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  __int64 lVar10;
  unsigned int *puVar11;
  unsigned int uVar12;
  unsigned __int64 uVar13;
  unsigned int auStack_140 [4];
  unsigned int uStack_130;
  unsigned int uStack_12c;
  unsigned int uStack_128;
  unsigned int uStack_124;
  unsigned char auStack_120 [64];
  int aiStack_e0 [4];
  int aiStack_d0 [4];
  unsigned int auStack_c0 [36];
  
  auStack_140[0] = 0;
  uStack_128 = 2;
  uStack_124 = 3;
  uStack_12c = 1;
  uStack_130 = 0;
  uVar12 = *(unsigned int *)param_1[0x41];
  uVar2 = (unsigned __int64)uVar12;
  uVar13 = uVar2 & 0xfffff;
  bVar4 = false;
  iVar6 = fn_8294AC48(param_1,(unsigned int *)param_1[0x41],0xffffffff8204fe30,auStack_120,auStack_140
                            ,aiStack_e0,&uStack_130,uVar13);
  if (iVar6 == 0) {
LAB_82999f6c:
    bVar3 = false;
    if (bVar4) {
      uVar1 = *(unsigned int *)(*(int *)(*(int *)(*(int *)(aiStack_d0[0] * 4 + param_1[5]) + 4) * 4 +
                                param_1[4]) + 4);
      bVar3 = (uVar1 & 0x200) != 0;
      if (((*(unsigned int *)(*(int *)(*(int *)(*(int *)(aiStack_e0[0] * 4 + param_1[5]) + 4) * 4 +
                              param_1[4]) + 4) & 0x300) != 0) && ((uVar1 & 0x300) != 0)) {
        return 1;
      }
    }
    iVar6 = fn_82963998(0x74);
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = fn_829632A0();
    }
    if (iVar6 == 0) {
      return -0x7ff8fff2;
    }
    uVar8 = uVar13 | 0x70400000;
    if (!bVar4) {
      uVar8 = uVar13 | 0x70300000;
    }
    lVar5 = fn_82963A30(iVar6,uVar8,uVar13 * 3,uVar13,0);
    if ((lVar5 < 0) || (lVar5 = fn_829632F0(iVar6,param_1[0x41]), lVar5 < 0)) goto LAB_8299a16c;
    lVar5 = 0;
    if ((uVar12 & 0xfffff) != 0) {
      lVar10 = (uVar2 & 0xfffff) << 2;
      iVar7 = 0;
      do {
        *(unsigned int *)(iVar7 + *(int *)(iVar6 + 0x10)) =
             *(unsigned int *)(*(int *)(param_1[0x41] + 0x10) + iVar7);
        if (bVar3) {
          *(unsigned int *)(iVar7 + *(int *)(iVar6 + 8)) = *(unsigned int *)((int)aiStack_d0 + iVar7);
          uVar9 = *(unsigned int *)((int)aiStack_e0 + iVar7);
        }
        else {
          *(unsigned int *)(iVar7 + *(int *)(iVar6 + 8)) = *(unsigned int *)((int)aiStack_e0 + iVar7);
          uVar9 = *(unsigned int *)((int)aiStack_d0 + iVar7);
        }
        *(unsigned int *)((int)lVar10 + *(int *)(iVar6 + 8)) = uVar9;
        uVar8 = (uVar2 & 0xfffff) * 2 + lVar5;
        lVar5 = lVar5 + 1;
        lVar10 = lVar10 + 4;
        *(unsigned int *)((int)((uVar8 & 0xffffffff) << 2) + *(int *)(iVar6 + 8)) =
             *(unsigned int *)((int)auStack_c0 + iVar7);
        uVar13 = uVar13 - 1;
        iVar7 = iVar7 + 4;
      } while (uVar13 != 0);
    }
    iVar7 = (**(int (***)())(*param_1 + 0x20))(param_1,iVar6,0);
    if (iVar7 != 0) {
      lVar5 = 1;
      goto LAB_8299a16c;
    }
    uVar12 = 0;
    if (auStack_140[0] != 0) {
      puVar11 = &uStack_124;
      do {
        puVar11 = puVar11 + 1;
        uVar12 = uVar12 + 1;
        *(unsigned int *)*puVar11 = 0;
      } while (uVar12 < auStack_140[0]);
    }
    iVar7 = param_1[0x41];
    if (iVar7 != 0) {
      fn_82BA02A8(iVar7);
      fn_829639F0(iVar7);
    }
    *(int *)(param_1[0x40] * 4 + param_1[6]) = iVar6;
  }
  else {
    iVar6 = fn_8294AC48(param_1,param_1[0x41],0xffffffff8204fe90,auStack_120,auStack_140,
                              aiStack_e0,&uStack_130,uVar13);
    bVar4 = true;
    if (iVar6 == 0) goto LAB_82999f6c;
  }
  iVar6 = 0;
  lVar5 = 0;
LAB_8299a16c:
  if (iVar6 != 0) {
    fn_82BA02A8(iVar6);
    fn_829639F0(iVar6);
  }
  return lVar5;
}

