extern unsigned int *auStack_70;
extern int fn_82AB15D0();
extern int fn_82AB71F0();
extern int fn_82B9A4B0();
extern unsigned int lbl_8316E5E4;


unsigned __int64
fn_82B9E9F0(unsigned __int64 param_1,unsigned __int64 param_2,float *param_3,int (**param_4)(),unsigned __int64 param_5)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned char auStack_70 [32];
  
  if ((param_1 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d2ff0,0xffffffff820ddb08,0x1155);
  }
  iVar2 = fn_82AB71F0(param_1,0x5b,param_2);
  iVar3 = fn_82AB71F0(param_1,0x5c,param_2);
  uVar1 = *(unsigned int *)((iVar2 * 4 + iVar3) * 4 + -0x7ce919c4);
  if ((iVar2 == 2) || (iVar2 == 3)) {
    iVar2 = 2;
  }
  else {
    if ((iVar2 != 1) && (iVar2 != 0)) {
      iVar3 = fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dc958,0xffffffff820ddb08,0x1162);
    }
    iVar2 = 7;
  }
  *param_3 = (float)((iVar2 << 8 | 0x4b0000U | uVar1) << 8);
  if ((param_4 != (int (**)())0x0) && ((param_5 & 0xffffffff) != 0)) {
    fn_82B9A4B0((double)*param_3,iVar3,auStack_70);
    (*param_4)(param_5,0xffffffff820ddc6c,lbl_8316E5E4,0x59,param_2,
               auStack_70);
  }
  return 1;
}

