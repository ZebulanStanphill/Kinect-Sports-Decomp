typedef unsigned char bool;
#define true 1
extern int fn_82AA9A38();
extern int fn_82AA9B80();
extern int fn_82AAA7D8();
extern int fn_82AAC5E8();


unsigned __int64
fn_82AAA9E0(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,int param_5,
             unsigned __int64 param_6,unsigned __int64 param_7,unsigned int param_8)

{
  unsigned short uVar1;
  unsigned int uVar2;
  bool bVar3;
  unsigned __int64 uVar4;
  unsigned short uVar5;
  int iVar6;
  bool bVar7;
  unsigned short uVar8;
  int iVar9;
  
  uVar2 = *(unsigned int *)(param_1 + 0x24);
  uVar4 = (unsigned __int64)uVar2;
  iVar6 = *(int *)(param_1 + 0x20) >> (param_8 & 0x3f);
  iVar9 = param_3;
  if (param_8 != 1) {
    iVar9 = param_3 >> 2;
    if (param_8 == 2) {
      uVar4 = (unsigned __int64)((int)uVar2 >> 2);
    }
    else if (param_8 == 3) {
      uVar4 = (unsigned __int64)((int)uVar2 >> 2);
    }
    else {
      iVar9 = param_3;
      if (param_8 == 4) {
        uVar4 = (unsigned __int64)((int)uVar2 >> 4);
        iVar9 = param_3 >> 4;
      }
    }
  }
  uVar5 = *(unsigned short *)(param_1 + 0x16);
  uVar8 = *(unsigned short *)(param_1 + 0x34);
  if ((uVar5 & 0xf0) == 0x40) {
    iVar6 = *(int *)(param_1 + 0x20) >> 1;
    param_5 = param_5 >> 1;
    uVar8 = 4;
  }
  if (((int)param_4 < 0) || (iVar6 <= (int)param_4)) {
    return 0xffffffffffffffff;
  }
  bVar3 = *(int *)(param_1 + 0x18) == 0;
  bVar7 = *(int *)(param_1 + 0x1c) == 0;
  if (((uVar5 & 0x1000) != 0) &&
     ((1 << (*(unsigned short *)(param_1 + 0x34) - 1 & 0x3f) & (unsigned int)*(unsigned short *)(param_1 + 0x14)) != 0)) {
    bVar7 = true;
  }
  uVar1 = *(unsigned short *)(param_1 + 0x32);
  uVar5 = uVar5 >> 4 & 0xf;
  if (uVar8 < 3) {
    uVar5 = -(unsigned short)(uVar5 == 4) & uVar5;
  }
  if (uVar5 != 0) {
    if (uVar5 < 4) {
      fn_82AA9B80(uVar8,uVar4,param_5,param_6,iVar9,param_7,bVar3,bVar7);
      goto LAB_82aaab74;
    }
    if (uVar5 == 4) {
      fn_82AAA7D8();
      goto LAB_82aaab74;
    }
  }
  fn_82AA9A38(param_1,param_5,param_6,iVar9,param_7,bVar3,bVar7,uVar1);
LAB_82aaab74:
  fn_82AAC5E8(param_2,param_7,param_4,uVar1);
  return 0;
}

