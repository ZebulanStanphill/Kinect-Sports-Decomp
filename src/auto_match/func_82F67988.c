extern int fn_82F63BA0();
extern int fn_82F678E0();
extern int fn_82F67A4C();
extern int fn_82F68240();
extern int fn_82F6AC80();
extern unsigned int iStack00000014;
extern unsigned int uStack_20;


unsigned __int64 fn_82F67988(int param_1)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  int iStack00000014;
  unsigned int uStack_20;
  
  uStack_20 = 0xffffffff;
  iStack00000014 = param_1;
  if (param_1 == 0) {
    puVar2 = (unsigned int *)fn_82F68240();
    *puVar2 = 0x16;
    fn_82F63BA0();
    uVar1 = 0xffffffffffffffff;
  }
  else {
    if ((*(unsigned int *)(param_1 + 0xc) & 0x40) == 0) {
      fn_82F6AC80(param_1);
      uStack_20 = fn_82F678E0(param_1);
      fn_82F67A4C();
    }
    else {
      *(unsigned int *)(param_1 + 0xc) = 0;
    }
    uVar1 = (unsigned __int64)uStack_20;
  }
  return uVar1;
}

