extern int fn_826933E8();
extern int fn_826944C8();
extern int fn_8269F500();
extern int fn_826A7398();
extern int fn_82720D48();
extern float lbl_82005718;


void fn_82720DD8(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  int aiStack_60 [2];
  __int64 lStack_58;
  __int64 lStack_50;
  
  uVar5 = 0;
  if (*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) == '\x01') {
    uVar2 = fn_826933E8();
    iVar3 = fn_826A7398(param_2);
    if ((param_3 & 0xffffffff) < 4) {
      iVar3 = (int)param_3 * 0x24 + iVar3 + 0x944;
    }
    else {
      iVar3 = 0;
    }
    iVar1 = (int)(*(float *)(iVar3 + 0x14) * lbl_82005718);
    lStack_58 = (__int64)iVar1;
    iVar3 = (int)(*(float *)(iVar3 + 0x18) * lbl_82005718);
    lStack_50 = (__int64)iVar3;
    if ((((uVar2 / 1000 & 0xffffffff) <= (unsigned __int64)(*(int *)(param_1 + 0x10) + 300)) &&
        (*(int *)(param_1 + 8) == iVar1)) && (*(int *)(param_1 + 0xc) == iVar3)) {
      uVar5 = 1;
    }
    *(int *)(param_1 + 8) = iVar1;
    *(int *)(param_1 + 0xc) = iVar3;
    *(int *)(param_1 + 0x10) = (int)(uVar2 / 1000);
  }
  if (param_5 == 0) {
    fn_82720D48(param_1 + -0x34,param_2,param_3,100,0,param_4,0,uVar5);
  }
  else {
    iVar3 = *(int *)(param_5 + 0x80);
    if (iVar3 == 0) {
      iVar3 = fn_8269F500(param_5);
    }
    aiStack_60[0] = *(int *)(iVar3 + 0xc);
    *(int *)(aiStack_60[0] + 8) = *(int *)(aiStack_60[0] + 8) + 1;
    fn_82720D48(param_1 + -0x34,param_2,param_3,100,aiStack_60,param_4,0,uVar5);
    lVar4 = (unsigned __int64)*(unsigned int *)(aiStack_60[0] + 8) - 1;
    *(int *)(aiStack_60[0] + 8) = (int)lVar4;
    if (lVar4 == 0) {
      fn_826944C8(aiStack_60[0]);
    }
  }
  return;
}

