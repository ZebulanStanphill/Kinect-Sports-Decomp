extern unsigned int *auStack_20;
extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F83A50();
extern int fn_82F84074();


int fn_82F83F78(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                 unsigned int *param_5,int param_6)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int *puStack00000034;
  unsigned char auStack_20 [8];
  
  puStack00000034 = param_5;
  if (((param_5 != (unsigned int *)0x0) && (*param_5 = 0xffffffff, param_1 != 0)) &&
     ((param_6 == 0 || ((param_4 & 0xfffffe7f) == 0)))) {
    iVar2 = fn_82F83A50(auStack_20,param_5,param_1,param_2,param_3,param_4);
    fn_82F84074();
    if (iVar2 == 0) {
      return 0;
    }
    *puStack00000034 = 0xffffffff;
    return iVar2;
  }
  puVar1 = (unsigned int *)fn_82F68240();
  *puVar1 = 0x16;
  fn_82F63BA0();
  return 0x16;
}

