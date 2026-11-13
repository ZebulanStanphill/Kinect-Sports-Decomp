extern unsigned int *auStack_60;
extern int fn_82281308();
extern int fn_822C5B18();
extern int fn_824816F0();
extern int fn_824C1BF8();
extern int fn_8265C9E0();
extern int fn_82A1EFC0();
extern int fn_82BA02A8();
extern int memcpy();
extern unsigned int lbl_821A8C90;
extern unsigned int ltcg_pool_0_0f;


void fn_8247E810(unsigned int *param_1,int *param_2,unsigned int param_3,unsigned __int64 param_4,
                  unsigned int param_5)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  int *piVar4;
  unsigned char auStack_60 [32];
  
  param_1[5] = 0;
  *param_1 = &lbl_821A8C90;
  memcpy(param_1 + 6,param_2,0x30);
  param_1[0x12] = param_3;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  fn_822C5B18(param_1 + 0x22,param_4);
  param_1[0x28] = param_5;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  uVar3 = ltcg_pool_0_0f;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x36] = &lbl_821A8C90;
  param_1[0x41] = uVar3;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 1;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  fn_824C1BF8(param_1 + 0x45);
  fn_824C1BF8(param_1 + 0x14f);
  param_1[0x259] = 0;
  param_1[0x2b] = 0;
  param_1[1] = param_1;
  param_1[0x2c] = 0;
  piVar4 = (int *)(param_1[0x12] + 4);
  param_1[2] = fn_824816F0;
  param_1[3] = fn_82BA02A8;
  param_1[4] = fn_82BA02A8;
  if (piVar4 != (int *)0x0) {
    if (*piVar4 != 0) goto code_r0x8247e94c;
  }
  *piVar4 = *param_2;
code_r0x8247e94c:
  lVar1 = fn_8265C9E0(0x68);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_1[0x28];
    uVar2 = fn_822C5B18(auStack_60,param_1 + 0x22);
    uVar3 = fn_82281308(lVar1,0,param_1,1,0,0,uVar2,uVar3);
  }
  param_1[5] = uVar3;
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(param_1 + 0x19,0,0x10);
}

