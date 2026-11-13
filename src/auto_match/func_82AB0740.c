extern int fn_82A29A38();
extern int fn_82AB03B0();
extern int fn_82AB0450();
extern int fn_82AB0600();
extern int fn_82F6DCE0();


unsigned __int64
fn_82AB0740(unsigned int *param_1,unsigned int param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             int (**param_6)())

{
  unsigned char *pbVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  char *pcVar7;
  unsigned __int64 uVar6;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  char acStack_130 [304];
  
  pbVar1 = (unsigned char *)*param_1;
  if ((*pbVar1 & 0xf) != 2) {
    fn_82A29A38();
  }
  if (param_2 < 0xffff0200) {
    fn_82A29A38();
  }
  uVar10 = *(unsigned int *)(pbVar1 + 4);
  uVar2 = *(unsigned int *)(pbVar1 + 8);
  uVar3 = uVar2 & 0x7ff;
  uVar9 = (uVar2 >> 0x14 & 0x700 | uVar2 & 0x1800) >> 8;
  if (uVar9 == 10) {
    if (0xf < uVar3) {
      uVar5 = 0x13f1;
      pcVar7 = "old back end only supports samplers s0..s15";
LAB_82ab07c8:
      (*param_6)(param_5,1,uVar5,pcVar7);
      return 2;
    }
    fn_82AB03B0(uVar3,uVar10 & 0x78000000,param_4);
    uVar10 = uVar3 + 1;
    if (uVar3 + 1 < *(unsigned int *)(param_3 + 8)) {
      uVar10 = *(unsigned int *)(param_3 + 8);
    }
    *(unsigned int *)(param_3 + 8) = uVar10;
    *(unsigned int *)(param_3 + 0xc) = 1 << (uVar2 & 0x3f) | *(unsigned int *)(param_3 + 0xc);
  }
  else {
    if (uVar9 == 1) {
      if (0xffff02ff < param_2) {
        if (0xf < uVar3) {
          fn_82A29A38();
        }
        uVar9 = uVar10 & 0xf;
        uVar8 = uVar2 >> 0x16 & 1;
        uVar10 = uVar10 >> 0x10 & 0xf;
        if (uVar9 == 10) {
          uVar8 = 1;
        }
        if ((uVar9 == 5) && (7 < uVar10)) {
          fn_82F6DCE0(acStack_130,200,0xffffffff820d5d68,uVar10);
          pcVar7 = acStack_130;
          uVar5 = 0x13f2;
          goto LAB_82ab07c8;
        }
        fn_82AB0450(uVar3,uVar9,uVar10,uVar8,0xffffffff83160568,uVar2 & 0xf0000,param_3,param_4);
        goto LAB_82ab0968;
      }
      if ((uVar2 & 0x7ff) == 0) {
        uVar5 = 0xffffffff83160538;
      }
      else {
        uVar5 = 0xffffffff83160548;
        if (1 < uVar3) {
          fn_82A29A38();
        }
      }
      uVar6 = 1;
      uVar4 = 10;
      uVar10 = uVar3;
    }
    else {
      if (uVar9 != 3) {
        if ((uVar9 != 0x11) || (param_2 < 0xffff0300)) {
          fn_82A29A38();
        }
        goto LAB_82ab0968;
      }
      if (0xffff02ff < param_2) {
        fn_82A29A38();
      }
      if (7 < uVar3) {
        fn_82A29A38();
      }
      uVar6 = 0;
      uVar5 = 0xffffffff83160558;
      uVar4 = 5;
      uVar10 = uVar3 + 2;
    }
    fn_82AB0600(uVar10,uVar4,uVar3,uVar6,uVar5,uVar2 & 0xf0000,param_3,param_4);
  }
LAB_82ab0968:
  *param_1 = pbVar1 + 0xc;
  return 0;
}

