extern int fn_82672C20();
extern unsigned int ltcg_pool_0_0f;


void fn_82383B90(double param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7,double param_8,int param_9)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int in_register_00010020;
  unsigned int in_register_00010024;
  unsigned int in_register_00010028;
  unsigned int in_vr2;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned int in_stack_00000084;
  unsigned int in_stack_0000008c;
  unsigned int in_stack_00000094;
  
  uVar3 = ltcg_pool_0_0f;
  iVar1 = *(int *)(param_9 + 0xec);
  *(float *)(param_9 + 0x10) = (float)param_1;
  *(float *)(param_9 + 0x14) = (float)param_2;
  *(unsigned int *)(param_9 + 0x60) = 0;
  *(unsigned int *)(param_9 + 0xc0) = uVar3;
  *(unsigned int *)(param_9 + 0x5c) = in_stack_00000084;
  *(unsigned int *)(param_9 + 0xc4) = uVar3;
  *(unsigned int *)(param_9 + 100) = in_stack_0000008c;
  *(float *)(param_9 + 0x40) = (float)param_3;
  *(unsigned int *)(param_9 + 0xe4) = in_stack_00000094;
  *(float *)(param_9 + 0x44) = (float)param_4;
  *(unsigned int *)(param_9 + 0xe0) = 1;
  *(float *)(param_9 + 0x48) = (float)param_5;
  *(unsigned int *)(param_9 + 0xe8) = 0;
  *(float *)(param_9 + 0x4c) = (float)param_6;
  *(unsigned int *)(param_9 + 0x18) = uVar3;
  *(float *)(param_9 + 0x50) = (float)param_7;
  *(float *)(param_9 + 0x54) = (float)param_7;
  *(float *)(param_9 + 0x58) = (float)param_8;
  puVar2 = (unsigned int *)(param_9 + 0xd0U & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  puVar2 = (unsigned int *)(param_9 + 0x20U & 0xfffffff0);
  *puVar2 = in_register_00010010;
  puVar2[1] = in_register_00010014;
  puVar2[2] = in_register_00010018;
  puVar2[3] = in_vr1;
  puVar2 = (unsigned int *)(param_9 + 0x30U & 0xfffffff0);
  *puVar2 = in_register_00010020;
  puVar2[1] = in_register_00010024;
  puVar2[2] = in_register_00010028;
  puVar2[3] = in_vr2;
  if (iVar1 == 6) {
    *(unsigned int *)(param_9 + 0x5c) = (unsigned int)LZCOUNT(in_stack_00000084) >> 5;
  }
  if (param_2 < param_1) {
    if ((*(int *)(param_9 + 0xa4) != 0) && (*(int *)(param_9 + 0xa8) == 0)) {
      *(unsigned int *)(param_9 + 0xa8) = 1;
      fn_82672C20(*(unsigned int *)(param_9 + 0xac),0xffffffff821a8498,0,0);
    }
    *(unsigned int *)(param_9 + 0x60) = 0;
  }
  return;
}

