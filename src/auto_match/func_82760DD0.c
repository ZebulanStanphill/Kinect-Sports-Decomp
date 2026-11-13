extern unsigned int *auStack_40;
extern int fn_8275EB28();
extern int fn_8275FE18();
extern int fn_8275FFC0();
extern int fn_82F68CC0();
extern unsigned int lbl_8201488C;


unsigned int * fn_82760DD0(unsigned int *param_1)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned char auStack_40 [40];
  
  param_1[1] = 1;
  *param_1 = &lbl_8201488C;
  iVar2 = fn_8275EB28(param_1 + 2);
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  if (*(unsigned int *)(iVar2 + 0x18) < *(unsigned int *)(iVar2 + 0x1c)) {
    param_1[0x15] = 0;
    uVar1 = fn_8275FFC0(iVar2,param_1 + 0x18,param_1 + 0x19,param_1 + 0x1a);
    fn_8275FE18(auStack_40,uVar1);
    fn_82F68CC0(param_1 + 0xb,auStack_40,0x28);
    param_1[0x16] = (float)(__int64)(int)param_1[0xe] * (float)param_1[0x14];
    param_1[0x17] = (float)(__int64)(int)param_1[0xf] * (float)param_1[0x14];
  }
  else {
    param_1[0x15] = 4;
  }
  return param_1;
}

