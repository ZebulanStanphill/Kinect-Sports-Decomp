extern unsigned int *auStack_28;
extern int fn_822315A0();
extern int fn_823F2E20();
extern int fn_82517978();
extern int fn_82520158();
extern int fn_8266EC60();
extern int fn_8266EE08();
extern int fn_8266F628();
extern int fn_8266F640();
extern int fn_8266F6A8();
extern int fn_82673A28();
extern int fn_82673BC0();
extern unsigned int iStack_24;
extern unsigned int iStack_2c;
extern unsigned int lbl_821AB238;
extern unsigned int lbl_821ABBA4;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_30;


unsigned int * fn_8229D298(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  struct { unsigned int first; int second; } stack_pair_30;

  unsigned char auStack_28 [4];
  int iStack_24;
  
  *param_1 = &lbl_821ABBA4;
  param_1[1] = 0;
  uVar1 = ltcg_pool_0_0f;
  param_1[2] = 0;
  param_1[4] = uVar1;
  param_1[3] = 0;
  puVar3 = param_1 + 1;
  param_1[5] = 0;
  param_1[6] = 0;
  fn_82520158(0xffffffff821aadd0,&stack_pair_30.first,0);
  uVar2 = fn_8266EC60();
  uVar2 = fn_8266EE08(auStack_28,uVar2,&stack_pair_30.first,0,1,0);
  fn_823F2E20(puVar3,uVar2);
  if (iStack_24 != 0) {
    fn_822315A0();
  }
  fn_8266F640(*puVar3,1);
  fn_8266F628(*puVar3,1);
  fn_82673A28(*puVar3,0xffffffff822a0790,param_1);
  fn_82673BC0(*puVar3,0xffffffff82291208,param_1);
  stack_pair_30.first = 0;
  stack_pair_30.second = 0;
  *param_1 = &lbl_821AB238;
  fn_82517978(&stack_pair_30.first,*puVar3,param_1[2],0);
  fn_8266F6A8(stack_pair_30.first,0x10);
  if (stack_pair_30.second != 0) {
    fn_822315A0();
  }
  return param_1;
}

