extern unsigned int fStack_40;
extern int fn_82DAD288();
extern int fn_82DAEFD0();
extern unsigned int iStack_44;
extern unsigned int iStack_50;
extern unsigned int iStack_58;
extern unsigned int uStack_48;
extern unsigned int uStack_54;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


int fn_82DAB220(double param_1,int *param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,int param_6,unsigned __int64 param_7,unsigned int param_8,
                 unsigned int param_9)

{
  int iVar1;
  int iVar2;
  unsigned int *in_stack_00000054;
  int in_stack_0000005c;
  struct { unsigned int first; unsigned int second; } stack_pair_70;

  unsigned int uStack_68;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  int iStack_58;
  unsigned int uStack_54;
  int iStack_50;
  int *piStack_4c;
  unsigned int uStack_48;
  int iStack_44;
  float fStack_40;
  
  fStack_40 = (float)param_1;
  uStack_68 = 0;
  *(unsigned char *)(in_stack_0000005c + 0xc) = 0;
  *(unsigned char *)(in_stack_0000005c + 0xe) = 0;
  *(unsigned char *)(in_stack_0000005c + 0xd) = 0;
  *(unsigned char *)(in_stack_0000005c + 0xf) = 1;
  uStack_54 = *in_stack_00000054;
  iStack_58 = in_stack_0000005c;
  iStack_50 = 0;
  iVar1 = param_2[5];
  iVar2 = param_2[4];
  stack_pair_70.first = param_3;
  stack_pair_70.second = param_4;
  uStack_60 = param_8;
  uStack_5c = param_9;
  piStack_4c = param_2;
  uStack_48 = param_5;
  iStack_44 = param_6;
  fn_82DAEFD0(param_2[3],&stack_pair_70.first);
  if (*(short *)(iVar2 + 0x204) != 0) {
    fn_82DAD288(iVar2,&stack_pair_70.first);
  }
  if (*(short *)(iVar1 + 0x204) != 0) {
    fn_82DAD288(iVar1,&stack_pair_70.first);
  }
  if (iStack_50 == 1) {
    (**(int (***)())(*param_2 + 0x20))(param_2,*(unsigned int *)(param_6 + 4),in_stack_0000005c);
  }
  else {
    *in_stack_00000054 = uStack_54;
  }
  return iStack_50;
}

