extern unsigned int *auStack_50;
extern int fn_827D9DF0();
extern int fn_827E0658();
extern int fn_827E1220();


int * fn_827DC748(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  unsigned int auStack_50 [2];
  unsigned int *puStack_48;
  int *piStack_44;
  
  if (param_2 == (int *)0x0) {
    param_2 = (int *)0x0;
  }
  else {
    iVar3 = param_1 + 0xbfc;
    RtlEnterCriticalSection(iVar3);
    auStack_50[0] = (**(int (***)())(*param_2 + 0x10))(param_2);
    fn_827E0658(&puStack_48,param_1 + 0xb5c,auStack_50);
    for (; puStack_48 != *(unsigned int **)(param_1 + 0xb60); puStack_48 = (unsigned int *)*puStack_48)
    {
      piVar1 = (int *)puStack_48[3];
      iVar2 = (**(int (***)())(*piVar1 + 0xc))(piVar1,param_2);
      if (iVar2 != 0) {
        fn_827D9DF0(piVar1);
        RtlLeaveCriticalSection(iVar3);
        (**(int (***)())*param_2)(param_2,1);
        return piVar1;
      }
    }
    fn_827D9DF0(param_2);
    puStack_48 = (unsigned int *)(**(int (***)())(*param_2 + 0x10))(param_2);
    piStack_44 = param_2;
    fn_827E1220(auStack_50,param_1 + 0xb5c,&puStack_48);
    RtlLeaveCriticalSection(iVar3);
  }
  return param_2;
}

