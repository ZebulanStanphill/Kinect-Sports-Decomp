extern int fn_8250EC68();
extern float lbl_82195714;


void fn_82304100(int param_1)

{
  int iVar1;
  float fVar2;
  
  *(unsigned int *)(param_1 + 0x50) = 0;
  if (*(char *)(param_1 + 0xc0) == '\0') {
    fn_8250EC68(param_1 + 0x6c);
  }
  iVar1 = *(int *)(param_1 + 0x54);
  fVar2 = *(float *)(iVar1 + 0x10c) * lbl_82195714;
  *(float *)(iVar1 + 0x108) = *(float *)(iVar1 + 0x108) * lbl_82195714;
  *(float *)(iVar1 + 0x10c) = fVar2;
  return;
}

