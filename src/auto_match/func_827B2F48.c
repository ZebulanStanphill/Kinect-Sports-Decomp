extern unsigned int *auStack_40;
extern int fn_827B1968();
extern int fn_827B26B0();
extern unsigned int uStack_34;
extern unsigned int uStack_36;
extern unsigned int uStack_38;


void fn_827B2F48(__int64 param_1,unsigned short param_2,unsigned short param_3,unsigned int param_4)

{
  int iVar1;
  unsigned short auStack_40 [4];
  unsigned short uStack_38;
  unsigned short uStack_36;
  unsigned int uStack_34;
  
  auStack_40[0] = param_2;
  iVar1 = fn_827B26B0(param_1 + 0x48,auStack_40);
  if (iVar1 != 0) {
    auStack_40[0] = param_3;
    iVar1 = fn_827B26B0(param_1 + 0x48,auStack_40);
    if (iVar1 != 0) {
      uStack_38 = param_2;
      uStack_36 = param_3;
      uStack_34 = param_4;
      fn_827B1968(param_1 + 0x5c,&uStack_38);
    }
  }
  return;
}

