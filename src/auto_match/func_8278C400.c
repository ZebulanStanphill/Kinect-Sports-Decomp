#define true 1
extern int fn_8278B4F8();


int fn_8278C400(int *param_1,unsigned int *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_3 * 0xc + *param_1;
  if ((*(int *)(iVar2 + 8) != -2) && (iVar3 = param_3, *(int *)(iVar2 + 0xc) == param_3)) {
    while( true ) {
      if ((*(int *)(iVar2 + 0xc) == param_3) &&
         (cVar1 = fn_8278B4F8(*(unsigned int *)(iVar2 + 0x10),*param_2), cVar1 != '\0')) {
        return iVar3;
      }
      iVar3 = *(int *)(iVar2 + 8);
      if (iVar3 == -1) break;
      iVar2 = iVar3 * 0xc + *param_1;
    }
  }
  return -1;
}

