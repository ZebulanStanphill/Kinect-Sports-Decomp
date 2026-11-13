extern unsigned int *auStack_10;
extern int fn_82A31F28();


unsigned __int64 fn_82A1E438(unsigned __int64 param_1)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int auStack_10;

  iVar2 = NtSuspendThread(param_1,&auStack_10);
  if (iVar2 < 0) {
    fn_82A31F28();
    uVar1 = 0xffffffffffffffff;
  }
  else {
    uVar1 = (unsigned __int64)auStack_10;
  }
  return uVar1;
}
