extern int fn_82E8CD90();
extern int fn_82E8D0A8();
extern int fn_82E8D3A8();
extern int fn_82E8E390();
extern int fn_82EFE7C0();
extern int fn_82F04DC0();
extern int fn_82F04E20();
extern int fn_82F65E20();
extern int __iob_func();
extern int iRam83248e5c;
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005710;


void fn_82E8E7A8(int param_1,int param_2,unsigned int param_3,unsigned int param_4,unsigned __int64 param_5,
                  unsigned int *param_6,unsigned int *param_7,int *param_8)

{
  unsigned int uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  __int64 lVar6;
  int *piVar7;
  double dVar8;
  unsigned __int64 uVar9;
  unsigned int in_stack_00000054;
  
  *(int *)(param_1 + 0xaf0) = param_2;
  *(unsigned int *)(param_1 + 0x2a0) = param_3;
  *(unsigned int *)(param_1 + 0x2a4) = param_3;
  *(unsigned int *)(param_1 + 0x618) = in_stack_00000054;
  *(unsigned int *)(param_1 + 0x590) = param_4;
  *(unsigned int *)(param_1 + 0x1f78) = (unsigned int)((int)param_5 == 0);
  if (*(int *)(param_1 + 0x8e0) != 0) {
    if (((*(int *)(param_1 + 0x6d54) == 0) || (*(int *)(param_1 + 0x7b38) == 0)) ||
       (*(int *)(param_1 + 0x6de8) != 1)) {
      *(unsigned int *)(param_1 + 0x8d8) = *(unsigned int *)(param_1 + 0x8dc);
    }
    else {
      *(int *)(param_1 + 0x8d8) = *(int *)(param_1 + 0x2d4) * 4 + *(int *)(param_1 + 0x8dc);
    }
  }
  if ((param_2 == 0) || (param_2 == 4)) {
    fn_82E8E390(param_1);
  }
  else if (param_2 == 1) {
    fn_82E8CD90(param_1,param_5);
  }
  else if (param_2 == 2) {
    fn_82E8D0A8(param_1,param_5);
  }
  *param_7 = *(unsigned int *)(param_1 + 0x1be4);
  if (((*(int *)(param_1 + 0xaf0) != 0) &&
      (*(int *)(param_1 + 0x1be8) = *(int *)(param_1 + 0x1be4), *(int *)(param_1 + 0x1be4) != 0)) &&
     ((int)param_5 != 0)) {
    *(unsigned int *)(param_1 + 0xaf0) = -(unsigned int)(*(int *)(param_1 + 0xaf0) == 2) & 4;
    if (*(int *)(param_1 + 0x7b38) == 0) {
      if (*(int *)(param_1 + 0x8a0) != 0) {
        fn_82F04DC0(param_1);
      }
    }
    else {
      fn_82F04E20(param_1,1);
    }
    fn_82E8D3A8(param_1);
    if (((*(int *)(param_1 + 0x6d54) != 0) && (*(int *)(param_1 + 0x7b38) != 0)) &&
       (*(int *)(param_1 + 0x6de8) == 1)) {
      *(unsigned int *)(param_1 + 0x8f0) = *(unsigned int *)(param_1 + 0x8f8);
      *(unsigned int *)(param_1 + 0x8e8) = *(unsigned int *)(param_1 + 0x8fc);
    }
    if ((*(int *)(param_1 + 0x1dac) == 0) && (*(int *)(param_1 + 0xaf0) == 0)) {
      dVar8 = *(double *)(param_1 + 0x1f68);
      if (*(int *)(param_1 + 0x4f20) == 0) {
        *(double *)(param_1 + 0x2b0) = dVar8;
        *(unsigned int *)(param_1 + 0x2a0) = *(unsigned int *)(param_1 + 0x1f5c);
        *(unsigned int *)(param_1 + 0x2a4) = *(unsigned int *)(param_1 + 0x1f5c);
        *(unsigned int *)(param_1 + 0x590) = *(unsigned int *)(param_1 + 0x1f60);
        fn_82EFE7C0(param_1);
      }
      else if (*(double *)(param_1 + 0x2b0) < dVar8) {
        *(double *)(param_1 + 0x2b0) = dVar8;
        *(unsigned int *)(param_1 + 0x2a0) = *(unsigned int *)(param_1 + 0x1f5c);
        *(unsigned int *)(param_1 + 0x2a4) = *(unsigned int *)(param_1 + 0x1f5c);
        *(unsigned int *)(param_1 + 0x590) = *(unsigned int *)(param_1 + 0x1f60);
      }
    }
    fn_82E8E390(param_1);
  }
  *param_6 = *(unsigned int *)(param_1 + 0xaf0);
  *param_8 = (int)((0x27 - (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x1ebc) + 0x10) & 0xffffffff) >>
                  3) + *(int *)(*(int *)(param_1 + 0x1ebc) + 4);
  if (*(int *)(param_1 + 0x6f98) != 0) {
    if (iRam83248e5c == 0) {
      iRam83248e5c = __iob_func();
      iRam83248e5c = iRam83248e5c + 0x40;
    }
    *(int *)(param_1 + 0x75d0) = *(int *)(param_1 + 0x75cc) + *(int *)(param_1 + 0x75d0);
    *(int *)(param_1 + 0x75d8) = *(int *)(param_1 + 0x75d4) + *(int *)(param_1 + 0x75d8);
    *(int *)(param_1 + 0x75c8) = *(int *)(param_1 + 0x75c4) + *(int *)(param_1 + 0x75c8);
    *(int *)(param_1 + 0x75e0) = *(int *)(param_1 + 0x75dc) + *(int *)(param_1 + 0x75e0);
    if (*(int *)(param_1 + 0x75c4) != 0) {
      piVar7 = (int *)(param_1 + 0x7004);
      lVar6 = 0x49;
      uVar9 = lbl_82002C40;
      dVar8 = lbl_82005710;
      do {
        if ((double)(__int64)*piVar7 / (double)(__int64)*(int *)(param_1 + 0x75c4) != dVar8) {
          fn_82F65E20();
          fn_82F65E20(uVar9);
        }
        lVar6 = lVar6 + -1;
        piVar7 = piVar7 + 1;
      } while (lVar6 != 0);
    }
    piVar7 = (int *)(param_1 + 0x72e0);
    lVar6 = 0xf;
    do {
      piVar2 = piVar7 + 5;
      piVar3 = piVar7 + -0xb3;
      piVar7[1] = piVar7[1] + piVar7[-0xb7];
      piVar7[2] = piVar7[2] + piVar7[-0xb6];
      piVar7[3] = piVar7[3] + piVar7[-0xb5];
      piVar7[4] = piVar7[-0xb4] + piVar7[4];
      piVar7 = piVar7 + 5;
      *piVar7 = *piVar3 + *piVar2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    iVar4 = *(int *)(*(int *)(param_1 + 0x1ebc) + 0x10);
    uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x1ebc) + 4);
    if (iVar4 == 0x20) {
      iVar4 = uVar1 << 3;
    }
    else {
      iVar4 = ((uVar1 & 0xfffffffc) + 4) * 8 - iVar4;
    }
    iVar5 = *(int *)(param_1 + 0x6fcc) + *(int *)(param_1 + 0x6fd0) + *(int *)(param_1 + 0x6fd4) +
            *(int *)(param_1 + 0x6fdc);
    *(int *)(param_1 + 0x75f4) = *(int *)(param_1 + 0x75f4) + iVar4;
    *(int *)(param_1 + 0x6fc8) = iVar5;
    *(int *)(param_1 + 0x6fac) = *(int *)(param_1 + 0x6f9c) + *(int *)(param_1 + 0x6fac);
    *(int *)(param_1 + 0x6fb0) = *(int *)(param_1 + 0x6fa0) + *(int *)(param_1 + 0x6fb0);
    *(int *)(param_1 + 0x6fb4) = *(int *)(param_1 + 0x6fa4) + *(int *)(param_1 + 0x6fb4);
    *(int *)(param_1 + 0x6fb8) = *(int *)(param_1 + 0x6fa8) + *(int *)(param_1 + 0x6fb8);
    *(int *)(param_1 + 0x6fe4) = *(int *)(param_1 + 0x6fc0) + *(int *)(param_1 + 0x6fe4);
    *(int *)(param_1 + 0x6fe8) = *(int *)(param_1 + 0x6fc4) + *(int *)(param_1 + 0x6fe8);
    *(int *)(param_1 + 0x6fe0) = *(int *)(param_1 + 0x6fbc) + *(int *)(param_1 + 0x6fe0);
    *(int *)(param_1 + 0x6fec) = iVar5 + *(int *)(param_1 + 0x6fec);
    *(int *)(param_1 + 0x6ff0) = *(int *)(param_1 + 0x6fcc) + *(int *)(param_1 + 0x6ff0);
    *(int *)(param_1 + 0x6ff4) = *(int *)(param_1 + 0x6fd0) + *(int *)(param_1 + 0x6ff4);
    *(int *)(param_1 + 0x6ff8) = *(int *)(param_1 + 0x6fd4) + *(int *)(param_1 + 0x6ff8);
    *(int *)(param_1 + 0x7000) = *(int *)(param_1 + 0x6fdc) + *(int *)(param_1 + 0x7000);
    *(int *)(param_1 + 0x6ffc) = *(int *)(param_1 + 0x6fd8) + *(int *)(param_1 + 0x6ffc);
    *(int *)(param_1 + 0x75e8) = *(int *)(param_1 + 0x75e4) + *(int *)(param_1 + 0x75e8);
    *(int *)(param_1 + 0x75f0) = *(int *)(param_1 + 0x75ec) + *(int *)(param_1 + 0x75f0);
  }
  return;
}

