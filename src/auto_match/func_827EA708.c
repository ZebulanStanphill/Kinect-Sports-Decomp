extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_8280A5D8();
extern int fn_82810240();
extern int fn_82810280();
extern int fn_82810328();
extern int fn_82810470();
extern int fn_82810558();
extern int fn_82810B78();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82005344;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831F13B4;


void fn_827EA708(unsigned __int64 param_1, double param_2, unsigned __int64 param_3, unsigned __int64 param_4, unsigned __int64 param_5, unsigned __int64 param_6, unsigned __int64 param_7, unsigned __int64 param_8, unsigned __int64 param_9, unsigned __int64 param_10, unsigned __int64 unused_arg_11, unsigned __int64 unused_arg_12, unsigned int in_stack_00000074)

{
  unsigned __int64 uVar1;
  int iVar2;
  double extraout_f1;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  float *in_stack_0000006c;

  unsigned char auStack_f0 [16];
  unsigned char auStack_e0 [16];
  unsigned char auStack_d0 [16];
  unsigned char auStack_c0 [16];
  unsigned char auStack_b0 [16];
  unsigned char auStack_a0 [16];
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [1];

  uVar1 = fn_82F6A548();
  dVar5 = extraout_f1;
  fn_82810558(param_9,param_6);
  fn_82810558(dVar5,param_10,param_7);
  fn_82810558(dVar5,in_stack_00000054,param_8);
  fn_82810328(auStack_b0,auStack_d0,auStack_c0);
  fn_82810328(auStack_a0,auStack_d0,auStack_70);
  fn_82810328(auStack_a0,auStack_b0,auStack_60);
  fn_82810240(auStack_c0,auStack_70,in_stack_00000074);
  iVar2 = fn_82810470(in_stack_00000074);
  if (iVar2 == 0) {
    fn_82810B78(in_stack_00000074,in_stack_00000074);
    fn_82810328(param_5,in_stack_0000005c,auStack_80);
    fn_82810328(uVar1,auStack_d0,auStack_90);
    dVar3 = (double)fn_82810280(auStack_90,in_stack_00000074);
    dVar4 = (double)fn_82810280(auStack_80,in_stack_00000074);
    dVar6 = (double)lbl_821AAD20;
    if (((dVar4 < dVar6) && (-(double)(float)(dVar5 * (double)lbl_82005344) <= dVar3)) &&
       ((double)(float)(dVar4 * param_2 + dVar3) <= dVar6)) {
      dVar5 = (double)fn_8280A5D8();
      dVar3 = -(double)(float)(dVar5 * dVar3);
      fn_82810558(dVar3,auStack_80,auStack_90);
      fn_82810240(in_stack_00000074,auStack_c0,auStack_e0);
      dVar5 = (double)fn_82810280(auStack_e0,auStack_f0);
      if (dVar6 <= dVar5) {
        fn_82810240(auStack_70,in_stack_00000074,auStack_e0);
        dVar5 = (double)fn_82810280(auStack_e0,auStack_f0);
        if (dVar6 <= dVar5) {
          fn_82810240(in_stack_00000074,auStack_60,auStack_e0);
          fn_82810328(auStack_f0,auStack_c0,auStack_f0);
          dVar5 = (double)fn_82810280(auStack_e0,auStack_f0);
          if ((dVar6 <= dVar5) && ((lbl_831F13B4 == 0 || (dVar6 <= dVar3)))) {
            uVar1 = 1;
            *in_stack_0000006c = (float)dVar3;
            goto code_r0x827ea908;
          }
        }
      }
    }
  }
  uVar1 = 0;
code_r0x827ea908:
  fn_82F6A594(uVar1);
  return;
}
