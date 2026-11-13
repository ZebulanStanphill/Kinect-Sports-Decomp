extern unsigned int *auStack_10;
extern int fn_82D8A228();
extern int fn_82DF02D0();


void fn_82DF0348(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned char auStack_10 [16];
  
  if ((param_2 & 0xffffffff) != 0) {
    fn_82DF02D0(auStack_10,param_1 - 0x30,param_2,param_4,param_1);
    fn_82D8A228(param_2,-(unsigned __int64)(param_1 != 0x30) & param_1);
  }
  return;
}

