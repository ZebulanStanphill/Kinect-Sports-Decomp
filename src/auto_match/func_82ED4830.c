extern int fn_82ED24C0();
extern int fn_82ED3E48();


__int64 fn_82ED4830(int param_1,__int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5)

{
  int iVar1;
  unsigned int uVar2;
  __int64 lVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar7;
  unsigned __int64 uVar6;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
LAB_82ed48d0:
    lVar3 = 0;
  }
  else {
    uVar2 = *(unsigned int *)(param_1 + 0x1c);
    if (*(int *)(param_1 + 0x34) < 1) {
      trapWord(6,(unsigned __int64)uVar2,0);
      uVar7 = *(int *)(param_1 + 0x2c) + 1;
      *(unsigned int *)(param_1 + 0x2c) = uVar7 - (uVar7 / uVar2) * uVar2;
    }
    else {
      uVar7 = 0;
      if ((unsigned __int64)uVar2 != 0) {
        iVar5 = 0;
        iVar4 = iVar1;
        do {
          if (0 < *(int *)(iVar4 + 0x14)) {
            *(unsigned int *)(param_1 + 0x2c) = uVar7;
            *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
            *(unsigned int *)(uVar7 * 0x402c + iVar1 + 0x14) = 0;
            break;
          }
          uVar7 = uVar7 + 1;
          iVar5 = iVar5 + 0x402c;
          iVar4 = iVar5 + iVar1;
        } while (uVar7 < *(unsigned int *)(param_1 + 0x1c));
      }
      if (uVar7 == *(unsigned int *)(param_1 + 0x1c)) goto LAB_82ed48d0;
    }
    fn_82ED24C0((unsigned __int64)*(unsigned int *)(param_1 + 0x2c) * 0x402c +
                      (unsigned __int64)*(unsigned int *)(param_1 + 0x18),param_2,param_3,param_4);
    if (param_5 == 0) {
      param_5 = (int)param_2;
    }
    *(int *)(*(int *)(param_1 + 0x2c) * 0x402c + *(int *)(param_1 + 0x18) + 0x10) = param_5;
    if (*(int *)(param_1 + 0x1c) != 0) {
      if (((param_3 & 0xffffffff) == 0) || ((param_4 & 0xffffffff) == 0)) {
        uVar6 = (__int64)*(int *)(param_1 + 0x10) * (__int64)*(int *)(param_1 + 0xc);
        param_3 = uVar6 + param_2;
        param_4 = ((uVar6 & 0xffffffff) >> 2) + param_3;
      }
      fn_82ED3E48((unsigned __int64)*(unsigned int *)(param_1 + 0x2c) * 0x402c +
                      (unsigned __int64)*(unsigned int *)(param_1 + 0x18),param_2,param_3,param_4);
    }
    lVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x2c) * 0x402c + (unsigned __int64)*(unsigned int *)(param_1 + 0x18);
  }
  return lVar3;
}

