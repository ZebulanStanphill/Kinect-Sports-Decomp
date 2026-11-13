extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c8;
extern unsigned int *auStack_d0;
extern unsigned int fStack_cc;
extern int fn_82250D10();
extern unsigned int uStack_ab;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


void fn_82252510(int param_1,unsigned __int64 param_2,int param_3)

{
  int *piVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char auStack_d0 [4];
  float fStack_cc;
  unsigned char auStack_c8 [8];
  struct { unsigned int first; unsigned int second; } stack_pair_c0;

  unsigned int uStack_b8;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned char uStack_ac;
  unsigned char uStack_ab;
  unsigned char auStack_a0 [16];
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [112];
  
  stack_pair_c0.first = 0xffffffff;
  puVar2 = (unsigned int *)((unsigned int)(auStack_a0 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  stack_pair_c0.second = 0xffffffff;
  uStack_b8 = 0xffffffff;
  uStack_b4 = 0xffffffff;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_ab = 1;
  fn_82250D10(auStack_70);
  (**(int (***)())(**(int **)(param_1 + 0x68) + 0x14))(*(int **)(param_1 + 0x68),param_2,auStack_80);
  (**(int (***)())(**(int **)(param_1 + 0x70) + 0x14))(*(int **)(param_1 + 0x70),param_2,&stack_pair_c0.first);
  (**(int (***)())(**(int **)(param_1 + 0x78) + 0x14))(*(int **)(param_1 + 0x78),param_2,auStack_90);
  (**(int (***)())(**(int **)(param_1 + 0x80) + 0x14))(*(int **)(param_1 + 0x80),param_2,&fStack_cc);
  (**(int (***)())(**(int **)(param_1 + 0x88) + 0x14))(*(int **)(param_1 + 0x88),param_2,auStack_d0);
  (**(int (***)())(**(int **)(param_1 + 0x90) + 0x14))(*(int **)(param_1 + 0x90),param_2,auStack_70);
  (**(int (***)())(**(int **)(param_1 + 0x98) + 0x14))(*(int **)(param_1 + 0x98),param_2,auStack_c8);
  piVar1 = *(int **)(param_3 + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(int (***)())(*piVar1 + 4))((double)fStack_cc,piVar1,&stack_pair_c0.first);
  }
  return;
}

