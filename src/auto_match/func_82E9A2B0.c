typedef unsigned char bool;
#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT31(h,l) ((unsigned int)((((unsigned int)(h)) << 8) | ((unsigned char)(l))))
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82E4BC30();
extern int fn_82E4BC38();
extern int fn_82E4BC48();
extern int fn_82E4BC68();
extern int fn_82E85050();
extern int fn_82E9A160();
extern int fn_82F68CC0();
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


unsigned __int64
fn_82E9A2B0(int param_1,__int64 param_2,unsigned int *param_3,unsigned __int64 param_4,int param_5,
             unsigned __int64 param_6,unsigned __int64 param_7)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  __int64 lVar13;
  __int64 lVar14;
  unsigned __int64 uVar15;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  
  fn_82E85050(*(unsigned int *)(param_1 + 0xc));
  uVar10 = 0;
  lVar13 = 0;
  uStack_7c = (unsigned int)CONCAT11(1,(unsigned char)uStack_7c);
  uVar3 = fn_82E4BC48(param_1);
  lVar8 = uVar3 * 0xd8 + (unsigned __int64)*(unsigned int *)(param_1 + 0x58) + (unsigned __int64)*(unsigned int *)(param_1 + 0x50)
          + (unsigned __int64)*param_3;
  uVar4 = fn_8265C940(lVar8,0x248c8000);
  if ((uVar4 & 0xffffffff) == 0) {
    return 0xffffffffffffff9c;
  }
  uVar15 = 0;
  if (param_5 != 0) {
    fn_82F68CC0(uVar4,param_6,param_7);
    uVar15 = param_7;
  }
  iVar5 = fn_82E4BC30(param_1);
  iVar6 = (int)uVar4;
  if ((iVar5 == 0) || ((uVar3 & 0xffffffff) != 1)) {
    iVar5 = fn_82E4BC30(param_1);
    if ((iVar5 == 0) && (1 < (uVar3 & 0xffffffff))) {
      if ((uVar3 & 0xffffffff) != 0) {
        do {
          if ((uVar10 & 0xffffffff) == (uVar3 - 1 & 0xffffffff)) {
            uVar11 = (unsigned __int64)*param_3 - lVar13;
          }
          else {
            uVar11 = (unsigned __int64)
                     *(unsigned int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x8e4) +
                              (int)((uVar10 & 0xffffffff) << 2));
          }
          uStack_7c = CONCAT31((((unsigned __int64)(uStack_7c) >> 0) & 0xFFFFFF),(-(uVar10 != 0) & 0xfeU) + 0xd);
          *(unsigned int *)((int)uVar15 + iVar6) = uStack_7c;
          fn_82F68CC0(uVar15 + 4 + uVar4,lVar13 + param_2,uVar11);
          lVar14 = uVar11 + uVar15 + 4;
          lVar13 = uVar11 + lVar13;
          iVar5 = fn_82E9A160(param_1,lVar14 + uVar4,lVar8 - lVar14,0x1b,&uStack_80);
          if (iVar5 != 0) {
            return 0xffffffffffffff9c;
          }
          uVar15 = (unsigned __int64)uStack_80 + lVar14;
          if ((uVar10 & 0xffffffff) == 0) {
            iVar5 = fn_82E9A160(param_1,uVar15 + uVar4,lVar8 - uVar15,0x1d,&uStack_80);
            if (iVar5 != 0) {
              return 0xffffffffffffff9c;
            }
            uVar15 = uStack_80 + uVar15;
          }
          uVar10 = uVar10 + 1;
        } while ((uVar10 & 0xffffffff) < (uVar3 & 0xffffffff));
      }
      goto LAB_82e9a780;
    }
    iVar5 = fn_82E4BC30(param_1);
    if ((iVar5 != 0) && (1 < (uVar3 & 0xffffffff))) {
      uVar11 = fn_82E4BC68(param_1);
      uVar9 = 0;
      if ((uVar11 & 0xffffffff) != 0) {
        do {
          if ((uVar9 & 0xffffffff) == (uVar11 - 1 & 0xffffffff)) {
            lVar14 = fn_82E4BC38(param_1);
            uVar12 = lVar14 - lVar13;
          }
          else {
            uVar12 = (unsigned __int64)
                     *(unsigned int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x8e4) +
                              (int)((uVar9 & 0xffffffff) << 2));
          }
          uStack_7c = CONCAT31((((unsigned __int64)(uStack_7c) >> 0) & 0xFFFFFF),(-(uVar9 != 0) & 0xfeU) + 0xd);
          *(unsigned int *)((int)uVar15 + iVar6) = uStack_7c;
          fn_82F68CC0(uVar15 + 4 + uVar4,lVar13 + param_2,uVar12);
          lVar14 = uVar12 + uVar15 + 4;
          lVar13 = uVar12 + lVar13;
          iVar5 = fn_82E9A160(param_1,lVar14 + uVar4,lVar8 - lVar14,0x1b,&uStack_80);
          if (iVar5 != 0) {
            return 0xffffffffffffff9c;
          }
          uVar15 = (unsigned __int64)uStack_80 + lVar14;
          if ((uVar9 & 0xffffffff) == 0) {
            iVar5 = fn_82E9A160(param_1,uVar15 + uVar4,lVar8 - uVar15,0x1c,&uStack_80);
            if (iVar5 != 0) {
              return 0xffffffffffffff9c;
            }
            lVar14 = uStack_80 + uVar15;
            iVar5 = fn_82E9A160(param_1,lVar14 + uVar4,lVar8 - lVar14,0x1d,&uStack_80);
            if (iVar5 != 0) {
              return 0xffffffffffffff9c;
            }
            uVar15 = (unsigned __int64)uStack_80 + lVar14;
          }
          uVar9 = uVar9 + 1;
        } while ((uVar9 & 0xffffffff) < (uVar11 & 0xffffffff));
      }
      bVar1 = (uVar3 - uVar11 & 0xffffffff) == 0;
      do {
        if (bVar1) {
          uVar9 = (unsigned __int64)*param_3 - lVar13;
        }
        else {
          uVar9 = (unsigned __int64)
                  *(unsigned int *)((int)((uVar11 + uVar10 & 0xffffffff) << 2) +
                            *(int *)(*(int *)(param_1 + 0xc) + 0x8e4) + -4);
        }
        uStack_7c = CONCAT31((((unsigned __int64)(uStack_7c) >> 0) & 0xFFFFFF),((int)uVar10 == 0) + '\v');
        *(unsigned int *)((int)uVar15 + iVar6) = uStack_7c;
        fn_82F68CC0(uVar15 + 4 + uVar4,lVar13 + param_2,uVar9);
        lVar14 = uVar9 + uVar15 + 4;
        lVar13 = uVar9 + lVar13;
        iVar5 = fn_82E9A160(param_1,lVar14 + uVar4,lVar8 - lVar14,0x1b,&uStack_80);
        if (iVar5 != 0) {
          return 0xffffffffffffff9c;
        }
        uVar15 = (unsigned __int64)uStack_80 + lVar14;
        if ((uVar10 & 0xffffffff) == 0) {
          iVar5 = fn_82E9A160(param_1,uVar15 + uVar4,lVar8 - uVar15,0x1c,&uStack_80);
          if (iVar5 != 0) {
            return 0xffffffffffffff9c;
          }
          uVar15 = uStack_80 + uVar15;
        }
        uVar10 = uVar10 + 1;
        uVar9 = uVar3 - uVar11 & 0xffffffff;
        bVar1 = (uVar10 & 0xffffffff) == uVar9;
      } while ((uVar10 & 0xffffffff) <= uVar9);
      goto LAB_82e9a780;
    }
    uStack_7c = CONCAT31((((unsigned __int64)(uStack_7c) >> 0) & 0xFFFFFF),0xd);
    *(unsigned int *)((int)uVar15 + iVar6) = uStack_7c;
    uVar2 = *param_3;
    fn_82F68CC0(uVar15 + 4 + uVar4,param_2,(unsigned __int64)uVar2);
    uVar15 = (unsigned __int64)uVar2 + uVar15 + 4;
    uVar7 = 0x1d;
  }
  else {
    uStack_7c = CONCAT31((((unsigned __int64)(uStack_7c) >> 0) & 0xFFFFFF),0xd);
    *(unsigned int *)((int)uVar15 + iVar6) = uStack_7c;
    lVar13 = fn_82E4BC38(param_1);
    fn_82F68CC0(uVar15 + 4 + uVar4,param_2,lVar13);
    lVar14 = lVar13 + uVar15 + 4;
    if (*(int *)(param_1 + 0x40) == 3) {
      iVar5 = fn_82E9A160(param_1,lVar14 + uVar4,lVar8 - lVar14,0x1c,&uStack_80);
      if (iVar5 != 0) {
        return 0xffffffffffffff9c;
      }
      lVar14 = (unsigned __int64)uStack_80 + lVar14;
      iVar5 = fn_82E9A160(param_1,lVar14 + uVar4,lVar8 - lVar14,0x1d,&uStack_80);
      if (iVar5 != 0) {
        return 0xffffffffffffff9c;
      }
      lVar14 = (unsigned __int64)uStack_80 + lVar14;
    }
    uStack_7c = CONCAT31((((unsigned __int64)(uStack_7c) >> 0) & 0xFFFFFF),0xc);
    *(unsigned int *)((int)lVar14 + iVar6) = uStack_7c;
    uVar2 = *param_3;
    fn_82F68CC0(lVar14 + 4 + uVar4,lVar13 + param_2,(unsigned __int64)uVar2 - lVar13);
    uVar15 = ((unsigned __int64)uVar2 - lVar13) + lVar14 + 4;
    if (*(int *)(param_1 + 0x40) != 3) goto LAB_82e9a780;
    uVar7 = 0x1c;
  }
  iVar6 = fn_82E9A160(param_1,uVar15 + uVar4,lVar8 - uVar15,uVar7,&uStack_80);
  if (iVar6 != 0) {
    return 0xffffffffffffff9c;
  }
  uVar15 = uStack_80 + uVar15;
LAB_82e9a780:
  fn_82F68CC0(param_2,uVar4,uVar15);
  *param_3 = (unsigned int)uVar15;
  if ((param_4 & 0xffffffff) < (uVar15 & 0xffffffff)) {
    return 0xffffffffffffff9c;
  }
  fn_8265C990(uVar4,0x248c8000);
  return 0;
}

