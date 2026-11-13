extern int fn_8267B6F8();
extern int fn_826AAB70();
extern int fn_8278E4C0();
extern int fn_8278E638();


void fn_826F6DD0(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned int uVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x11c);
  if (iVar1 != 0) {
    fn_8278E4C0(iVar1,1);
    fn_8278E638(*(unsigned int *)(*(int *)(param_1 + 4) + 0x11c),1);
  }
  fn_826AAB70((unsigned __int64)*(unsigned int *)(param_1 + 4) + 0x18);
  uVar2 = fn_8267B6F8(param_2);
  *(unsigned int *)(param_1 + 0xc) = uVar2;
  return;
}

