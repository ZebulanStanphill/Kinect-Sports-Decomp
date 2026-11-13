extern int fn_82AB14E0();
extern int fn_82AB1538();
extern int fn_82AB15D0();
extern int fn_82BA8BE0();
extern int fn_82BA8D70();
extern int fn_82F68CC0();
extern unsigned int lbl_820E2FD0;
extern unsigned int lbl_820E2FD4;
extern unsigned int lbl_820E2FD8;
extern unsigned int lbl_820E2FDC;
extern unsigned int lbl_820E2FE0;
extern unsigned int lbl_820E2FE4;
extern unsigned int lbl_820E2FF0;
extern unsigned int lbl_820E3014;


void fn_82BA9328(int *param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar5;
  __int64 lVar4;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  
  puVar1 = (unsigned int *)param_1[4];
  uVar2 = *puVar1;
  uVar3 = puVar1[2];
  puVar1[2] = uVar3 | 0xe0000000;
  *puVar1 = uVar2 & 0x30fc07f | 0xc8000000;
  puVar1[2] = (lbl_820E3014 & 0x1f) << 0x18 | uVar3 & 0xe0ffffff | 0xe0000000;
  *puVar1 = uVar2 & 0x3004040 | 0xc8000000;
  iVar5 = param_1[0xf];
  param_1[0xf] = iVar5 + 1;
  if (*(int *)(*param_1 + 0x560) * 3 < iVar5 + 1) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df31c,0xffffffff820df268,0x6d);
  }
  iVar5 = param_1[4];
  param_1[4] = iVar5 + 0xc;
  fn_82BA8BE0(param_1,0,0,(__int64)(((iVar5 + 0xc) - param_1[1]) / 0xc) + -1,1);
  fn_82AB1538(param_1[0x1b],0x2d,4,lbl_820E2FD4);
  if ((param_1[5] != 0) && (param_1[5] != param_1[6])) {
    uVar2 = param_1[2];
    uVar7 = (unsigned __int64)uVar2;
    uVar3 = param_1[3];
    if (uVar7 < uVar3) {
      do {
        iVar5 = fn_82AB14E0(uVar7,0x2d,4);
        if (iVar5 == lbl_820E2FF0) {
          lVar4 = fn_82AB14E0(uVar7,1,0xd);
          fn_82AB1538(uVar7,1,0xd,lVar4 + (int)(uVar3 - uVar2) / 6);
        }
        uVar7 = uVar7 + 6;
      } while ((uVar7 & 0xffffffff) < (unsigned __int64)(unsigned int)param_1[3]);
    }
    fn_82F68CC0(param_1[3],(unsigned __int64)(unsigned int)param_1[5],
                 (unsigned __int64)(unsigned int)param_1[6] - (unsigned __int64)(unsigned int)param_1[5]);
    param_1[3] = (param_1[6] - param_1[5]) + param_1[3];
  }
  uVar2 = param_1[0xe];
  if (uVar2 != (((int)uVar2 >> 1) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 1) != 0)) * 2) {
    fn_82BA8D70(param_1);
  }
  uVar6 = (unsigned __int64)(unsigned int)param_1[2];
  uVar7 = (unsigned int)param_1[3] - uVar6;
  if (uVar6 < (unsigned int)param_1[3]) {
    do {
      iVar5 = fn_82AB14E0(uVar6,0x2d,4);
      if ((((iVar5 == lbl_820E2FD0) || (iVar5 == lbl_820E2FD4)) || (iVar5 == lbl_820E2FD8)) ||
         (((iVar5 == lbl_820E2FDC || (iVar5 == lbl_820E2FE0)) || (iVar5 == lbl_820E2FE4)))) {
        lVar4 = fn_82AB14E0(uVar6,1,0xc);
        fn_82AB1538(uVar6,1,0xc,lVar4 + (uVar7 & 0xffffffff) / 0xc);
      }
      uVar6 = uVar6 + 6;
    } while ((uVar6 & 0xffffffff) < (unsigned __int64)(unsigned int)param_1[3]);
  }
  return;
}

