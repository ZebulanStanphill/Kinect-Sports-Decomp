extern int fn_82A45350();
extern int fn_82A47958();
extern int fn_82A47A60();
extern int fn_82A47EB8();
extern int fn_82A48358();


void fn_82A488B8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  
  uVar4 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x40) & 0x7fffffff) << 1;
  trapWord(6,uVar4,0);
  if (((unsigned __int64)*(unsigned int *)(param_1 + 0x1e4) < (param_3 & 0xffffffff) / uVar4) &&
     (lVar2 = fn_82A47EB8(param_1,*(unsigned int *)(param_1 + 0xd4)), lVar2 < 0)) {
    (**(int (***)())(*(int *)(*(int *)(param_1 + 0x34) + 4) + 8))(*(int *)(param_1 + 0x34) + 4);
  }
  else {
    uVar4 = fn_82A45350(*(unsigned int *)(param_1 + 0x1d8),0);
    uVar6 = 1;
    if (1 < *(unsigned int *)(param_1 + 0x1c0)) {
      do {
        uVar3 = fn_82A45350(*(unsigned int *)(param_1 + 0x1d8),uVar6);
        if ((uVar3 & 0xffffffff) <= (uVar4 & 0xffffffff)) {
          uVar4 = uVar3;
        }
        uVar6 = uVar6 + 1;
      } while ((uVar6 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x1c0));
    }
    uVar6 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x40) & 0x7fffffff) << 1;
    trapWord(6,uVar6,0);
    uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1e4) - (param_2 & 0xffffffff) / uVar6;
    if ((uVar6 & 0xffffffff) <= (uVar4 & 0xffffffff)) {
      uVar4 = uVar6;
    }
    if ((uVar4 & 0xffffffff) != 0) {
      if (*(unsigned int *)(param_1 + 0x40) < 3) {
        uVar6 = fn_82A47A60(param_1,uVar4,*(unsigned int *)(param_1 + 0x1e8));
        if ((uVar6 & 0xffffffff) != (uVar4 & 0xffffffff)) {
          uVar1 = *(unsigned int *)(param_1 + 0x1e4);
          uVar3 = *(unsigned int *)(param_1 + 0x1e8) + uVar6;
          trapWord(6,(unsigned __int64)uVar1,0);
          fn_82A47A60(param_1,uVar4 - uVar6,
                        uVar3 - (__int64)(int)((uVar3 & 0xffffffff) / (unsigned __int64)uVar1) *
                                (__int64)(int)uVar1);
        }
      }
      else {
        uVar6 = 0;
        if (*(int *)(param_1 + 0x1c0) != 0) {
          do {
            uVar3 = fn_82A47958(param_1,uVar6,uVar4,*(unsigned int *)(param_1 + 0x1e8));
            if ((uVar3 & 0xffffffff) != (uVar4 & 0xffffffff)) {
              uVar1 = *(unsigned int *)(param_1 + 0x1e4);
              uVar5 = *(unsigned int *)(param_1 + 0x1e8) + uVar3;
              trapWord(6,(unsigned __int64)uVar1,0);
              fn_82A47958(param_1,uVar6,uVar4 - uVar3,
                            uVar5 - (__int64)(int)((uVar5 & 0xffffffff) / (unsigned __int64)uVar1) *
                                    (__int64)(int)uVar1);
            }
            uVar6 = uVar6 + 1;
          } while ((uVar6 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x1c0));
        }
      }
      uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1e8);
      uVar6 = uVar4;
      if ((unsigned __int64)*(unsigned int *)(param_1 + 0x1e4) < (uVar3 + uVar4 & 0xffffffff)) {
        lVar2 = *(unsigned int *)(param_1 + 0x1e4) - uVar3;
        fn_82A48358(param_1,lVar2);
        uVar3 = 0;
        uVar6 = uVar4 - lVar2;
      }
      fn_82A48358(param_1,uVar6,uVar3);
      uVar1 = *(unsigned int *)(param_1 + 0x1e4);
      uVar4 = *(unsigned int *)(param_1 + 0x1e8) + uVar4;
      trapWord(6,(unsigned __int64)uVar1,0);
      *(unsigned int *)(param_1 + 0x1e8) =
           (int)uVar4 - (int)((uVar4 & 0xffffffff) / (unsigned __int64)uVar1) * uVar1;
    }
  }
  return;
}

