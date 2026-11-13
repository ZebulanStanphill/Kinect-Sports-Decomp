typedef unsigned char bool;
#define false 0
extern int fn_82930800();


bool fn_82930988(int param_1,int param_2)

{
  __int64 lVar1;
  bool bVar2;
  
  if ((param_2 == 0) || (*(int *)(param_2 + 4) != *(int *)(param_1 + 4))) {
    bVar2 = false;
  }
  else {
    lVar1 = fn_82930800(param_1 + 0x10,param_2 + 0x10);
    bVar2 = lVar1 != 0;
  }
  return bVar2;
}

