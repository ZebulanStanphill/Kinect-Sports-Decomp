extern int fn_82F63BA0();
extern int _fclose_nolock();
extern int fn_82F67A4C();
extern int fn_82F68240();
extern int _lock_file();
extern unsigned int iStack00000014;
extern unsigned int uStack_20;


unsigned __int64 fclose(int param_1)

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
      _lock_file(param_1);
      uStack_20 = _fclose_nolock(param_1);
      fn_82F67A4C();
    }
    else {
      *(unsigned int *)(param_1 + 0xc) = 0;
    }
    uVar1 = (unsigned __int64)uStack_20;
  }
  return uVar1;
}

