extern int fn_82265680();
extern int fn_82266D28();
extern int fn_82528E38();
extern int fn_82528EE0();
extern int fn_82A1DD38();
extern int fn_82F68CC0();
extern unsigned int ltcg_pool_0_0f;


int fn_82265420(int param_1,int param_2,unsigned int param_3,unsigned int *param_4,unsigned int param_5)

{
  unsigned int uVar1;
  
  fn_82F68CC0(param_1,param_2,0xd0);
  *(unsigned int *)(param_1 + 0xdc) = 0;
  *(unsigned int *)(param_1 + 0xe0) = 0;
  uVar1 = ltcg_pool_0_0f;
  *(unsigned int *)(param_1 + 0xe4) = 0;
  *(unsigned int *)(param_1 + 0xe8) = uVar1;
  *(unsigned int *)(param_1 + 0xec) = uVar1;
  *(unsigned int *)(param_1 + 0xf0) = uVar1;
  *(unsigned int *)(param_1 + 0xf4) = uVar1;
  uVar1 = *(unsigned int *)(param_2 + 100);
  *(unsigned int *)(param_1 + 0x100) = param_5;
  *(unsigned int *)(param_1 + 0xf8) = uVar1;
  *(unsigned int *)(param_1 + 0x508) = 0;
  *(unsigned int *)(param_1 + 0x50c) = 0;
  *(unsigned int *)(param_1 + 0x510) = 4;
  *(unsigned int *)(param_1 + 0x518) = 0;
  *(unsigned int *)(param_1 + 0x51c) = 0;
  *(unsigned int *)(param_1 + 0x520) = param_3;
  *(unsigned int *)(param_1 + 0x524) = 0;
  *(unsigned int *)(param_1 + 0x528) = 0;
  fn_82266D28(param_1 + 0x524,0);
  *(unsigned int *)(param_1 + 0x52c) = 0;
  *(unsigned int *)(param_1 + 0x538) = 0;
  *(unsigned int *)(param_1 + 0x53c) = 1;
  *(unsigned int *)(param_1 + 0x628) = 0;
  *(unsigned int *)(param_1 + 0x62c) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x630) = 0;
  fn_82A1DD38(param_1 + 0x120,*(unsigned int *)(param_2 + 0xd0),1000);
  uVar1 = *param_4;
  *(unsigned int *)(param_1 + 0xd8) = 0;
  *(unsigned int *)(param_1 + 0xd4) = uVar1;
  fn_82265680(param_1);
  uVar1 = fn_82528EE0(param_1 + 0x5a4,0x40,0xffffffff821a7c80,param_1);
  *(unsigned int *)(param_1 + 0x624) = uVar1;
  fn_82528E38(param_1 + 0x628,0x40017,0xffffffff82266cc0,param_1);
  return param_1;
}

