#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b8;
extern unsigned int *auStack_c0;
extern int fn_82250BD0();
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_bc;


void fn_82251F78(int param_1,unsigned __int64 param_2,int param_3)

{
  int *piVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned short auStack_c0 [2];
  unsigned int uStack_bc;
  unsigned char auStack_b8 [4];
  unsigned int uStack_b4;
  unsigned __int64 uStack_b0;
  unsigned __int64 uStack_a8;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [128];
  
  auStack_c0[0] = 0;
  puVar2 = (unsigned int *)((int)&uStack_b0 + in_r0 & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  uStack_a0 = 0;
  uStack_9c = 0xffffffff;
  uStack_98 = 0xffffffff;
  uStack_94 = 0;
  fn_82250BD0(auStack_80);
  (**(int (***)())(**(int **)(param_1 + 0x68) + 0x14))(*(int **)(param_1 + 0x68),param_2,&uStack_bc);
  (**(int (***)())(**(int **)(param_1 + 0x70) + 0x14))(*(int **)(param_1 + 0x70),param_2,&uStack_b4);
  (**(int (***)())(**(int **)(param_1 + 0x78) + 0x14))(*(int **)(param_1 + 0x78),param_2,auStack_90);
  (**(int (***)())(**(int **)(param_1 + 0x80) + 0x14))(*(int **)(param_1 + 0x80),param_2,&uStack_b0);
  (**(int (***)())(**(int **)(param_1 + 0x88) + 0x14))(*(int **)(param_1 + 0x88),param_2,auStack_c0);
  (**(int (***)())(**(int **)(param_1 + 0x90) + 0x14))(*(int **)(param_1 + 0x90),param_2,auStack_b8);
  (**(int (***)())(**(int **)(param_1 + 0x98) + 0x14))(*(int **)(param_1 + 0x98),param_2,auStack_80);
  piVar1 = *(int **)(param_3 + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(int (***)())(*piVar1 + 4))
              (piVar1,uStack_bc,uStack_b4,uStack_b0,uStack_a8,CONCAT44(uStack_a0,uStack_9c),
               CONCAT44(uStack_98,uStack_94),auStack_c0[0]);
  }
  return;
}

