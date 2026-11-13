#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int fStack_64;
extern unsigned int fStack_68;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern int fn_82261BE0();
extern int fn_822ABA88();
extern int fn_82357010();
extern int fn_8242C6A0();
extern int fn_82436130();
extern int fn_824369C0();
extern int fn_8243E3C8();
extern int fn_8243E578();
extern unsigned int lbl_82192734;
extern unsigned int lbl_82193AF0;
extern unsigned int stack0x00000000;


void fn_824376F8(int param_1)

{
  int *piVar1;
  char cVar5;
  __int64 lVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  int iVar8;
  int iVar9;
  unsigned int uVar10;
  __int64 lVar11;
  unsigned int uVar12;
  double dVar13;
  double dVar14;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  
  if (*(int *)(*(int *)(param_1 + 0x40) + 0x198) == 0) {
    cVar5 = fn_824369C0(param_1,(unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x40) + 0x148) * 0x18 +
                                  (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x40) + 0x138));
    if (cVar5 != '\0') {
      iVar4 = *(int *)(param_1 + 0x40);
      *(unsigned int *)(*(int *)(iVar4 + 0x148) * 0x18 + *(int *)(iVar4 + 0x138) + 0x14) =
           *(unsigned int *)(iVar4 + 0xf8);
      fn_8243E3C8((unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x40) + 0x148) * 0x18 +
                      (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x40) + 0x138),0);
      uVar10 = 0;
      iVar4 = 0;
      do {
        iVar8 = *(int *)(param_1 + 0x40);
        uVar12 = 0;
        iVar9 = *(int *)(iVar8 + 0x138) + iVar4;
        if ((*(int *)(iVar9 + 8) - *(int *)(iVar9 + 4)) / 0x5c != 0) {
          lVar11 = 0;
          do {
            fn_82357010(iVar8 + 0x124,(unsigned __int64)*(unsigned int *)(iVar9 + 4) + lVar11);
            uVar12 = uVar12 + 1;
            lVar11 = lVar11 + 0x5c;
          } while (uVar12 < (unsigned int)((int)(*(int *)(iVar9 + 8) - *(unsigned int *)(iVar9 + 4)) / 0x5c));
        }
        uVar10 = uVar10 + 1;
        iVar4 = iVar4 + 0x18;
      } while (uVar10 <= *(unsigned int *)(*(int *)(param_1 + 0x40) + 0x148));
      fn_8243E3C8(*(int *)(param_1 + 0x40) + 0x120,0);
      fn_8243E3C8((unsigned __int64)*(unsigned int *)(param_1 + 0x40) + 0x120,2);
      uVar7 = ZEXT48(*(unsigned int **)(param_1 + 0x40));
      uVar10 = **(unsigned int **)(param_1 + 0x40);
      dVar14 = (double)lbl_82193AF0;
      iVar4 = *(int *)(*(int *)(uVar10 + 0x174) + 0x5c);
      if (((*(int *)(iVar4 + 0x1c8) - *(int *)(iVar4 + 0x1c4) & 0xfffffffcU) == 4) &&
         (((*(int *)(uVar10 + 0xa0) == 0 || (*(int *)(*(int *)(uVar10 + 0xa0) + 0x40) != 1)) &&
          (lVar11 = 0, 0 < *(int *)(*(int *)(uVar10 + 0x174) + 0xbc))))) {
        iVar4 = 0;
        do {
          uVar6 = (unsigned __int64)uVar10;
          lVar2 = fn_8243E578(uVar7 + 0x120,lVar11);
          if (lVar2 != 0) {
            piVar1 = *(int **)(**(int **)((int)uVar6 + 8) + iVar4);
            uVar3 = fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1),0);
            fn_8242C6A0((double)(float)((double)(__int64)*(int *)((int)lVar2 + 0x48) * dVar14
                                             ),uVar6,uVar3);
            fn_82436130(ZEXT48(&stack0x00000000) - 0x80,param_1,uVar3);
            uVar7 = ZEXT48(*(int **)(param_1 + 0x40));
            iVar8 = 0;
            piVar1 = *(int **)(**(int **)(param_1 + 0x40) + 8);
            if ((piVar1[1] - *piVar1 & 0xfffffffcU) != 0) {
              do {
                iVar8 = iVar8 + 1;
              } while (iVar8 < piVar1[1] - *piVar1 >> 2);
            }
          }
          uVar10 = *(unsigned int *)uVar7;
          lVar11 = lVar11 + 1;
          iVar4 = iVar4 + 4;
        } while ((int)lVar11 < *(int *)(*(int *)(uVar10 + 0x174) + 0xbc));
      }
      dVar13 = (double)lbl_82192734;
      lVar11 = 0;
      *(unsigned int *)((int)uVar7 + 0x198) = 1;
      lVar2 = ZEXT48(&stack0x00000000) - 0x70;
      uVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 0x40);
      uVar10 = *(unsigned int *)(*(unsigned int *)(param_1 + 0x40) + 0x138);
      do {
        iVar4 = fn_8243E578((unsigned __int64)*(unsigned int *)((int)uVar7 + 0x148) * 0x18 + (unsigned __int64)uVar10);
        if (iVar4 == 0) {
          *(float *)lVar2 = (float)dVar13;
        }
        else {
          *(float *)lVar2 = (float)((double)(__int64)*(int *)(iVar4 + 0x48) * dVar14);
        }
        lVar11 = lVar11 + 1;
        lVar2 = lVar2 + 4;
      } while ((int)lVar11 < 8);
      uVar7 = (unsigned __int64)*(unsigned int *)(*(int *)(**(int **)(param_1 + 0x40) + 0x174) + 0xbc);
      fn_82261BE0((double)fStack_70,(double)fStack_6c,(double)fStack_68,(double)fStack_64,
                      *(unsigned int *)(*(int *)((*(int **)(param_1 + 0x40))[1] + 0x40) + 0x1ec),
                      ((~uVar7 & 0xffffffff) >> 0x1f) + (unsigned __int64)(uVar7 < 2) & 1,
                      ((~uVar7 & 0xffffffff) >> 0x1f) + (unsigned __int64)(uVar7 < 3) & 1,
                      ((~uVar7 & 0xffffffff) >> 0x1f) + (unsigned __int64)(uVar7 < 4) & 1);
    }
  }
  return;
}

