extern int memmove();


unsigned __int64 fn_82E67238(unsigned __int64 param_1,unsigned int *param_2,int param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  
  if (((unsigned __int64)param_2[10] + (unsigned __int64)*param_2 & 0xffffffff) < (unsigned __int64)param_2[9]) {
    uVar2 = 0xffffffff80004005;
  }
  else {
    if (param_3 != 0) {
      uVar3 = param_2[0x12] + 7;
      memmove((unsigned __int64)*param_2,(unsigned __int64)param_2[3],
                   (((__int64)((int)uVar3 >> 3) + (unsigned __int64)((int)uVar3 < 0 && (uVar3 & 7) != 0))
                   - (unsigned __int64)param_2[3]) + (unsigned __int64)param_2[9]);
      uVar3 = param_2[4];
      if (uVar3 <= param_2[0x1e]) {
        memmove(param_2[1],uVar3,
                     ((__int64)((int)(param_2[0x1e] - uVar3) >> 2) + 1U & 0x3fffffff) << 2);
        memmove(param_2[2],param_2[5],
                     ((__int64)((int)(param_2[0x1f] - param_2[5]) >> 2) + 1U & 0x3fffffff) << 2);
      }
    }
    uVar3 = param_2[0xf];
    uVar2 = 0;
    uVar1 = param_2[0xb];
    trapWord(6,(unsigned __int64)uVar3,0);
    param_2[0x1d] = (param_2[0x1d] - (int)uVar1 / (int)uVar3) - uVar1;
    param_2[0x1e] = (param_2[0x1e] + uVar3 * -4) - 4;
    trapWord(5,(unsigned __int64)uVar3 &
               ~((((unsigned __int64)uVar1 & 0x7fffffff) << 1 | (unsigned __int64)(uVar1 >> 0x1f)) - 1),0xffff);
    param_2[0x1f] = (param_2[0x1f] + uVar3 * -4) - 4;
    param_2[9] = (param_2[9] - (int)uVar1 / (int)uVar3) - uVar1;
  }
  return uVar2;
}

