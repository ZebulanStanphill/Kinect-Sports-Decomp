extern unsigned int *auStack_318;
extern unsigned int *auStack_320;
extern unsigned int *auStack_328;
extern int fn_822315A0();
extern int fn_822794D0();
extern int fn_82279C58();
extern int fn_8266F768();
extern int fn_82671A40();
extern int fn_82673A28();
extern int fn_82A1EFC0();
extern unsigned int iStack_314;
extern unsigned int iStack_31c;
extern unsigned int iStack_324;
extern unsigned int lbl_821A86E8;
extern unsigned int ltcg_pool_0_0f;


void fn_8227AD00(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int in_r8;
  unsigned int in_r9;
  unsigned int in_r10;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned int in_stack_00000064;
  unsigned int in_stack_0000006c;
  unsigned char auStack_328 [4];
  int iStack_324;
  unsigned char auStack_320 [4];
  int iStack_31c;
  unsigned char auStack_318 [4];
  int iStack_314;
  
  fn_822794D0(param_1,param_2,0,1,0);
  param_1[0x28d] = 0;
  uVar1 = ltcg_pool_0_0f;
  param_1[0x28e] = 0;
  param_1[0x28c] = uVar1;
  *param_1 = &lbl_821A86E8;
  param_1[0x293] = uVar1;
  param_1[0x28f] = 0;
  param_1[0x291] = in_stack_0000006c;
  param_1[0x290] = 0;
  param_1[0x292] = 0;
  param_1[0x294] = in_stack_00000064;
  param_1[0x295] = 0;
  param_1[0x296] = 0;
  param_1[0x297] = 0;
  param_1[0x298] = 0;
  param_1[0x299] = in_r8;
  param_1[0x29a] = in_r10;
  param_1[0x29b] = in_r9;
  param_1[0x29c] = in_stack_00000054;
  param_1[0x29d] = in_stack_0000005c;
  param_1[0x29e] = 0;
  param_1[0x29f] = 0xffffffff;
  param_1[0x2a0] = 0xffffffff;
  param_1[0x45a] = 0;
  param_1[0x460] = 0;
  puVar2 = (unsigned int *)fn_82279C58(auStack_318,param_1);
  fn_82671A40(*puVar2,param_1);
  if (iStack_314 != 0) {
    fn_822315A0();
  }
  puVar2 = (unsigned int *)fn_82279C58(auStack_320,param_1);
  fn_82673A28(*puVar2,0xffffffff8227bdc8,param_1);
  if (iStack_31c != 0) {
    fn_822315A0();
  }
  puVar2 = (unsigned int *)fn_82279C58(auStack_328,param_1);
  fn_8266F768(*puVar2,0x3c);
  if (iStack_324 != 0) {
    fn_822315A0();
  }
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(param_1 + 0x2a2,0,0x6e0);
}

