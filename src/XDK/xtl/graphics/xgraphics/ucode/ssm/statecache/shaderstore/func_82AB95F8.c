extern int fn_82AB15D0();
extern int fn_82AB9358();
extern int fn_82B6E440();
extern int fn_82B6E520();
extern int fn_82B6E928();


unsigned __int64 fn_82AB95F8(int param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  int iVar1;
  __int64 lVar2;
  unsigned int uVar3;
  
  if (param_1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d74d0,0xffffffff820d74e0,0x23f);
  }
  iVar1 = fn_82B6E440(*(unsigned int *)(param_1 + 0x14),param_2);
  if (iVar1 == 0) {
    return 0x13;
  }
  if (*(int *)(iVar1 + 0x10) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d7544,0xffffffff820d74e0,0x24d);
  }
  lVar2 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x10) - 1;
  *(int *)(iVar1 + 0x10) = (int)lVar2;
  if (lVar2 == 0) {
    iVar1 = fn_82B6E520(*(unsigned int *)(param_1 + 0x14),param_2);
    if (iVar1 == 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d74c8,0xffffffff820d74e0,600);
    }
    lVar2 = fn_82B6E928(*(unsigned int *)(param_1 + 0x18),*(unsigned int *)(iVar1 + 4),
                              *(unsigned int *)(iVar1 + 8));
    if (lVar2 == 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d74c8,0xffffffff820d74e0,0x260);
    }
    fn_82AB9358(param_1,lVar2);
    if (param_3 == (unsigned int *)0x0) {
      return 0;
    }
    uVar3 = 1;
  }
  else {
    if (param_3 == (unsigned int *)0x0) {
      return 0;
    }
    uVar3 = 0;
  }
  *param_3 = uVar3;
  return 0;
}

