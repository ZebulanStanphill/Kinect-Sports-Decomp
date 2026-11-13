extern unsigned int fStack_b0;
extern int fn_8262FE50();
extern int fn_82631578();
extern int fn_82637B30();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_82638560();
extern int fn_82639380();
extern int fn_82639528();
extern int fn_82639EA8();
extern int fn_8263A1B8();
extern int fn_8263A508();
extern int fn_8263DE70();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uRam83297728;
extern unsigned int uRam8329772c;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_ac;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_cc;


void fn_8248D788(int param_1,int param_2)

{
  unsigned __int64 uVar1;
  double dVar2;
  unsigned int uStack_cc;
  struct { unsigned int first; unsigned int second; } stack_pair_c0;

  unsigned int uStack_b8;
  unsigned int uStack_b4;
  float fStack_b0;
  unsigned int uStack_ac;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  
  if (*(int *)(param_1 + 4) != 0) {
    uStack_90 = *(unsigned int *)(param_2 + 0x3228);
    uStack_8c = *(unsigned int *)(param_2 + 0x322c);
    *(unsigned int *)(param_2 + 0x480) = *(unsigned int *)(param_2 + 0x480) & 0xffffe3ff | 0x800;
    uStack_cc = (unsigned int)(__int64)*(float *)(param_2 + 0x3220);
    uStack_98 = uStack_cc;
    uStack_cc = (unsigned int)(__int64)*(float *)(param_2 + 0x3224);
    uStack_94 = uStack_cc;
    uStack_cc = (unsigned int)(__int64)*(float *)(param_2 + 0x3218);
    uStack_a0 = uStack_cc;
    uStack_cc = (unsigned int)(__int64)*(float *)(param_2 + 0x321c);
    *(unsigned __int64 *)(param_2 + 0x18) = *(unsigned __int64 *)(param_2 + 0x18) | 0x80000000;
    *(unsigned int *)(param_2 + 0x480) = *(unsigned int *)(param_2 + 0x480) & 0xffff1fff | 0x4000;
    *(unsigned __int64 *)(param_2 + 0x18) = *(unsigned __int64 *)(param_2 + 0x18) | 0x80000000;
    uStack_9c = uStack_cc;
    uVar1 = fn_82639528(param_2,0,1,*(unsigned int *)(param_2 + 0x2948),
                              *(unsigned int *)(param_2 + 0x293c),*(unsigned int *)(param_2 + 0x2efc),
                              *(unsigned int *)(param_2 + 0x2ef8));
    fn_82639380(uVar1,0);
    if (*(int *)(param_2 + 0x3158) != 0) {
      fn_8262FE50(*(int *)(param_2 + 0x3158));
    }
    fn_8263A508(param_2,0);
    if (*(int *)(param_2 + 0x3148) != 0) {
      fn_8262FE50(*(int *)(param_2 + 0x3148));
    }
    fn_8263A1B8(param_2,0,*(unsigned int *)(param_1 + 0x9c));
    stack_pair_c0.first = 0;
    dVar2 = (double)ltcg_pool_0_0f;
    stack_pair_c0.second = 0;
    fStack_b0 = ltcg_pool_0_0f;
    uStack_ac = lbl_821CA460;
    uStack_b8 = *(unsigned int *)(param_1 + 0x5c);
    uStack_b4 = *(unsigned int *)(param_1 + 0x60);
    fn_82639EA8(param_2,&stack_pair_c0.first);
    fn_8263DE70(dVar2,param_2,0,0,1,0);
    uVar1 = fn_82637B30(param_2,uRam83297728);
    *(unsigned int *)(param_2 + 0x293c) = (uRam8329772c & 1) << 3 | *(unsigned int *)(param_2 + 0x293c) & 0xfffffff7
    ;
    *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x40200;
    uVar1 = fn_82637C50(uVar1,6);
    uVar1 = fn_82637CE0(uVar1,7);
    *(unsigned int *)(param_2 + 0x2948) = *(unsigned int *)(param_2 + 0x2948) & 0xfffffff8;
    *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x40;
    *(unsigned int *)(param_2 + 0x2f04) = 7;
    *(unsigned int *)(param_2 + 0x28dc) =
         *(unsigned int *)(param_2 + 0x28dc) & 0xfffffff0 | -(unsigned int)(*(int *)(param_2 + 0x3148) != 0) & 7;
    *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x2000000000;
    *(unsigned int *)(param_2 + 0x2934) = *(unsigned int *)(param_2 + 0x2934) | 4;
    *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x800;
    *(unsigned int *)(param_2 + 0x2f14) = 0;
    *(unsigned int *)(param_2 + 0x2934) = *(unsigned int *)(param_2 + 0x2934) & 0xfffffffd;
    *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x20800;
    uVar1 = fn_82638560(uVar1,0);
                    /* WARNING: Subroutine does not return */
    fn_82631578(uVar1,*(unsigned int *)(param_1 + 0x94));
  }
  return;
}

