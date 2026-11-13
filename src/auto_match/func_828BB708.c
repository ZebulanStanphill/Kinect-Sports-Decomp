extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_825174B8();
extern int fn_828BAB98();
extern int fn_828BACE8();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();
extern int fn_828EA268();
extern unsigned int iStack_34;


unsigned __int64 fn_828BB708(unsigned __int64 param_1,int param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  int iVar2;
  int iVar3;
  unsigned int auStack_40;
  unsigned char auStack_38 [4];
  int iStack_34;
  
  uVar1 = fn_828EA268((unsigned __int64)*(unsigned int *)(param_2 + 0x100) - 1);
  iVar2 = fn_828E9DA8(param_3);
  iVar3 = fn_828E9D90(param_3);
  if (iVar2 - iVar3 < (int)uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_828E9FF8(param_3,uVar1);
  }
  auStack_40 = **(unsigned int **)(param_2 + 0xfc);
  fn_828BAB98(&auStack_40,uVar1);
  fn_828BACE8(auStack_38,param_3);
  fn_825174B8(param_1,(unsigned __int64)auStack_40 + 0x28,auStack_38);
  if (iStack_34 != 0) {
    fn_822315A0();
  }
  return param_1;
}

