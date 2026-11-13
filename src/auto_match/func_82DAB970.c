extern unsigned int fStack_60;
extern int fn_82DAC508();
extern int fn_82DAD288();
extern int fn_82DAEFD0();
extern unsigned int iStack_64;
extern unsigned int iStack_70;
extern unsigned int uStack_68;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


int fn_82DAB970(double param_1,int *param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,int param_6,unsigned __int64 param_7,unsigned int param_8,
                 unsigned int param_9)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *in_stack_00000054;
  unsigned int in_stack_0000005c;
  struct { unsigned int first; unsigned int second; } stack_pair_90;

  unsigned int uStack_88;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  int iStack_70;
  int *piStack_6c;
  unsigned int uStack_68;
  int iStack_64;
  float fStack_60;
  
  uVar1 = fn_82DAC508();
  fStack_60 = (float)param_1;
  uStack_88 = 0;
  iStack_70 = 0;
  uStack_74 = *in_stack_00000054;
  uStack_78 = in_stack_0000005c;
  uVar2 = param_2[0x17] ^ param_2[0x16] ^ uVar1;
  stack_pair_90.first = param_3;
  stack_pair_90.second = param_4;
  uStack_80 = param_8;
  uStack_7c = param_9;
  piStack_6c = param_2;
  uStack_68 = param_5;
  iStack_64 = param_6;
  fn_82DAEFD0(param_2[3],&stack_pair_90.first);
  if (*(short *)(uVar1 + 0x204) != 0) {
    fn_82DAD288(uVar1,&stack_pair_90.first);
  }
  if (*(short *)(uVar2 + 0x204) != 0) {
    fn_82DAD288(uVar2,&stack_pair_90.first);
  }
  if (iStack_70 == 1) {
    (**(int (***)())(*param_2 + 0x20))(param_2,*(unsigned int *)(param_6 + 4),in_stack_0000005c);
  }
  else {
    *in_stack_00000054 = uStack_74;
  }
  return iStack_70;
}

