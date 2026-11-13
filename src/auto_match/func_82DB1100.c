extern unsigned int *auStack_20;
extern int fn_82CE5410();
extern int fn_82CEA160();
extern int fn_82CEA2F0();


void fn_82DB1100(__int64 param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned char auStack_20 [8];
  
  iVar1 = fn_82CEA2F0(param_1 + 0x50,param_2,auStack_20);
  if (iVar1 != 0) {
    iVar1 = fn_82CE5410();
    fn_82CEA160(param_1 + 0x50,*(unsigned int *)(iVar1 + 0x10),param_2,0xffffffffffffffff);
  }
  return;
}

