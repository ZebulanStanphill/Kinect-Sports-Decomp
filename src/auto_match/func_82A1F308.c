extern unsigned int *auStack_10;
extern int fn_82A2B760();


unsigned int fn_82A1F308(unsigned __int64 param_1)

{
  int iVar1;
  unsigned int auStack_10;
  
  iVar1 = XexGetModuleHandle(param_1,&auStack_10);
  if (iVar1 < 0) {
    fn_82A2B760();
    auStack_10 = 0;
  }
  return auStack_10;
}

