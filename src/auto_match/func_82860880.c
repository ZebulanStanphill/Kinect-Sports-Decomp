extern int fn_8280AD30();
extern int fn_8285A808();
extern int fn_8285A830();
extern int fn_8305C550();
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


unsigned __int64 fn_82860880(int param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  int iVar2;
  int *piVar3;
  int iVar4;
  unsigned __int64 uVar1;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  
  iVar2 = fn_8285A808();
  piVar3 = (int *)fn_8285A830(param_1,param_2);
  if (*(int *)(iVar2 + 0x94) == 0) {
    uStack_40 = *param_3;
    uStack_3c = param_3[1];
    uStack_38 = param_3[2];
  }
  else {
    fn_8280AD30(iVar2 + 0x10,param_3,&uStack_40);
  }
  iVar4 = fn_8305C550(param_1 + 0x6c,&uStack_40);
  if (iVar4 == 0) {
    if (*(int *)(iVar2 + 0x90) == 0) {
      uVar1 = 0;
    }
    else {
      *piVar3 = *(int *)(iVar2 + 0x90);
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 1;
    *piVar3 = *(int *)((*(int *)(iVar4 + 0x28) - (unsigned int)(*(int *)(iVar2 + 0x90) == 0)) * 4 +
                      *(int *)(param_1 + 0x40));
  }
  return uVar1;
}

