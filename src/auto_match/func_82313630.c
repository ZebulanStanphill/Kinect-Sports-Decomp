extern unsigned int fn_82313FA0;
extern unsigned int lbl_821AF528;
extern unsigned int lbl_821AF548;

/* WARNING: Inlined function: __savegprlr_28 */

unsigned int * fn_82313630(unsigned int *param_1)

{
  int *piVar1;
  unsigned int *puVar2;
  int *piVar3;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned int uStack_38;
  
  *param_1 = &lbl_821AF528;
  param_1[0xe] = 0x3f800000;
  puVar2 = (unsigned int *)((unsigned int)(param_1 + 8) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  param_1[4] = 0;
  *(unsigned char *)(param_1 + 5) = 0;
  param_1[0xc] = 0;
  *(unsigned char *)(param_1 + 0xd) = 0xff;
  piVar3 = param_1 + 0x10;
  param_1[0x14] = 0;
  param_1[0x26] = 0x7f7fffff;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x34] = 0;
  param_1[0x31] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  puVar2 = (unsigned int *)((unsigned int)(param_1 + 0x28) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  param_1[0x36] = 0;
  puVar2 = (unsigned int *)((unsigned int)(param_1 + 0x2c) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  piVar1 = (int *)param_1[0x14];
  if (piVar1 != (int *)0x0) {
    (**(int (***)())(*piVar1 + 0xc))(piVar1,piVar3 != piVar1);
    param_1[0x14] = 0;
  }
  *piVar3 = (int)&lbl_821AF548;
  param_1[0x11] = fn_82313FA0;
  param_1[0x12] = param_1;
  param_1[0x13] = uStack_38;
  param_1[0x14] = piVar3;
  *(unsigned char *)(param_1 + 0x16) = 0;
  return param_1;
}
