extern unsigned int *auStack_3c;
extern unsigned int *auStack_50;
extern int fn_82A1E658();
extern int fn_82A29DE8();
extern int fn_82A2A108();
extern int fn_82F65AC0();
extern unsigned int uStack_40;


unsigned __int64 fn_82E1F9D0(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned char auStack_50 [1];
  unsigned int uStack_40;
  unsigned char auStack_3c [36];
  
  if (((param_2 & 0xffffffff) != 0) &&
     (uVar1 = fn_82A29DE8(param_2,0xffffffff80000000,1,0,3,0x80,0), (int)uVar1 != -1)) {
    iVar2 = fn_82A2A108(uVar1,&uStack_40,0x20,auStack_50,0);
    if (iVar2 != 0) {
      iVar2 = fn_82F65AC0(auStack_3c,param_1[6]);
      if (iVar2 == 0) {
        *param_1 = uStack_40;
      }
      fn_82A1E658(uVar1);
      return 0;
    }
    fn_82A1E658(uVar1);
  }
  return 0xffffffff80004005;
}

