extern unsigned int lbl_821956B4;
extern unsigned int lbl_821C9844;
extern unsigned int lbl_831E4D44;


void fn_825D4FE8(unsigned int *param_1,int param_2,unsigned int param_3)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  param_1[0xe] = param_3;
  param_1[0xf] = param_2;
  uVar4 = lbl_831E4D44;
  uVar3 = lbl_821956B4;
  *param_1 = &lbl_821C9844;
  param_1[6] = uVar3;
  param_1[0x10] = 0;
  param_1[7] = uVar4;
  param_1[0x11] = 0;
  param_1[0xc] = 1;
  param_1[0xd] = 1;
  *(unsigned char *)(param_1 + 0x12) = 0;
  *(unsigned char *)((int)param_1 + 0x49) = 0;
  puVar2 = (unsigned int *)((unsigned int)(param_1 + 8) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  iVar1 = *(int *)(*(int *)(param_2 + 0xb8) + 4);
  param_1[4] = 0;
  param_1[5] = 0;
  puVar2 = *(unsigned int **)(iVar1 + 0x124);
  *(unsigned int **)(iVar1 + 0x124) = param_1 + 4;
  param_1[4] = iVar1 + 0x120;
  param_1[5] = puVar2;
  if (puVar2 == (unsigned int *)0x0) {
    return;
  }
  *puVar2 = param_1 + 4;
  return;
}

