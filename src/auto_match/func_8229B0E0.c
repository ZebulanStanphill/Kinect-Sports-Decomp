extern unsigned int *auStack_820;
extern int fn_8229F688();
extern int fn_82358FD8();
extern int fn_8229F688();
extern int fn_822A02D8();
extern int fn_82358FD8();
extern unsigned int iStack_824;
extern unsigned int iStack_828;
extern unsigned int ltcg_pool_0_0f;


void fn_8229B0E0(double param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  __int64 lStack_830;
  int iStack_828;
  int iStack_824;
  unsigned char auStack_820 [2040];

  if (param_1 <= (double)ltcg_pool_0_0f) {
    fn_82358FD8(*(unsigned int *)(param_2 + 0x1c),auStack_820,0x400,0xffffffff821aae0c);
    fn_8229F688(*(unsigned int *)(param_2 + 0xc),auStack_820,0);
  }
  else {
    iVar1 = fn_822A02D8(param_2,&iStack_824,&iStack_828,&lStack_830);
    lStack_830 = (__int64)iStack_828;
    fn_82358FD8((double)(__int64)iStack_824,(double)lStack_830,*(unsigned int *)(iVar1 + 0xc));
    fn_8229F688(*(unsigned int *)(param_2 + 0xc),param_4);
  }
  return;
}
