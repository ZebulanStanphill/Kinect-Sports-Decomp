extern int fn_82BFCDD8();
extern int fn_82BFD208();
extern int fn_82F68CC0();


unsigned __int64 fn_82BFE230(unsigned int *param_1,int *param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  
  if (param_2 == (int *)0x0) {
LAB_82bfe24c:
    uVar1 = 0xffffffff80070057;
  }
  else {
    uVar7 = 0;
    *param_2 = 0;
    if (param_1 == (unsigned int *)0x0) {
      uVar9 = 0xffffffff82bfe108;
      uVar8 = 0xffffffff82bfe0f8;
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      uVar3 = 0;
LAB_82bfe378:
      iVar2 = fn_82BFCDD8(uVar3,uVar4,uVar5,uVar6,uVar7,0x10,uVar8,uVar9);
LAB_82bfe384:
      if (iVar2 != 0) {
        *param_2 = iVar2;
        return 0;
      }
    }
    else {
      if (param_1[7] != 0x34) goto LAB_82bfe24c;
      uVar9 = 0xffffffff82bfe108;
      uVar8 = 0xffffffff82bfe0f8;
      if ((unsigned __int64)param_1[10] != 0) {
        uVar9 = (unsigned __int64)param_1[0xb];
        if (uVar9 == 0) goto LAB_82bfe24c;
        uVar7 = param_1[0xc];
        uVar8 = (unsigned __int64)param_1[10];
      }
      uVar5 = *param_1;
      if (((((uVar5 & 0x1f0) == 0) && (param_1[5] == 0)) && (param_1[3] == 0)) &&
         (((param_1[6] == 0 && (param_1[4] == 0)) && ((param_1[1] == 0 && (param_1[2] == 0)))))) {
        uVar4 = param_1[9];
        uVar6 = uVar5 >> 2 & 1;
        uVar3 = param_1[8];
        uVar5 = uVar5 >> 3 & 1;
        goto LAB_82bfe378;
      }
      iVar2 = fn_82BFD208(param_1[8],param_1[9],uVar5 >> 3 & 1,uVar5 >> 2 & 1,uVar7,0x10);
      if (iVar2 != 0) {
        fn_82F68CC0(*(unsigned int *)(iVar2 + 0x4c),param_1,0x1c);
        goto LAB_82bfe384;
      }
    }
    uVar1 = 0xffffffff80070008;
  }
  return uVar1;
}

