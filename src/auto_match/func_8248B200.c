extern unsigned int *auStack_a0;
extern int fn_8262FE50();
extern int fn_826310E0();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82637B30();
extern int fn_82638D10();
extern int fn_82639DB0();
extern int fn_82639F28();
extern int fn_8263A508();
extern int fn_82F4D9D8();
extern unsigned int lbl_8327F8B8;
extern unsigned int lbl_8327F94C;
extern unsigned int uRam831c1d9c;


void fn_8248B200(unsigned __int64 param_1,int param_2)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned char auStack_a0 [160];
  
  lVar1 = fn_82F4D9D8(2);
  if (lVar1 != 0) {
    fn_82631920(param_2,lbl_8327F8B8);
    *(unsigned int *)(param_2 + 0x2ed8) = uRam831c1d9c;
    *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x80000;
    *(unsigned int *)(param_2 + 0x2f04) = 0xf;
    *(unsigned int *)(param_2 + 0x28dc) =
         *(unsigned int *)(param_2 + 0x28dc) & 0xfffffff0 | -(unsigned int)(*(int *)(param_2 + 0x3148) != 0) & 0xf;
    *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x2000000000;
    *(unsigned int *)(param_2 + 0x2948) = *(unsigned int *)(param_2 + 0x2948) & 0xfffffff8;
    *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x40;
    *(unsigned int *)(param_2 + 0x2f14) = 0;
    *(unsigned int *)(param_2 + 0x2934) = *(unsigned int *)(param_2 + 0x2934) & 0xfffffffd;
    *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x20800;
    *(unsigned int *)(param_2 + 0x29c0) = *(unsigned int *)(param_2 + 0x29c0) & 0xfffffffe;
    *(unsigned __int64 *)(param_2 + 0x20) = *(unsigned __int64 *)(param_2 + 0x20) | 0x800000000;
    uVar2 = fn_82637B30(param_2,0);
    fn_82638D10(uVar2,1);
    *(unsigned int *)(param_2 + 0x293c) = *(unsigned int *)(param_2 + 0x293c) & 0xfffffff7;
    *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x40200;
    if (*(int *)(param_2 + 0x3148) != 0) {
      fn_8262FE50(*(int *)(param_2 + 0x3148));
    }
    if (*(int *)(param_2 + 0x3158) != 0) {
      fn_8262FE50(*(int *)(param_2 + 0x3158));
    }
    uVar2 = fn_82639F28(param_2,auStack_a0);
    fn_8263A508(uVar2,0);
    uVar2 = fn_826310E0(param_2,0,0xffffffff8329ead0,4,0x8000000000000000);
    *(unsigned int *)(param_2 + 0x2f00) = 0;
    fn_82639DB0(uVar2,param_2 + 0x3234);
                    /* WARNING: Subroutine does not return */
    fn_82631578(param_2,lbl_8327F94C);
  }
  return;
}

