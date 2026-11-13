extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A29A38();
extern int memcpy();


unsigned __int64 fn_82AACC70(unsigned int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  
  if (param_1 == (unsigned int *)0x0) {
    fn_82A29A38();
  }
  if (param_1[1] == 0) {
    fn_82A29A38();
  }
  uVar1 = param_1[2];
  if (param_2 < uVar1) {
LAB_82aacd44:
    uVar3 = 1;
  }
  else {
    if (uVar1 == 0) {
      uVar4 = 0x1000;
    }
    else {
      uVar4 = (__int64)(int)param_1[1] * (__int64)(int)uVar1 + 0xfffU & 0xfffff000;
    }
    do {
      uVar5 = uVar4 - 0x20;
      if (((__int64)(int)param_1[1] * (__int64)(int)(param_2 + 1) & 0xffffffffU) <=
          (uVar5 & 0xffffffff)) {
        lVar2 = fn_8265C940(uVar5,0x24870000);
        if (lVar2 != 0) {
          if (param_1[2] != 0) {
            memcpy(lVar2,*param_1,(__int64)(int)param_1[1] * (__int64)(int)param_1[2]);
            fn_8265C990(*param_1,0x24870000);
          }
          *param_1 = (int)lVar2;
          trapWord(6,(unsigned __int64)(unsigned int)param_1[1],0);
          param_1[2] = (int)((uVar5 & 0xffffffff) / (unsigned __int64)(unsigned int)param_1[1]);
          goto LAB_82aacd44;
        }
        break;
      }
      uVar5 = uVar4 & 0x7fffffff;
      uVar4 = uVar5 << 1;
    } while (uVar5 != 0);
    uVar3 = 0;
  }
  return uVar3;
}

