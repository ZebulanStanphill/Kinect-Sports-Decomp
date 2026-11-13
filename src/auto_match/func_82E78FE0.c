extern unsigned int *auStack_40;
extern int fn_82E78690();
extern int fn_82EE5E28();


__int64 fn_82E78FE0(int param_1,unsigned int *param_2)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int auStack_40 [16];
  
  if (param_2 == (unsigned int *)0x0) {
    lVar1 = -0x7ff8ffa9;
  }
  else {
    *param_2 = 0;
    if ((unsigned __int64)*(unsigned int *)(param_1 + 0x1e0) == 0) {
      lVar1 = 0;
    }
    else {
      if ((unsigned __int64)*(unsigned int *)(param_1 + 0x230) <= (unsigned __int64)*(unsigned int *)(param_1 + 0x234)) {
        uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x234) - (unsigned __int64)*(unsigned int *)(param_1 + 0x230);
        lVar1 = fn_82E78690(param_1 + 0x178,(unsigned __int64)*(unsigned int *)(param_1 + 0x1e0) - 1,auStack_40);
        auStack_40[0] = -(unsigned int)(lVar1 != 0) & auStack_40[0];
        if (auStack_40[0] != 0) {
          uVar2 = (unsigned __int64)*(unsigned int *)(auStack_40[0] + 0x17) +
                  (unsigned __int64)*(unsigned int *)(auStack_40[0] + 0x13);
          if ((uVar2 & 0xffffffff) <= (uVar3 & 0xffffffff)) {
            return 0;
          }
          uVar2 = uVar2 - uVar3;
          uVar3 = uVar2;
          if ((unsigned __int64)*(unsigned int *)(param_1 + 0x230) < (uVar2 & 0xffffffff)) {
            uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x230);
          }
          lVar1 = fn_82EE5E28(param_1 + 0x218,uVar3);
          if (lVar1 < 0) {
            return lVar1;
          }
          if ((uVar3 & 0xffffffff) < (uVar2 & 0xffffffff)) {
            lVar1 = 0x400d3a98;
          }
          *param_2 = (int)uVar3;
          return lVar1;
        }
      }
      lVar1 = -0x7fff0001;
    }
  }
  return lVar1;
}

