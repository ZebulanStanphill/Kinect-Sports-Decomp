extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int fStack_6c;
extern unsigned int fStack_98;
extern unsigned int fStack_9c;
extern unsigned int fStack_a0;
extern int fn_827E8838();
extern int fn_82810280();
extern int fn_828102A8();
extern int fn_82810328();
extern int fn_82810558();
extern int fn_828105C8();
extern int fn_82810B78();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_827E88C8(unsigned __int64 param_1,unsigned __int64 param_2,double param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,double param_6)

{
  int iVar1;
  unsigned __int64 uVar2;
  double dVar3;
  float *in_stack_00000054;
  float *in_stack_0000005c;
  float *in_stack_00000064;
  int *in_stack_0000006c;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [4];
  float fStack_6c;
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [56];
  
  fn_82F6A544();
  uVar2 = fn_827E8838();
  if ((int)uVar2 != 0) {
    iVar1 = *in_stack_0000006c;
    if (iVar1 == 1) {
      *in_stack_00000064 = *in_stack_00000054;
      in_stack_00000064[1] = (float)((double)in_stack_00000054[1] - param_6);
      in_stack_00000064[2] = in_stack_00000054[2];
      fn_82810B78(in_stack_00000064,in_stack_00000064);
      *in_stack_0000005c = (float)((double)*in_stack_00000064 * param_3);
      in_stack_0000005c[1] = (float)(param_3 * (double)in_stack_00000064[1] + param_6);
      in_stack_0000005c[2] = (float)((double)in_stack_00000064[2] * param_3);
    }
    else if (iVar1 == 2) {
      fn_82810B78(in_stack_00000054,in_stack_00000064);
      fn_828102A8(param_2,in_stack_00000064,in_stack_0000005c);
    }
    else if (iVar1 == 3) {
      dVar3 = (double)lbl_821AAD20;
      fn_828105C8(dVar3,(double)lbl_82002AE0,dVar3,auStack_50);
      fStack_a0 = *in_stack_00000054;
      fStack_98 = in_stack_00000054[2];
      fStack_9c = (float)dVar3;
      fn_82810B78(&fStack_a0,&fStack_a0);
      fn_828102A8(param_5,&fStack_a0,auStack_70);
      fStack_6c = (float)param_6;
      fn_828102A8(param_4,&fStack_a0,auStack_80);
      fn_82810328(auStack_70,auStack_80,auStack_90);
      fn_82810328(in_stack_00000054,auStack_80,auStack_60);
      fn_82810B78(auStack_90,auStack_90);
      fn_82810280(auStack_60,auStack_90);
      fn_82810558(auStack_90,auStack_80);
      fn_82810328(in_stack_0000005c,in_stack_00000054,in_stack_00000064);
    }
    uVar2 = 1;
  }
  fn_82F6A590(uVar2);
  return;
}

