typedef unsigned char bool;
#define false 0


bool fn_828B20B8(int param_1,int param_2,int param_3)

{
  int iVar1; int *obj=*(int **)(param_1+4); int a=42,b=0;
  
  if (((obj != (int *)0x0) &&
      (iVar1 = (*(int (**)())(*obj + 0x4c))(obj,param_2,param_3, &a, &b), iVar1 != -0x7ffffff6)) &&
     (iVar1 != -0x7ff8fb71)) {
    return iVar1 == 0;
  }
  return false;
}

