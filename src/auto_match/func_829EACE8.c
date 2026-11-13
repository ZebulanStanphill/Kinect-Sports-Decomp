extern int fn_829E8C48();
extern int fn_829E9A88();
extern int fn_829EA248();
extern int fn_829EA708();
extern int fn_829EE260();
extern int fn_82A28568();
extern unsigned int lbl_832179FC;


unsigned __int64 fn_829EACE8(unsigned int *param_1)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  
  iVar2 = 0;
  uVar3 = 0;
  if ((int)(param_1[0x31] - param_1[0x30]) / 0x24 != 0) {
    do {
      iVar1 = fn_829EE260(param_1 + 0x2e,uVar3);
      if (iVar2 <= *(int *)(iVar1 + 0x1c)) {
        iVar2 = fn_829EE260(param_1 + 0x2e,uVar3);
        iVar2 = *(int *)(iVar2 + 0x1c);
      }
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (unsigned __int64)(unsigned int)((int)(param_1[0x31] - param_1[0x30]) / 0x24));
  }
  uVar3 = (unsigned __int64)(unsigned int)param_1[6];
  uVar4 = 0x80000 / (((__int64)iVar2 * (__int64)(int)param_1[8] & 0x7ffffffU) << 5);
  uVar5 = (unsigned int)uVar4;
  if (((int)uVar5 <= (int)param_1[6]) && (uVar3 = uVar4, uVar5 < 0x21)) {
    uVar3 = 0x20;
  }
  uVar4 = fn_82A28568(*(unsigned int *)(lbl_832179FC + 0x8f4cc),0,0x34);
  if ((uVar4 & 0xffffffff) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_829E9A88(uVar4,uVar3,iVar2,param_1[8],2);
  }
  param_1[0x53] = iVar1;
  if (iVar1 == 0) {
    uVar4 = 0xffffffff8007000e;
  }
  else {
    uVar4 = (unsigned __int64)*(unsigned int *)(iVar1 + 4);
    if ((((-1 < (int)*(unsigned int *)(iVar1 + 4)) &&
         (uVar4 = fn_829E8C48(param_1 + 0x60,*param_1,1,param_1[8],4,2,2), -1 < (int)uVar4)) &&
        (uVar4 = fn_829E8C48(param_1 + 0x6d,uVar3,1,param_1[8],4,2,2), -1 < (int)uVar4)) &&
       ((uVar4 = fn_829EA248(param_1 + 0x54,iVar2), -1 < (int)uVar4 &&
        (uVar4 = fn_829EA708(param_1 + 0x58,iVar2), -1 < (int)uVar4)))) {
      uVar4 = fn_829EA248(param_1 + 0x5c,iVar2);
    }
  }
  return uVar4;
}

