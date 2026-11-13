extern int fn_827DF0B0();
extern int fn_827DF148();
extern int fn_827DF1D0();
extern int fn_827E2610();


void fn_827DF340(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  int (**param_5)(),int (**param_6)())

{
  int iVar2;
  unsigned __int64 uVar1;
  int *piVar3;
  int (**pcVar4)();
  
  RtlEnterCriticalSection(param_1 + 400);
  if ((param_2 & 0xffffffff) == 0) {
    iVar2 = fn_827DF148(param_1,param_3,param_4);
    if (iVar2 == 0) {
      iVar2 = fn_827DF0B0(param_1,param_3,param_4);
      goto LAB_827df3ac;
    }
  }
  else {
    iVar2 = fn_827DF1D0(param_1,param_2);
LAB_827df3ac:
    piVar3 = (int *)0x0;
    pcVar4 = param_5;
    if (iVar2 == 0) goto LAB_827df400;
  }
  (*param_5)(iVar2,param_6);
  uVar1 = fn_827E2610(iVar2);
  (*param_5)(uVar1,param_6);
  piVar3 = (int *)fn_827E2610(iVar2);
  pcVar4 = *(int (***)())(*piVar3 + 0x10);
  param_6 = param_5;
LAB_827df400:
  (*pcVar4)(piVar3,param_6);
  RtlLeaveCriticalSection(param_1 + 400);
  return;
}

