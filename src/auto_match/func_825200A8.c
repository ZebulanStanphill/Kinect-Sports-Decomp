typedef unsigned char bool;
#define true 1
#define false 0


bool fn_825200A8(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (*param_1 == 0) {
    if (iVar1 == 0) {
      return true;
    }
  }
  else if (iVar1 != 0) {
    return iVar1 == *param_1;
  }
  return false;
}

