extern int fn_82897620();
extern int fn_8289B608();
extern int fn_82F622E0();


void fn_8288BC38(int *param_1,int *param_2)

{
  int iVar2;
  unsigned __int64 uVar1;
  int iVar3;
  unsigned __int64 uVar4;
  
  uVar4 = 0;
  iVar2 = (**(int (***)())(*param_1 + 8))();
  if (*(int *)(*(int *)(iVar2 + 0x10) + 8) != 0) {
    iVar2 = 0;
    do {
      if ((unsigned __int64)(unsigned int)(param_2[1] - *param_2 >> 2) <= (uVar4 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82F622E0(0xffffffff821ae698);
      }
      iVar3 = *(int *)(iVar2 + *param_2);
      if (iVar3 != 0) {
        uVar1 = (**(int (***)())(*param_1 + 8))(param_1);
        uVar1 = fn_82897620(uVar1,uVar4);
        fn_8289B608(uVar1,iVar3);
      }
      uVar4 = uVar4 + 1;
      iVar2 = iVar2 + 4;
      iVar3 = (**(int (***)())(*param_1 + 8))(param_1);
    } while ((uVar4 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(*(int *)(iVar3 + 0x10) + 8));
  }
  return;
}

