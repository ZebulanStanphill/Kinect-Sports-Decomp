extern int fn_82E2E6F0();
extern int fn_82E2F4C8();
extern int fn_82E50CB8();
extern int fn_82E50F10();


unsigned __int64 fn_82E2F9A8(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  int * apiStack_40;
  
  apiStack_40 = (int *)0x0;
  uVar2 = 0;
  fn_82E50CB8(param_1 + 0x54);
  if ((param_2 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x168)) {
    iVar1 = fn_82E2F4C8(param_1 + 0x100,param_2,&apiStack_40);
    if (iVar1 != 0) {
      if (apiStack_40 != (int *)0x0) {
        (**(int (***)())(*apiStack_40 + 8))();
      }
      if (((param_2 + 1 & 0xffffffff) <= (unsigned __int64)*(unsigned int *)(param_1 + 0x168)) &&
         (iVar1 = fn_82E2E6F0(param_1 + 0x100,param_2), -1 < iVar1)) {
        *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + -1;
        goto LAB_82e2fa78;
      }
    }
    uVar2 = 0xffffffff8000ffff;
  }
  else {
    uVar2 = 0xffffffffc00d36bf;
  }
LAB_82e2fa78:
  fn_82E50F10(param_1 + 0x54);
  return uVar2;
}

