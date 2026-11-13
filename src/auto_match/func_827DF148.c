extern int fn_827D96A0();
extern int fn_827D9780();
extern int fn_827E0658();
extern int fn_827E2598();
extern int fn_827E25A8();
extern unsigned int uStack_30;


unsigned int fn_827DF148(int param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uStack_30;
  unsigned int aiStack_2c;
  
  uStack_30 = fn_827D96A0(param_2);
  fn_827E0658(&aiStack_2c,param_1,&uStack_30);
  if (aiStack_2c != *(int *)(param_1 + 4)) {
    uVar1 = *(unsigned int *)(aiStack_2c + 0xc);
    uVar2 = fn_827E2598(uVar1);
    iVar3 = fn_827D9780(uVar2,param_2);
    if (iVar3 == 0) {
      if (param_3 == -1) {
        return uVar1;
      }
      iVar3 = fn_827E25A8(uVar1);
      if (param_3 == iVar3) {
        return uVar1;
      }
    }
  }
  return 0;
}

