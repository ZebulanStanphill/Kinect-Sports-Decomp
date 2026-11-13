extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_e8;
extern int fn_82250BD0();
extern unsigned int uStack_ab;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_ec;
extern unsigned int uStack_ef;
extern unsigned int uStack_f0;


void fn_82252678(int param_1,unsigned __int64 param_2,int param_3)

{
  int *piVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char uStack_f0;
  unsigned char uStack_ef;
  unsigned int uStack_ec;
  unsigned int auStack_e8 [2];
  unsigned char auStack_e0 [16];
  unsigned int uStack_d0;
  unsigned int uStack_cc;
  unsigned int uStack_c8;
  unsigned int uStack_c4;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned char uStack_ac;
  unsigned char uStack_ab;
  unsigned char auStack_a0 [16];
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [128];
  
  uStack_f0 = 0;
  puVar2 = (unsigned int *)((unsigned int)(auStack_a0 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  puVar2 = (unsigned int *)((unsigned int)(auStack_e0 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0xffffffff;
  uStack_b8 = 0xffffffff;
  uStack_b4 = 0xffffffff;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_ab = 1;
  uStack_ef = 0;
  uStack_d0 = 0;
  uStack_cc = 0xffffffff;
  uStack_c8 = 0xffffffff;
  uStack_c4 = 0;
  fn_82250BD0(auStack_80);
  (**(int (***)())(**(int **)(param_1 + 0x68) + 0x14))(*(int **)(param_1 + 0x68),param_2,auStack_90);
  (**(int (***)())(**(int **)(param_1 + 0x70) + 0x14))(*(int **)(param_1 + 0x70),param_2,&uStack_c0);
  (**(int (***)())(**(int **)(param_1 + 0x78) + 0x14))(*(int **)(param_1 + 0x78),param_2,&uStack_ec);
  (**(int (***)())(**(int **)(param_1 + 0x80) + 0x14))(*(int **)(param_1 + 0x80),param_2,&uStack_f0);
  (**(int (***)())(**(int **)(param_1 + 0x88) + 0x14))(*(int **)(param_1 + 0x88),param_2,auStack_e0);
  (**(int (***)())(**(int **)(param_1 + 0x90) + 0x14))(*(int **)(param_1 + 0x90),param_2,auStack_80);
  (**(int (***)())(**(int **)(param_1 + 0x98) + 0x14))(*(int **)(param_1 + 0x98),param_2,auStack_e8);
  piVar1 = *(int **)(param_3 + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(int (***)())(*piVar1 + 4))
              (piVar1,&uStack_c0,uStack_ec,&uStack_f0,auStack_e0,auStack_80,auStack_e8[0]);
  }
  return;
}

