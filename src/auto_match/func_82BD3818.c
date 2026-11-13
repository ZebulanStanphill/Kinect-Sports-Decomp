extern unsigned int *auStack_20;


void fn_82BD3818(unsigned __int64 param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned int auStack_20 [2];
  
  *param_2 = 0;
  iVar1 = XexGetModuleHandle(0xffffffff820886b4,auStack_20);
  if (-1 < iVar1) {
    XexGetProcedureAddress(auStack_20[0],param_1,param_2);
  }
  return;
}

