extern int fn_82FA5190();
extern int fn_82FFFA70();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642E0;


__int64 fn_82FFF7E0(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  __int64 lVar7;
  
  uVar4 = (unsigned __int64)lbl_832642E0;
  RtlEnterCriticalSection(uVar4 + 4);
  uVar1 = param_1[1];
  iVar6 = (int)((unsigned __int64)uVar1 - 1);
  param_1[1] = iVar6;
  if (iVar6 == 0) {
    uVar5 = (unsigned __int64)lbl_832642E0;
    uVar2 = param_1[3];
    lVar7 = uVar5 + 4;
    RtlEnterCriticalSection(lVar7);
    fn_82FFFA70(uVar5 + 0x20,uVar2);
    RtlLeaveCriticalSection(lVar7);
    piVar3 = (int *)param_1[4];
    if (piVar3 != (int *)0x0) {
      (**(int (***)())(*piVar3 + 0x68))(piVar3,param_1[3]);
    }
    piVar3 = (int *)param_1[5];
    if (piVar3 != (int *)0x0) {
      (**(int (***)())(*piVar3 + 0x68))(piVar3,param_1[3]);
    }
    uVar2 = lbl_831BC768;
    (**(int (***)())*param_1)(param_1,0);
    fn_82FA5190(uVar2,param_1);
  }
  RtlLeaveCriticalSection(uVar4 + 4);
  return (unsigned __int64)uVar1 - 1;
}

