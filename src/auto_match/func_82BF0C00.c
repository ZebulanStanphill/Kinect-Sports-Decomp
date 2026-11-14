extern int fn_82BE5240();
extern int fn_82BEB750();
extern int fn_82BF8848();
extern int cos();
extern int fn_82F68CC0();
extern unsigned int lbl_820EB3E4;
extern unsigned int lbl_820EB3F4;
extern unsigned int lbl_831751D0;


unsigned int *
fn_82BF0C00(double param_1,double param_2,unsigned int *param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             unsigned __int64 param_6,unsigned __int64 param_7,int param_8,__int64 param_9,unsigned int param_10)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned short in_stack_00000056;
  unsigned short in_stack_0000005e;
  char *in_stack_00000074;
  int in_stack_0000007c;
  
  fn_82BEB750(param_3,0xffffffff820eb400);
  fn_82BF8848(param_3 + 0xb,param_4,param_9,param_5,0,0,param_6,param_7);
  *param_3 = &lbl_820EB3F4;
  param_3[0xb] = &lbl_820EB3E4;
  param_3[0xf] = 0;
  param_3[0x10] = 0;
  param_3[0x11] = 0;
  param_3[0x12] = 0;
  param_3[0x17] = (float)param_1;
  param_3[0x18] = (float)param_2;
  param_3[0x13] = 0;
  param_3[0x14] = param_8;
  param_3[0x15] = param_10;
  *(unsigned short *)(param_3 + 0x16) = in_stack_00000056;
  *(unsigned short *)((int)param_3 + 0x5a) = in_stack_0000005e;
  param_3[0x19] = 0;
  param_3[0x1a] = 0;
  param_3[0x1b] = 0;
  if ((param_5 & 0xffffffff) != 0) {
    if ((param_4 & 0xffffffff) == 0) {
      fn_82BE5240(param_3,600,0xffffffff82196582);
    }
    if ((param_7 & 0xffffffff) == 0) {
      fn_82BE5240(param_3,0x25d,0xffffffff82196582);
    }
    if ((param_8 == 0) || (param_9 == 0)) {
      fn_82BE5240(param_3,0x25e,0xffffffff82196582);
    }
    if ((in_stack_00000074 == (char *)0x0) || (*in_stack_00000074 == '\0')) {
      if ((int *)param_3[0xd] == (int *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = (**(int (***)())(*(int *)param_3[0xd] + 4))();
      }
      fn_82BE5240(param_3,0x25b,0xffffffff820eb3d4,uVar1);
    }
    if (in_stack_0000007c == 0) {
      if ((int *)param_3[0xd] == (int *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = (**(int (***)())(*(int *)param_3[0xd] + 4))();
      }
      fn_82BE5240(param_3,0x25c,0xffffffff820eb3d4,uVar1);
      param_3[0x1b] = 0;
    }
    else {
      uVar2 = (*(int (**)())lbl_831751D0)(0x14);
      param_3[0x1b] = (int)uVar2;
      if ((uVar2 & 0xffffffff) == 0) {
        fn_82BE5240(param_3,0x65,0xffffffff82196582);
      }
      else {
        fn_82F68CC0(uVar2,in_stack_0000007c,0x14);
      }
    }
                    /* WARNING: Subroutine does not return */
    cos(param_1);
  }
  return param_3;
}

