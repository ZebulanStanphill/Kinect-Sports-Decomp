extern int fn_82F724D8();
extern int fn_82F72A00();
extern int fn_82F72A98();


int * fn_82F72DD0(int *param_1,int param_2)

{
  int uVar1;
  int iVar2;
  
  if ((int)(param_1[1] & 0xff000000U) <= 0x1000000) {
    if ((((unsigned int)*param_1 == 0) || (iVar2 = (int)param_2, iVar2 == 2)) || (iVar2 == 3)) {
      fn_82F72A98(param_1);
    }
    else if (iVar2 != 0) {
      uVar1 = fn_82F724D8(param_2);
      fn_82F72A00(param_1,uVar1);
    }
  }
  return param_1;
}

