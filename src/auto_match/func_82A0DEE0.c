#define true 1
extern unsigned int *auStack_a8;
extern int fn_8263C620();
extern int fn_8263C7D8();
extern unsigned int iStack_a4;
extern unsigned int lbl_8207F5E8;
extern unsigned int lbl_8207F670;
extern unsigned int uStack00000014;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


unsigned __int64 fn_82A0DEE0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int param_4,
                       unsigned __int64 param_5,unsigned int param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned int uVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned int uStack00000014;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  unsigned char auStack_a8 [4];
  int iStack_a4;
  
  uStack00000014 = (unsigned int)param_1;
  uVar5 = (unsigned int)param_5;
  uStack_b8 = (unsigned int)param_3;
  uVar9 = param_3;
  uStack_c0 = uStack_b8;
  if ((int)uVar5 <= (int)uStack_b8) {
    uVar9 = param_5 & 0xffffffff;
    uStack_c0 = uVar5;
  }
  if ((int)uStack_b8 <= (int)uVar5) {
    uStack_b8 = uVar5;
  }
  uStack_bc = param_4;
  if ((int)param_4 <= (int)param_6) {
    uStack_bc = param_6;
  }
  param_3 = param_7 - param_3;
  param_5 = param_5 - param_7;
  uVar10 = (uStack_bc - param_8) + 1;
  if ((((__int64)param_3 < 1) || ((int)param_5 < 1)) || ((int)uVar10 < 1)) {
    uVar9 = 0;
  }
  else {
    fn_8263C7D8(param_1,0,auStack_a8,0,0x10);
    trapWord(6,param_3,0);
    trapWord(6,param_5,0);
    trapWord(6,uVar10,0);
    uVar12 = 0;
    uVar11 = 0;
    uVar7 = 0;
    if ((param_8 & 0xffffffff) <= (unsigned __int64)uStack_bc) {
      while( true ) {
        lVar6 = 0x800000;
        iVar4 = (int)(uVar7 >> 0x18) * 0xd;
        uVar5 = (unsigned int)param_8;
        if ((uVar9 & 0xffffffff) <= (param_7 & 0xffffffff)) {
          lVar8 = (param_7 - uVar9) + 1;
          do {
            uVar1 = (((unsigned int)uVar9 & 7) + ((unsigned int)((param_8 & 0xffffffff) << 2) & 0x18)) * 2;
            uVar3 = uVar9 & 0xfffffff8;
            uVar1 = (((unsigned int)uVar9 >> 5) +
                    ((int)((param_8 & 0xffffffff) >> 5) +
                    ((unsigned int)((param_8 & 0xffffffff) >> 3) & 0x1ffffffc)) * 2) * 0x100 +
                    ((uVar1 & 0xfffffff0) + (uVar5 & 1) * 8) * 2 + (uVar1 & 0xf) +
                    (uVar5 & 8) * 0x10;
            iVar2 = ((unsigned int)((unsigned __int64)lVar6 >> 0x18) & 0xff) + iVar4;
            lVar6 = lVar6 + 0x6000000 / (param_3 & 0xffffffff);
            uVar9 = uVar9 + 1;
            uVar12 = (unsigned char)(&lbl_8207F670)[iVar2] + uVar12;
            uVar11 = (-(unsigned __int64)
                       ((-(unsigned __int64)
                          (param_2 ==
                          ((unsigned __int64)
                           *(unsigned short *)
                            ((((uVar1 & 0xfffffe00) + (uVar5 & 0x10) * 0x10) * 2 + (uVar1 & 0x1c0))
                             * 4 + ((unsigned int)((uVar3 + (param_8 & 0x7ffffffb) * 2 & 0xffffffff) << 3) &
                                   0xc0) + (uVar1 & 0x3f) + iStack_a4) & 3)) & param_2) ==
                       (__int64)(int)(unsigned int)(unsigned char)(&lbl_8207F5E8)[iVar2] * (__int64)(int)param_2) &
                     (unsigned __int64)(unsigned char)(&lbl_8207F670)[iVar2]) + uVar11;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
          uVar9 = (unsigned __int64)uStack_c0;
        }
        lVar6 = 0x6800000;
        if ((param_7 & 0xffffffff) <= (unsigned __int64)uStack_b8) {
          lVar8 = (uStack_b8 - param_7) + 1;
          uVar9 = param_7;
          do {
            uVar1 = (((unsigned int)uVar9 & 7) + ((unsigned int)((param_8 & 0xffffffff) << 2) & 0x18)) * 2;
            uVar3 = uVar9 & 0xfffffff8;
            uVar1 = (((unsigned int)uVar9 >> 5) +
                    ((int)((param_8 & 0xffffffff) >> 5) +
                    ((unsigned int)((param_8 & 0xffffffff) >> 3) & 0x1ffffffc)) * 2) * 0x100 +
                    ((uVar1 & 0xfffffff0) + (uVar5 & 1) * 8) * 2 + (uVar1 & 0xf) +
                    (uVar5 & 8) * 0x10;
            iVar2 = ((unsigned int)((unsigned __int64)lVar6 >> 0x18) & 0xff) + iVar4;
            lVar6 = lVar6 + 0x6000000 / (param_5 & 0xffffffff);
            uVar9 = uVar9 + 1;
            uVar12 = (unsigned char)(&lbl_8207F670)[iVar2] + uVar12;
            uVar11 = (-(unsigned __int64)
                       ((-(unsigned __int64)
                          (param_2 ==
                          ((unsigned __int64)
                           *(unsigned short *)
                            ((((uVar1 & 0xfffffe00) + (uVar5 & 0x10) * 0x10) * 2 + (uVar1 & 0x1c0))
                             * 4 + ((unsigned int)((uVar3 + (param_8 & 0x7ffffffb) * 2 & 0xffffffff) << 3) &
                                   0xc0) + (uVar1 & 0x3f) + iStack_a4) & 3)) & param_2) ==
                       (__int64)(int)(unsigned int)(unsigned char)(&lbl_8207F5E8)[iVar2] * (__int64)(int)param_2) &
                     (unsigned __int64)(unsigned char)(&lbl_8207F670)[iVar2]) + uVar11;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
          uVar9 = (unsigned __int64)uStack_c0;
        }
        param_8 = param_8 + 1;
        if ((unsigned __int64)uStack_bc < (param_8 & 0xffffffff)) break;
        uVar7 = (unsigned __int64)(unsigned int)((int)uVar7 + (int)(0xa000000 / (uVar10 & 0xffffffff)));
      }
      param_1 = (unsigned __int64)uStack00000014;
    }
    fn_8263C620(param_1,0);
    if ((uVar12 & 0xffffffff) == 0) {
      uVar12 = 1;
    }
    trapWord(6,uVar12,0);
    uVar9 = ((uVar11 & 0xffffff) * 0x100 - uVar11 & 0xffffffff) / (uVar12 & 0xffffffff) & 0xff;
  }
  return uVar9;
}

