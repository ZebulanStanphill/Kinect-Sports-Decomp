__int64 fn_82A45138(unsigned __int64 param_1,int param_2)

{
  unsigned char *pbVar1;
  __int64 lVar2;
  __int64 lVar3;
  int *piVar4;
  
  lVar3 = param_1 * 0x60;
  lVar2 = 0;
  if ((param_1 & 0xffffffff) != 0) {
    piVar4 = (int *)(param_2 + -8);
    do {
      pbVar1 = (unsigned char *)(piVar4 + 4);
      piVar4 = piVar4 + 3;
      lVar2 = ((__int64)(*piVar4 + 0x80) * (__int64)(int)(unsigned int)*pbVar1 & 0x7fffffffU) * 2 + lVar2;
      param_1 = param_1 - 1;
    } while (param_1 != 0);
  }
  return lVar2 + (lVar3 + 0x8fU & 0xffffff80);
}

