extern int fn_82265680();
extern int fn_82266D28();
extern int fn_82528BF8();
extern int fn_82528E38();
extern void *memcpy(void*,const void*,unsigned);
extern void fn_82266CC0(void);


int fn_822651E0(int param_1,int param_2,unsigned int param_3,unsigned int *param_4,unsigned int param_5,
                 unsigned __int64 param_6)

{
  float f;
  unsigned int uVar1;
  
  memcpy((void*)param_1,(void*)param_2,0xd0);
  *(unsigned int *)(param_1 + 0xdc) = 0;
  *(unsigned int *)(param_1 + 0xe0) = 0;
  f = 0.0f;
  *(unsigned int *)(param_1 + 0xe4) = 0;
  *(float *)(param_1 + 0xe8) = f;
  *(float *)(param_1 + 0xec) = f;
  *(float *)(param_1 + 0xf0) = f;
  *(float *)(param_1 + 0xf4) = f;
  f = *(float *)(param_2 + 100);
  *(unsigned int *)(param_1 + 0x100) = param_5;
  *(float *)(param_1 + 0xf8) = f;
  *(unsigned int *)(param_1 + 0x508) = 0;
  *(unsigned int *)(param_1 + 0x50c) = 0;
  *(unsigned int *)(param_1 + 0x510) = 2;
  *(unsigned int *)(param_1 + 0x518) = 0;
  *(unsigned int *)(param_1 + 0x51c) = 0;
  *(unsigned int *)(param_1 + 0x520) = param_3;
  *(unsigned int *)(param_1 + 0x524) = 0;
  *(unsigned int *)(param_1 + 0x528) = 0;
  fn_82266D28(param_1 + 0x524,0);
  *(unsigned int *)(param_1 + 0x52c) = 0;
  *(unsigned int *)(param_1 + 0x538) = 0;
  *(unsigned int *)(param_1 + 0x628) = 0;
  *(unsigned int *)(param_1 + 0x630) = 0;
  *(unsigned int *)(param_1 + 0x53c) = 1;
  *(unsigned int *)(param_1 + 0x62c) = 0xffffffff;
  *(unsigned int *)(param_1 + 0xd0) = *(unsigned int *)(param_2 + 0xd0);
  *(unsigned int *)(param_1 + 0xd4) = *param_4;
  *(unsigned int *)(param_1 + 0xd8) = *(unsigned int *)(param_2 + 0xd4);
  fn_82265680(param_1);
  uVar1 = fn_82528BF8(param_6,param_1,param_1 + 0x5a4,0x40,0,1);
  *(unsigned int *)(param_1 + 0x624) = uVar1;
  fn_82528E38(param_1 + 0x628,0x40017,fn_82266CC0,param_1);
  return param_1;
}

