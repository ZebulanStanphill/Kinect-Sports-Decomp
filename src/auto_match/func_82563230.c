typedef unsigned char bool;
#define false 0
extern int fn_82552720();


unsigned __int64 fn_82563230(int param_1,int param_2,int *param_3,unsigned __int64 param_4,unsigned int param_5)

{
  int iVar1;
  bool bVar2;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    if (param_3 == (int *)0x0) {
      bVar2 = false;
    }
    else {
      bVar2 = *param_3 != 0;
    }
    if (((bVar2) && (-1 < param_2)) && (param_2 < 9)) {
      iVar1 = param_2 * 0x18 + param_1 + 0xa30;
      fn_82552720((unsigned __int64)*(unsigned int *)(param_1 + 0x4c) + 0x84c,iVar1,param_3,param_1,param_2,
                    param_4,0);
      *(unsigned int *)(iVar1 + 0x14) = param_5;
      return 1;
    }
  }
  return 0;
}

