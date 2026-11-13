extern int fn_82CFC050();


void fn_82CFED40(unsigned int *param_1,__int64 param_2,__int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  __int64 lVar2;
  int iVar3;
  int iVar4;
  __int64 lVar5;
  
  uVar1 = *param_1;
  iVar3 = (int)(unsigned int)param_4 / (int)uVar1;
  trapWord(6,(unsigned __int64)uVar1,0);
  lVar2 = param_4 - (__int64)(int)uVar1 * (__int64)iVar3;
  trapWord(5,(unsigned __int64)uVar1 &
             ~(((param_4 & 0x7fffffff) << 1 | (unsigned __int64)((unsigned int)param_4 >> 0x1f)) - 1),0xffff);
  if (0 < (int)param_3) {
    iVar4 = iVar3 << 2;
    do {
      if (iVar3 < (int)(param_1[3] - 1)) {
        uVar1 = *param_1;
      }
      else {
        uVar1 = param_1[1];
      }
      lVar5 = (unsigned __int64)uVar1 - lVar2;
      lVar2 = (unsigned __int64)*(unsigned int *)(iVar4 + param_1[2]) + lVar2;
      if ((int)param_3 <= (int)lVar5) {
        fn_82CFC050(param_2,lVar2,param_3);
        return;
      }
      fn_82CFC050(param_2,lVar2,lVar5);
      param_3 = param_3 - lVar5;
      param_2 = lVar5 + param_2;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
      lVar2 = 0;
    } while (0 < param_3);
  }
  return;
}

