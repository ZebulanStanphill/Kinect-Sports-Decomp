extern int fn_82A1DDC0();
extern int fn_82FA5060();
extern unsigned int lbl_831BC770;


unsigned __int64 fn_8304EA78(int param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  int iVar2;
  unsigned __int64 uVar1;
  
  iVar2 = fn_82FA5060(lbl_831BC770,param_4 + 1);
  if (iVar2 == 0) {
    uVar1 = 0x34;
  }
  else {
    fn_82A1DDC0(iVar2,param_3,param_4);
    *(unsigned char *)(iVar2 + param_4) = 0;
    uVar1 = 1;
    *(int *)(param_2 * 0xc + *(int *)(param_1 + 8) + 8) = iVar2;
  }
  return uVar1;
}

