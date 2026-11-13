extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_bc;
extern unsigned int *auStack_bf;
extern int fn_82250D10();
extern unsigned int uStack_9b;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_c0;


void fn_822527F8(int param_1,unsigned __int64 param_2,int param_3)

{
  int *piVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char uStack_c0;
  unsigned char auStack_bf [3];
  unsigned int auStack_bc [3];
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  unsigned int uStack_a4;
  unsigned int uStack_a0;
  unsigned char uStack_9c;
  unsigned char uStack_9b;
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [112];
  
  uStack_b0 = 0xffffffff;
  puVar2 = (unsigned int *)((unsigned int)(auStack_90 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  uStack_ac = 0xffffffff;
  uStack_a8 = 0xffffffff;
  uStack_a4 = 0xffffffff;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_9b = 1;
  fn_82250D10(auStack_70);
  (**(int (***)())(**(int **)(param_1 + 0x68) + 0x14))(*(int **)(param_1 + 0x68),param_2,auStack_80);
  (**(int (***)())(**(int **)(param_1 + 0x70) + 0x14))(*(int **)(param_1 + 0x70),param_2,&uStack_b0);
  (**(int (***)())(**(int **)(param_1 + 0x78) + 0x14))(*(int **)(param_1 + 0x78),param_2,auStack_bf);
  (**(int (***)())(**(int **)(param_1 + 0x80) + 0x14))(*(int **)(param_1 + 0x80),param_2,&uStack_c0);
  (**(int (***)())(**(int **)(param_1 + 0x88) + 0x14))(*(int **)(param_1 + 0x88),param_2,auStack_70);
  (**(int (***)())(**(int **)(param_1 + 0x90) + 0x14))(*(int **)(param_1 + 0x90),param_2,auStack_bc);
  piVar1 = *(int **)(param_3 + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(int (***)())(*piVar1 + 4))(piVar1,&uStack_b0,auStack_bf[0],uStack_c0,auStack_70,auStack_bc[0]);
  }
  return;
}

