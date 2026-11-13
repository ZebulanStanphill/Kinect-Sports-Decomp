typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {float f[4];} __vector4;
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_822527F8();
extern int fn_822D79D8();
extern int fn_822D7FE0();
extern unsigned fn_8265C9E0(unsigned);
extern int fn_828E2B28();
extern int fn_828E9D40();
extern int fn_828E9D90();
extern unsigned int iStack_34;
extern unsigned int stack0x00000020;
extern unsigned int stack0x0000003f;
extern unsigned int stack0x0000004c;
extern unsigned int uStack0000003f;
extern unsigned int uStack0000004c;
extern unsigned int uStack_38;


void fn_823F2978(int param_1,__vector4 pos,int param_2,unsigned char param_3,int param_4,unsigned int param_5)

{
  unsigned iVar2;
  int uVar1;

  unsigned char auStack_40;
  struct { unsigned int first; void *second; } stack_pair_38;


  auStack_40 = 0;

  iVar2 = fn_8265C9E0(0x28);
  if (iVar2 != 0) {
    uVar1 = fn_822D7FE0(iVar2);
  } else {
    uVar1 = 0;
  }
  stack_pair_38.first = 0;
  stack_pair_38.second = 0;
  fn_822D79D8(&stack_pair_38.first,uVar1);
  (*(int (**)())(**(int **)(param_1 + 0x68) + 0x10))
            (*(int **)(param_1 + 0x68),stack_pair_38.first,&pos);
  (*(int (**)())(**(int **)(param_1 + 0x70) + 0x10))(*(int **)(param_1 + 0x70),stack_pair_38.first,param_2);
  (*(int (**)())(**(int **)(param_1 + 0x78) + 0x10))(*(int **)(param_1 + 0x78),stack_pair_38.first,&auStack_40);
  (*(int (**)())(**(int **)(param_1 + 0x80) + 0x10))
            (*(int **)(param_1 + 0x80),stack_pair_38.first,&param_3);
  (*(int (**)())(**(int **)(param_1 + 0x88) + 0x10))(*(int **)(param_1 + 0x88),stack_pair_38.first,param_4);
  (*(int (**)())(**(int **)(param_1 + 0x90) + 0x10))
            (*(int **)(param_1 + 0x90),stack_pair_38.first,&param_5);
  if (*(unsigned *)(param_1 + 0x48) != 0) {
    fn_828E9D90(stack_pair_38.first);
    fn_828E9D40(stack_pair_38.first);
    fn_822527F8(param_1,stack_pair_38.first,param_1 + 0x38);
  }
  fn_828E2B28(param_1,&stack_pair_38.first);
  if (stack_pair_38.second != 0) {
    fn_822315A0(stack_pair_38.second);
  }
  return;
}
