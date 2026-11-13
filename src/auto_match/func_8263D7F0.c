extern unsigned int *auStack_90;
extern int fn_82637550();
extern int fn_8263D250();
extern int fn_826417C8();
extern int fn_82641B60();
extern int fn_82645110();
extern int memcpy();
extern unsigned int lbl_821CE890;


void fn_8263D7F0(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned int *param_4,
                  unsigned char *param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int in_r0;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  int *piVar11;
  unsigned __int64 uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned char auStack_90 [32];
  
  if (param_5 == (unsigned char *)0x0) {
    param_5 = auStack_90;
    puVar5 = (unsigned int *)((unsigned int)(&lbl_821CE890 + in_r0) & 0xfffffff0);
    uVar13 = puVar5[1];
    uVar14 = puVar5[2];
    uVar15 = puVar5[3];
    puVar3 = (unsigned int *)((unsigned int)(auStack_90 + in_r0) & 0xfffffff0);
    *puVar3 = *puVar5;
    puVar3[1] = uVar13;
    puVar3[2] = uVar14;
    puVar3[3] = uVar15;
  }
  if ((*(int *)(param_2 + 0x3158) == 0) &&
     (param_3 = param_3 << 0x20 | param_3 & 0xffffff0f, param_3 == 0)) {
    return;
  }
  uVar1 = (unsigned int)*(float *)(param_2 + 0x3218);
  uVar2 = (unsigned int)*(float *)(param_2 + 0x321c);
  uVar8 = (unsigned __int64)*param_4;
  if ((int)*param_4 <= (int)uVar1) {
    uVar8 = (unsigned __int64)uVar1;
  }
  uVar9 = (unsigned __int64)param_4[1];
  if ((int)param_4[1] <= (int)uVar2) {
    uVar9 = (unsigned __int64)uVar2;
  }
  uVar6 = (unsigned __int64)(unsigned int)(int)*(float *)(param_2 + 0x3220) + (unsigned __int64)uVar1;
  uVar10 = (unsigned __int64)param_4[2];
  if ((int)uVar6 <= (int)param_4[2]) {
    uVar10 = uVar6;
  }
  uVar7 = (unsigned __int64)(unsigned int)(int)*(float *)(param_2 + 0x3224) + (unsigned __int64)uVar2;
  uVar6 = (unsigned __int64)param_4[3];
  if ((int)uVar7 <= (int)param_4[3]) {
    uVar6 = uVar7;
  }
  if (*(int *)(param_2 + 0x2f00) != 0) {
    if ((int)uVar8 <= (int)*(unsigned int *)(param_2 + 0x3234)) {
      uVar8 = (unsigned __int64)*(unsigned int *)(param_2 + 0x3234);
    }
    if ((int)uVar9 <= (int)*(unsigned int *)(param_2 + 0x3238)) {
      uVar9 = (unsigned __int64)*(unsigned int *)(param_2 + 0x3238);
    }
    if ((int)*(unsigned int *)(param_2 + 0x323c) <= (int)uVar10) {
      uVar10 = (unsigned __int64)*(unsigned int *)(param_2 + 0x323c);
    }
    if ((int)*(unsigned int *)(param_2 + 0x3240) <= (int)uVar6) {
      uVar6 = (unsigned __int64)*(unsigned int *)(param_2 + 0x3240);
    }
  }
  if (((int)uVar8 < (int)uVar10) && ((int)uVar9 < (int)uVar6)) {
    uVar7 = *(unsigned __int64 *)(param_2 + 0x10);
    if (uVar7 != 0) {
      if ((*(unsigned __int64 *)(param_2 + 0x28) & uVar7) != 0) {
        uVar4 = fn_826417C8(param_2,uVar7,*(unsigned int *)(param_2 + 0x2940));
        *(unsigned __int64 *)(param_2 + 0x10) = uVar4;
      }
      if ((*(unsigned __int64 *)(param_2 + 0x10) & 0xfff) != 0) {
        fn_82641B60(param_2,*(unsigned __int64 *)(param_2 + 0x10) << 0x34,0x2200,param_2 + 0x2934);
        *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) & 0xfffffffffffff000;
      }
      if ((*(unsigned __int64 *)(param_2 + 0x10) & 0x1f000) != 0) {
        fn_82641B60(param_2,(*(unsigned __int64 *)(param_2 + 0x10) & 0x1f000) << 0x2f,0x2180,
                          param_2 + 0x2920);
        *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) & 0xfffffffffffe0fff;
      }
      if ((*(unsigned __int64 *)(param_2 + 0x10) & 0x3fffc0000000000) != 0) {
        fn_82641B60(param_2,(*(unsigned __int64 *)(param_2 + 0x10) & 0x3fffc0000000000) << 6,0x2000,
                          param_2 + 0x2880);
        *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) & 0xfc0003ffffffffff;
      }
      if ((*(unsigned __int64 *)(param_2 + 0x10) & 0x3ffffe00000) != 0) {
        fn_82641B60(param_2,(*(unsigned __int64 *)(param_2 + 0x10) & 0x3ffffe00000) << 0x16,0x2100,
                          param_2 + 0x28cc);
        *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) & 0xfffffc00001fffff;
      }
    }
    uVar7 = *(unsigned __int64 *)(param_2 + 0x18);
    if ((uVar7 != 0) && ((uVar7 & 0x7ffffc00000000) != 0)) {
      fn_82641B60(param_2,(uVar7 & 0x7ffffc00000000) << 9,0x2280,param_2 + 0x2964);
      *(unsigned __int64 *)(param_2 + 0x18) = *(unsigned __int64 *)(param_2 + 0x18) & 0xff800003ffffffff;
    }
    uVar7 = *(unsigned __int64 *)(param_2 + 0x20);
    if ((uVar7 != 0) && ((uVar7 & 0x3fffffffff) != 0)) {
      fn_82641B60(param_2,uVar7 << 0x1a,0x2300,param_2 + 0x29b8);
      *(unsigned __int64 *)(param_2 + 0x20) = *(unsigned __int64 *)(param_2 + 0x20) & 0xffffffc000000000;
    }
    puVar5 = *(unsigned int **)(param_2 + 0x30);
    if (*(unsigned int **)(param_2 + 0x38) < puVar5) {
      puVar5 = (unsigned int *)fn_82645110(param_2);
    }
    if ((*(unsigned char *)(param_2 + 0x2abc) & 0x20) != 0) {
      puVar5[1] = 0xc0006000;
      puVar5 = puVar5 + 2;
      *puVar5 = *(unsigned int *)(param_2 + 0x3254);
    }
    puVar5[1] = 0xc0003b00;
    puVar5[2] = 0x300;
    puVar5[3] = 0xc01c2b00;
    puVar5[4] = 0;
    puVar5[5] = 0x1b;
    memcpy(puVar5 + 6,0xffffffff8218d7f0,0x6c);
    puVar5 = puVar5 + 0x20;
    *(unsigned int **)(param_2 + 0x30) = puVar5;
    if (*(unsigned int **)(param_2 + 0x38) < puVar5) {
      puVar5 = (unsigned int *)fn_82645110(param_2);
    }
    puVar5[1] = 0xc00a2b00;
    puVar5[2] = 1;
    puVar5[3] = 9;
    memcpy(puVar5 + 4,0xffffffff8218d1d4,0x24);
    puVar5[0xd] = 0x12180;
    puVar5[0xe] = 0x10010001;
    puVar5 = puVar5 + 0xf;
    *puVar5 = 0;
    *(unsigned int **)(param_2 + 0x30) = puVar5;
    if (*(unsigned int **)(param_2 + 0x38) < puVar5) {
      puVar5 = (unsigned int *)fn_82645110(param_2);
    }
    puVar5[1] = 0x22100;
    puVar5[2] = 0xffff;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0x2293;
    puVar5[6] = 0;
    puVar5[7] = 0x22204;
    puVar5[8] = 0x10000;
    puVar5[9] = 0x10000;
    puVar5[10] = 0x300;
    puVar5[0xb] = 0x2312;
    puVar5[0xc] = 0xffff;
    puVar5[0xd] = 0x200d;
    puVar5 = puVar5 + 0xe;
    *puVar5 = 0;
    uVar7 = *(unsigned __int64 *)(param_2 + 0x10);
    *(unsigned __int64 *)(param_2 + 0x10) = uVar7 | 0x20000000000;
    *(unsigned __int64 *)(param_2 + 0x10) = uVar7 | 0x30000000000;
    *(unsigned __int64 *)(param_2 + 0x10) = uVar7 | 0x38000000000;
    *(unsigned __int64 *)(param_2 + 0x18) = *(unsigned __int64 *)(param_2 + 0x18) | 0x800000000;
    uVar7 = *(unsigned __int64 *)(param_2 + 0x10);
    *(unsigned __int64 *)(param_2 + 0x10) = uVar7 | 0x80;
    *(unsigned __int64 *)(param_2 + 0x10) = uVar7 | 0xc0;
    *(unsigned __int64 *)(param_2 + 0x10) = uVar7 | 0xe0;
    *(unsigned __int64 *)(param_2 + 0x20) = *(unsigned __int64 *)(param_2 + 0x20) | 0x80000;
    uVar7 = *(unsigned __int64 *)(param_2 + 0x10);
    *(unsigned __int64 *)(param_2 + 0x10) = uVar7 | 0x100000000000;
    *(unsigned __int64 *)(param_2 + 0x10) = uVar7 | 0x100000080000;
    *(unsigned __int64 *)(param_2 + 0x10) = uVar7 | 0x100000180000;
    *(unsigned int **)(param_2 + 0x30) = puVar5;
    if ((param_3 & 0xf) == 0) {
      fn_8263D250(param_1,param_2,param_3,0xffffffffffffffff,uVar8,uVar9,uVar10,uVar6,param_5);
    }
    else {
      if (*(unsigned int **)(param_2 + 0x38) < puVar5) {
        puVar5 = (unsigned int *)fn_82645110(param_2);
      }
      puVar5[1] = 0x2104;
      puVar5[2] = 0xffff;
      uVar12 = 0;
      piVar11 = (int *)(param_2 + 0x3148);
      puVar5[3] = 0x2202;
      puVar5[4] = 0;
      puVar5[5] = 0x2201;
      puVar5[6] = 0x10001;
      *(unsigned int **)(param_2 + 0x30) = puVar5 + 6;
      uVar7 = *(unsigned __int64 *)(param_2 + 0x10);
      *(unsigned __int64 *)(param_2 + 0x10) = uVar7 | 0x2000000000;
      *(unsigned __int64 *)(param_2 + 0x10) = uVar7 | 0x2000000200;
      *(unsigned __int64 *)(param_2 + 0x10) = uVar7 | 0x2000000600;
      do {
        if ((((unsigned int)(1 << ((unsigned int)uVar12 & 0x3f)) & param_3) != 0) && (*piVar11 != 0)) {
          fn_8263D250(param_1,param_2,param_3,uVar12,uVar8,uVar9,uVar10,uVar6,param_5);
          param_3 = param_3 << 0x20 | param_3 & 0xffffff0f;
        }
        uVar12 = uVar12 + 1;
        piVar11 = piVar11 + 1;
      } while ((uVar12 & 0xffffffff) < 4);
    }
    uVar1 = *(unsigned int *)(param_2 + 0x28c8);
    fn_82637550(param_2,(*(int *)(param_2 + 0x28c4) << 0x11) >> 0x11,
                      (*(int *)(param_2 + 0x28c4) << 1) >> 0x11,
                      (int)(uVar1 << 0x11 | uVar1 >> 0xf) >> 0x11,(int)(uVar1 << 1) >> 0x11);
    *(unsigned char *)(param_2 + 0x2abd) = *(unsigned char *)(param_2 + 0x2abd) | 4;
    *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x20000;
  }
  return;
}

