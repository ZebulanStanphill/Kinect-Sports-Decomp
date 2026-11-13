extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_822CEE40();
extern int fn_822CEF30();
extern int fn_822CEFA0();
extern int fn_82365BD8();
extern int fn_82372230();
extern float lbl_8218E8E8;
extern unsigned int lbl_821916F4;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831DCD58;


void fn_8238BEB8(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,int param_4,int param_5,
                  unsigned __int64 param_6,int param_7,unsigned __int64 param_8,unsigned __int64 param_9,unsigned int param_10)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int iVar5;
  unsigned __int64 uVar4;
  unsigned int uVar6;
  double dVar7;
  double dVar8;
  unsigned char auStack_60 [1];
  
  uVar3 = fn_822CEE40(param_5);
  dVar8 = (double)ltcg_pool_0_0f;
  if (uVar3 != 0) {
    iVar5 = (int)uVar3;
    if (*(int *)(iVar5 + 0x24) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(unsigned int *)(iVar5 + 0x268);
    }
    if (((uVar6 | -(unsigned int)(*(int *)(param_5 + 0x24) != 0) & param_10) & 1) == 0) {
      iVar5 = fn_822CEFA0(uVar3);
      if ((iVar5 == 0) && (param_7 != 8)) {
        dVar7 = dVar8;
        if ((param_7 != 3) && (param_7 != 5)) {
          dVar7 = (double)lbl_821CA460;
        }
        iVar5 = fn_822CEE40(uVar3);
        if ((iVar5 != 0) && (*(int *)(iVar5 + 0x2ac) != 0)) {
          dVar7 = (double)((float)((double)*(float *)(iVar5 + 0x2a8) + dVar7) * lbl_8218E8E8);
        }
      }
      else {
        dVar7 = (double)lbl_821CA460;
      }
      *(float *)((int)uVar3 + 0x2a8) = (float)dVar7;
      *(unsigned int *)((int)uVar3 + 0x2ac) = 1;
    }
    else {
      *(unsigned int *)(iVar5 + 0x2ac) = 0;
    }
  }
  if (param_7 < 0x18) {
    iVar5 = *(int *)(&lbl_831DCD58 + param_7 * 4);
  }
  else {
    iVar5 = 6;
  }
  if (((((uVar3 & 0xffffffff) == (param_6 & 0xffffffff)) && (param_10 == 0)) &&
      (*(int *)(param_5 + 0x24) != 0)) && (iVar5 == 1)) {
    *(unsigned int *)(param_5 + 0x2d0) = 1;
    iVar5 = fn_822CEF30((double)lbl_821916F4,param_5);
    if (iVar5 == 0) {
      *(float *)(param_5 + 0x27c) = (float)dVar8;
    }
    else {
      *(unsigned int *)(param_5 + 0x27c) = lbl_82192734;
    }
  }
  else {
    iVar2 = (int)param_6;
    if (((*(int *)(param_5 + 0x2c) != *(int *)(iVar2 + 0x2c)) && (*(int *)(iVar2 + 0x24) != 0)) &&
       (iVar5 == 2)) {
      *(unsigned int *)(iVar2 + 0x2d0) = 1;
      iVar5 = fn_822CEF30((double)lbl_821916F4,param_6);
      if (iVar5 == 0) {
        *(float *)(iVar2 + 0x27c) = (float)dVar8;
      }
      else {
        *(unsigned int *)(iVar2 + 0x27c) = lbl_82192734;
      }
    }
  }
  uVar1 = *(unsigned int *)(param_3 + 8);
  uVar4 = fn_82365BD8(auStack_60,param_4);
  fn_82372230(param_1,param_2,uVar1,uVar4,param_5,param_6,param_7);
  if (*(int *)(param_4 + 4) != 0) {
    fn_822315A0();
  }
  return;
}

