#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_10;
extern int fn_826BD078();


__int64 fn_826BD7D0(__int64 param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int auStack_10 [4];
  
  uVar3 = (unsigned int)param_2;
  uVar2 = (unsigned int)(param_2 >> 0x20);
  auStack_10[0] = uVar3;
  if (param_3 == -1) {
    if (0 < (int)param_1) {
      do {
        param_1 = param_1 + -1;
        iVar1 = fn_826BD078(auStack_10);
        if (iVar1 == 0) break;
      } while (0 < (int)param_1);
      param_2 = (unsigned __int64)auStack_10[0];
    }
  }
  else if (0 < param_3) {
    while (0 < (int)param_1) {
      param_1 = param_1 + -1;
      iVar1 = fn_826BD078(auStack_10);
      param_2 = (unsigned __int64)auStack_10[0];
      if ((iVar1 == 0) || (param_3 <= (int)(auStack_10[0] - uVar3))) break;
    }
  }
  return param_2 - CONCAT44(uVar2,uVar3);
}

