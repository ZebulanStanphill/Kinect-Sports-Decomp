extern int fn_828B25C8();
extern int fn_828B2BF8();
extern int fn_828B30E8();
extern int fn_828B39D8();
extern int fn_828B3DF8();
extern int fn_828B3F68();


void fn_828B4B00(int param_1,char param_2,unsigned __int64 *param_3)

{
  int iVar1;
  int iVar2;
  int aiStack_30;
  
  iVar2 = param_1 + 0x54;
  fn_828B3DF8(&aiStack_30,iVar2);
  if (param_2 == '\0') {
    if (aiStack_30 != *(int *)(param_1 + 0x58)) {
      fn_828B30E8(&aiStack_30,iVar2);
      fn_828B2BF8();
      fn_828B25C8();
    }
  }
  else if (aiStack_30 == *(int *)(param_1 + 0x58)) {
    iVar1 = fn_828B39D8(iVar2);
    if ((unsigned __int64 *)(iVar1 + 0x10) != (unsigned __int64 *)0x0) {
      *(unsigned __int64 *)(iVar1 + 0x10) = *param_3;
    }
    fn_828B3F68(&aiStack_30,iVar2,iVar1,0);
    fn_828B2BF8();
    fn_828B25C8();
  }
  return;
}

