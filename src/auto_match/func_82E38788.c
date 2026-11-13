extern int fn_82E34A88();
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005758;
extern unsigned int lbl_82015408;


int fn_82E38788(short *param_1,int param_2,int param_3)

{
  unsigned short uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  
  lVar4 = (((__int64)
            (int)((unsigned int)(unsigned short)param_1[7] * (unsigned int)(unsigned short)param_1[1] * *(int *)(param_1 + 0xe)) *
            (__int64)*(int *)(param_1 + 0x10) & 0xffffffffU) >> 3) + 1;
  if (*param_1 == 0x161) {
    if (param_2 == 0) {
      uVar1 = param_1[6];
      uVar2 = fn_82E34A88(param_1);
      uVar5 = ((uVar2 & 0xffffffff) >> 3) + (__int64)(int)(unsigned int)uVar1 * (__int64)param_3 +
              (unsigned __int64)(uVar1 >> 1);
    }
    else {
      uVar5 = (__int64)(int)((unsigned int)(unsigned short)param_1[6] * *(int *)(param_1 + 0x10)) *
              (__int64)param_3;
    }
  }
  else {
    uVar2 = (unsigned __int64)(unsigned short)param_1[6];
    uVar6 = (unsigned int)(unsigned short)param_1[6];
    if ((param_1[10] & 1U) == 0) {
      uVar5 = (__int64)
              (int)((((double)(__int64)(int)lVar4 * lbl_82015408 + (double)uVar2 * lbl_82002C40) -
                    lbl_82005758) / (double)uVar2) * (__int64)(int)uVar6;
    }
    else {
      trapWord(6,uVar2,0);
      uVar3 = (uVar2 + lVar4) * 2 - 1;
      uVar5 = (__int64)((int)uVar3 / (int)uVar6) * (__int64)(int)uVar6;
      trapWord(5,uVar2 & ~(((uVar3 & 0x7fffffff) << 1 | (uVar3 & 0xffffffff) >> 0x1f) - 1),0xffff);
    }
  }
  uVar1 = param_1[6];
  trapWord(6,(unsigned __int64)uVar1,0);
  trapWord(5,(unsigned __int64)uVar1 & ~(((uVar5 & 0x7fffffff) << 1 | (uVar5 & 0xffffffff) >> 0x1f) - 1),
           0xffff);
  return (int)uVar5 / (int)(unsigned int)uVar1;
}

