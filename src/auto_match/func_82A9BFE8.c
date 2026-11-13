extern unsigned int *auStack_40;
extern int fn_82A99B70();
extern int fn_82A99BC8();
extern int fn_82A99C28();
extern int fn_82A99D88();
extern int fn_82A9A860();
extern int fn_82A9BE60();
extern int sprintf();


void fn_82A9BFE8(unsigned __int64 param_1,unsigned __int64 param_2,__int64 param_3,unsigned int *param_4)

{
  unsigned char auStack_40 [64];
  
  fn_82A99BC8(param_2);
  fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d2adc);
  if (*(short *)(param_4 + 2) != 0) {
    sprintf(auStack_40,0xffffffff820d2ad0,"bicsconstant"[*(unsigned short *)(param_4 + 1)],
                      *(unsigned short *)((int)param_4 + 6));
    fn_82A99D88(param_2,0xffffffff8204ee44,auStack_40);
    if (*(short *)(param_4 + 2) != 1) {
      fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff820d2ac8);
    }
  }
  fn_82A9A860(param_2);
  fn_82A9BE60(param_1,param_2,param_3,(unsigned __int64)param_4[3] + param_3,
                (unsigned __int64)*param_4 + param_3);
  fn_82A99C28(param_2,0xffffffff820d2adc);
  return;
}

