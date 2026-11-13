typedef unsigned char bool;
extern int fn_82694D70();


bool fn_826A18A8(int *param_1,int *param_2,char param_3)

{
  int iVar1;
  
  if (param_3 == '\0') {
    if (*(int *)(*param_2 + 4) == 0) {
      fn_82694D70();
    }
    iVar1 = *(int *)(*param_2 + 4) - *(int *)(*param_1 + 4);
  }
  else {
    iVar1 = *param_2 - *param_1;
  }
  return iVar1 == 0;
}

