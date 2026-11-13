extern unsigned int *auStack_40;
extern int fn_82E50330();
extern unsigned int uStack_38;


/* WARNING: Removing unreachable block (ram,0x82e7d6d4) */
/* WARNING: Removing unreachable block (ram,0x82e7d5f0) */
/* WARNING: Removing unreachable block (ram,0x82e7d668) */
/* WARNING: Removing unreachable block (ram,0x82e7d740) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

__int64 fn_82E7D568(unsigned __int64 param_1,unsigned int param_2,int *param_3)

{
  __int64 lVar1;
  int *apiStack_50 [4];
  unsigned char auStack_40 [8];
  unsigned __int64 uStack_38;
  
  apiStack_50[0] = (int *)0x0;
  uStack_38 = 0;
  lVar1 = (**(int (***)())(*param_3 + 0xc))(param_3,param_2,0,0,apiStack_50);
  if (-1 < lVar1) {
    (**(int (***)())(*apiStack_50[0] + 0x1c))(apiStack_50[0],0xffffffff8215f068,auStack_40);
    fn_82E50330(auStack_40);
    uStack_38 = 0;
    (**(int (***)())(*apiStack_50[0] + 0x1c))(apiStack_50[0],0xffffffff8215f09c,auStack_40);
    fn_82E50330(auStack_40);
    uStack_38 = 0;
    (**(int (***)())(*apiStack_50[0] + 0x1c))(apiStack_50[0],0xffffffff8215f0b0,auStack_40);
    fn_82E50330(auStack_40);
    uStack_38 = 0;
    (**(int (***)())(*apiStack_50[0] + 0x1c))(apiStack_50[0],0xffffffff8215f074,auStack_40);
  }
  if (apiStack_50[0] != (int *)0x0) {
    (**(int (***)())(*apiStack_50[0] + 8))();
    apiStack_50[0] = (int *)0x0;
  }
  fn_82E50330(auStack_40);
  return lVar1;
}

