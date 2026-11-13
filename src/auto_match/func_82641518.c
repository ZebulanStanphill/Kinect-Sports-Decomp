#define true 1
extern int fn_82645110();


unsigned int * fn_82641518(int param_1,unsigned int *param_2,__int64 param_3,unsigned int *param_4,unsigned __int64 param_5,
                    unsigned __int64 param_6)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int uVar4;
  unsigned __int64 uVar3;
  unsigned __int64 uVar5;
  
  while( true ) {
    trapWord(6,param_6,0);
    uVar4 = (*(int *)(param_1 + 0x34) - (int)param_2 >> 2) - 1;
    iVar1 = (int)uVar4 / (int)param_6;
    trapWord(5,param_6 & ~((((unsigned __int64)uVar4 & 0x7fffffff) << 1 | (unsigned __int64)(uVar4 >> 0x1f)) - 1),
             0xffff);
    if (0 < iVar1) {
      uVar3 = (__int64)iVar1 * (__int64)(int)param_6;
      if ((param_5 & 0xffffffff) <= (uVar3 & 0xffffffff)) {
        uVar3 = param_5;
      }
      param_5 = param_5 - uVar3;
      param_2 = param_2 + 1;
      *param_2 = (unsigned int)((uVar3 - 1 & 0xffffffff) << 0x10) | (unsigned int)param_3;
      uVar5 = uVar3;
      uVar2 = uVar3 & 0xffffffff;
      while (uVar2 != 0) {
        param_4 = param_4 + 1;
        param_2 = param_2 + 1;
        *param_2 = *param_4;
        uVar5 = uVar5 - 1;
        uVar2 = uVar5;
      }
      param_3 = uVar3 + param_3;
    }
    if ((param_5 & 0xffffffff) == 0) break;
    *(unsigned int **)(param_1 + 0x30) = param_2;
    fn_82645110(param_1);
    param_2 = *(unsigned int **)(param_1 + 0x30);
  }
  return param_2;
}

