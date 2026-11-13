extern unsigned int fStack0000004c;
extern int fn_822315A0();
extern int fn_82251E58();
extern int fn_822D79D8();
extern int fn_822D7FE0();
extern int fn_8265C9E0();
extern int fn_828E2B28();
extern int fn_828E9D40();
extern int fn_828E9D90();
extern unsigned int iStack_1c;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int stack0x0000002f;
extern unsigned int stack0x00000034;
extern unsigned int stack0x0000003c;
extern unsigned int stack0x00000047;
extern unsigned int stack0x0000004c;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002f;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000047;
extern unsigned int uStack_20;


void fn_823F1000(int param_2,unsigned int param_3,unsigned int param_4,
                  unsigned char param_5,unsigned int param_6,unsigned int param_7,unsigned char param_8,float param_1)

{
  unsigned iVar2;
  unsigned uVar1;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned char uStack0000002f;
  unsigned int uStack00000034;
  unsigned int uStack0000003c;
  unsigned char uStack00000047;
  float fStack0000004c;
  struct { unsigned int first; unsigned second; } stack_pair_20;

  







  iVar2 = fn_8265C9E0(0x28);
  if (iVar2 != 0) {
    uVar1 = fn_822D7FE0(iVar2);
  }
  else {
    uVar1 = 0;
  }
  stack_pair_20.first = 0;
  stack_pair_20.second = 0;
  fn_822D79D8(&stack_pair_20.first,uVar1);
  (*(int (**)())(**(int **)(param_2 + 0x68) + 0x10))
            (*(int **)(param_2 + 0x68),stack_pair_20.first,&param_3);
  (*(int (**)())(**(int **)(param_2 + 0x70) + 0x10))
            (*(int **)(param_2 + 0x70),stack_pair_20.first,&param_4);
  (*(int (**)())(**(int **)(param_2 + 0x78) + 0x10))
            (*(int **)(param_2 + 0x78),stack_pair_20.first,&param_5);
  (*(int (**)())(**(int **)(param_2 + 0x80) + 0x10))
            (*(int **)(param_2 + 0x80),stack_pair_20.first,&param_6);
  (*(int (**)())(**(int **)(param_2 + 0x88) + 0x10))
            (*(int **)(param_2 + 0x88),stack_pair_20.first,&param_7);
  (*(int (**)())(**(int **)(param_2 + 0x90) + 0x10))
            (*(int **)(param_2 + 0x90),stack_pair_20.first,&param_8);
  (*(int (**)())(**(int **)(param_2 + 0x98) + 0x10))
            (*(int **)(param_2 + 0x98),stack_pair_20.first,&param_1);
  if (*(unsigned *)(param_2 + 0x48) != 0) {
    fn_828E9D90(stack_pair_20.first);
    fn_828E9D40(stack_pair_20.first);
    fn_82251E58(param_2,stack_pair_20.first,param_2 + 0x38);
  }
  fn_828E2B28(param_2,&stack_pair_20.first);
  if (stack_pair_20.second != 0) {
    fn_822315A0(stack_pair_20.second);
  }
  return;
}

