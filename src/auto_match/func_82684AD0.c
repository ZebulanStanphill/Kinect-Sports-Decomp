extern unsigned int *auStack_70;
extern int fn_82684A58();
extern int fn_826E6BC8();
extern int fn_826E7A08();
extern int fn_826E7B08();
extern int inflate();
extern int inflateEnd();
extern unsigned int uStack_4c;


void fn_82684AD0(unsigned __int64 param_1,int param_2)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned char auStack_70 [32];
  unsigned char *puStack_50;
  unsigned int uStack_4c;
  
  lVar1 = fn_826E6BC8(&puStack_50,param_1);
  if (lVar1 == 0) {
    do {
      puStack_50 = auStack_70;
      uStack_4c = fn_826E7A08(param_2,auStack_70,0x20);
      uVar2 = inflate(&puStack_50,2);
      if ((int)uVar2 == 1) goto LAB_82684b84;
    } while ((int)uVar2 == 0);
    fn_82684A58(param_2,0xffffffff82005a6c,uVar2);
    if ((unsigned __int64)uStack_4c != 0) {
      fn_826E7B08(param_2,(((unsigned __int64)*(unsigned int *)(param_2 + 0x34) -
                                 (unsigned __int64)*(unsigned int *)(param_2 + 0x30)) +
                                (unsigned __int64)*(unsigned int *)(param_2 + 0x2c)) - (unsigned __int64)uStack_4c);
LAB_82684b84:
      if ((unsigned __int64)uStack_4c != 0) {
        fn_826E7B08(param_2,(((unsigned __int64)*(unsigned int *)(param_2 + 0x34) -
                                   (unsigned __int64)*(unsigned int *)(param_2 + 0x30)) +
                                  (unsigned __int64)*(unsigned int *)(param_2 + 0x2c)) - (unsigned __int64)uStack_4c);
      }
    }
    lVar1 = inflateEnd(&puStack_50);
    if (lVar1 == 0) {
      return;
    }
    uVar2 = 0xffffffff82005a38;
  }
  else {
    uVar2 = 0xffffffff82005aa0;
  }
  fn_82684A58(param_2,uVar2);
  return;
}

