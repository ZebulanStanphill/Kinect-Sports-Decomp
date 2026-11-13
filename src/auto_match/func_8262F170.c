extern unsigned int *auStack_38;
extern unsigned int *auStack_3c;
extern int fn_82522D98();
extern int fn_82628468();


unsigned __int64 fn_8262F170(int param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  unsigned char auStack_3c [4];
  unsigned char auStack_38 [56];
  
  iVar1 = (**(int (***)())(param_3 + 0x1c))(*(unsigned int *)(param_1 + 0x30),auStack_38,auStack_3c);
  if (iVar1 != 0) {
    fn_82628468(param_1 + 4,param_1 + 0x18);
                    /* WARNING: Subroutine does not return */
    fn_82522D98(0x28);
  }
  fn_82628468(param_1 + 4,param_1 + 0x18);
  return 0x65b;
}

