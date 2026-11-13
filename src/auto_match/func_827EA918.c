extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_d0;
extern int fn_827EA708();
extern int fn_827EF590();
extern int fn_827EF608();
extern int fn_8280A5E8();
extern int fn_82810328();
extern int fn_828106A0();
extern unsigned int lbl_82002AE0;
extern unsigned int uStack_100;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


unsigned __int64
fn_827EA918(unsigned __int64 param_1,unsigned __int64 param_2,float *param_3,unsigned __int64 param_4,
             unsigned int *param_5,unsigned int *param_6,unsigned int *param_7,unsigned int *param_8,
             unsigned int *param_9)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int *in_stack_00000054;
  unsigned int in_stack_0000005c;
  struct { unsigned int first; unsigned int second; } stack_pair_100;

  unsigned int uStack_f8;
  struct { unsigned int first; unsigned int second; } stack_pair_f0;

  unsigned int uStack_e8;
  unsigned int uStack_e0;
  unsigned int uStack_dc;
  unsigned int uStack_d8;
  unsigned char auStack_d0 [16];
  struct { unsigned int first; unsigned int second; } stack_pair_c0;

  unsigned int uStack_b8;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [128];

  uStack_dc = param_5[1];
  uStack_e0 = *param_5;
  stack_pair_f0.first = *param_6;
  stack_pair_f0.second = param_6[1];
  stack_pair_100.first = *param_7;
  stack_pair_100.second = param_7[1];
  uStack_a0 = *param_8;
  uStack_9c = param_8[1];
  uStack_b0 = *param_9;
  uStack_ac = param_9[1];
  stack_pair_c0.first = *in_stack_00000054;
  stack_pair_c0.second = in_stack_00000054[1];
  uStack_d8 = param_5[2];
  uStack_e8 = param_6[2];
  uStack_f8 = param_7[2];
  uStack_98 = param_8[2];
  uStack_a8 = param_9[2];
  uStack_b8 = in_stack_00000054[2];
  iVar2 = fn_8280A5E8((double)*param_3);
  if (((iVar2 == 0) && (iVar2 = fn_8280A5E8((double)param_3[1]), iVar2 == 0)) &&
     (iVar2 = fn_8280A5E8((double)param_3[2]), iVar2 == 0)) {
    fn_82810328(param_4,in_stack_0000005c,auStack_90);
    fn_82810328(&uStack_e0,param_2,&uStack_e0);
    fn_82810328(&stack_pair_f0.first,param_2,&stack_pair_f0.first);
    fn_82810328(&stack_pair_100.first,param_2,&stack_pair_100.first);
    fn_827EF590(param_3,auStack_d0);
    fn_827EF608(auStack_d0,auStack_90,auStack_90);
    fn_827EF608(auStack_d0,&uStack_e0,&uStack_e0);
    fn_827EF608(auStack_d0,&stack_pair_f0.first,&stack_pair_f0.first);
    fn_827EF608(auStack_d0,&stack_pair_100.first,&stack_pair_100.first);
    fn_828106A0(auStack_80);
    uVar1 = fn_827EA708((double)lbl_82002AE0,param_1,auStack_80,&stack_pair_c0.first,auStack_90,&uStack_e0,
                          &stack_pair_f0.first,&stack_pair_100.first,&uStack_a0,&uStack_b0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
