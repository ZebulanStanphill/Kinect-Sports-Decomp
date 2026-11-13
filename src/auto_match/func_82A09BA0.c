extern int fn_82A08368();
extern unsigned int lbl_8207F558;


void fn_82A09BA0(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  int lVar3;
  int *piVar4;
  
  lVar3 = 0xe;
  piVar4 = (int *)&lbl_8207F558;
  do {
    iVar1 = *piVar4;
    iVar2 = fn_82A08368(param_1,param_2,iVar1);
    if (iVar2 == 0) {
      *(unsigned int *)((iVar1 + 0x103c) * 4 + param_1) = 1;
    }
    lVar3 = lVar3 + -1;
    piVar4 = piVar4 + 1;
  } while (lVar3 != 0);
  return;
}

