typedef unsigned char bool;
#define false 0
extern int fn_82930800();


bool fn_82933960(__int64 param_1,unsigned __int64 param_2)

{
  int iVar1;
  bool bVar2;
  
  if (((((param_2 & 0xffffffff) == 0) || (*(int *)((int)param_2 + 4) != *(int *)((int)param_1 + 4)))
      || (iVar1 = fn_82930800(param_1 + 0x10,param_2 + 0x10), iVar1 == 0)) ||
     (*(int *)((int)param_2 + 0x30) != *(int *)((int)param_1 + 0x30))) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)((int)param_1 + 0x34) == *(int *)((int)param_2 + 0x34);
  }
  return bVar2;
}

