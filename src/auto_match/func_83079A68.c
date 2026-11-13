extern int fn_8306ECA8();
extern int fn_83075E30();
extern int fn_8307DA20();
extern unsigned int lbl_821AAD20;


unsigned __int64 * fn_83079A68(unsigned __int64 *param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  float fVar2;
  double dVar3;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  
  fn_83075E30();
  puVar1 = (unsigned int *)((unsigned int)(param_1 + 8) & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  fn_83075E30();
  puVar1 = (unsigned int *)((unsigned int)(param_1 + 10) & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  fn_8306ECA8();
  puVar1 = (unsigned int *)((unsigned int)(param_1 + 0xc) & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  fn_8306ECA8();
  *(unsigned char *)((int)param_1 + 0x84) = 0;
  fVar2 = lbl_821AAD20;
  dVar3 = (double)lbl_821AAD20;
  *(unsigned char *)((int)param_1 + 0x85) = 0;
  *(float *)(param_1 + 0x10) = fVar2;
  puVar1 = (unsigned int *)((unsigned int)(param_1 + 0xe) & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  fn_8307DA20(param_1 + 0x11);
  fn_8307DA20((int)param_1 + 0x94);
  fn_83075E30();
  *(float *)(param_1 + 0x17) = (float)dVar3;
  *(unsigned int *)(param_1 + 0x16) = param_2;
  *(float *)((int)param_1 + 0xbc) = (float)dVar3;
  *(unsigned int *)((int)param_1 + 0xb4) = param_3;
  *(float *)(param_1 + 0x18) = (float)dVar3;
  *(float *)((int)param_1 + 0xc4) = (float)dVar3;
  puVar1 = (unsigned int *)((unsigned int)(param_1 + 0x14) & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  fn_8307DA20(param_1 + 0x19);
  fn_8307DA20(param_1 + 0x1b);
  *(float *)(param_1 + 0x1d) = (float)dVar3;
  *(float *)((int)param_1 + 0xec) = (float)dVar3;
  *(unsigned char *)(param_1 + 0x1f) = 0;
  *(float *)(param_1 + 0x1e) = (float)dVar3;
  *(unsigned char *)((int)param_1 + 0xf9) = 0;
  *(float *)((int)param_1 + 0xf4) = (float)dVar3;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  return param_1;
}

