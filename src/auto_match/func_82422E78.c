extern unsigned char lbl_82191C98;


void fn_82422E78(unsigned __int64 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = *(int *)(&lbl_82191C98 + (param_2 * 6 + iVar2) * 4);
    if (((iVar1 >= 0) && (*(int *)(iVar1 * 4 + param_3) == 0)) &&
       (*(int *)((iVar1 + 10) * 4 + param_4) != 0)) {
      *(unsigned int *)(iVar1 * 4 + param_3) = 1;
      fn_82422E78(param_1,iVar1,param_3,param_4);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  return;
}

