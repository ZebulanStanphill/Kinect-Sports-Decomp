extern unsigned int lbl_8215F560;
extern unsigned int lbl_8215F5C0;
extern unsigned int lbl_831B1DF8;


__int64 fn_82E85820(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned char *puVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x7b38) != 0) {
    return (__int64)(int)(unsigned int)(unsigned char)(&lbl_831B1DF8)[param_2] * (__int64)(int)(param_3 & 0xffff) *
           2;
  }
  iVar2 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
  if (*(int *)(param_1 + 0x7b3c) == 0) {
    if (0x1f < iVar2) {
      iVar2 = 0x1f;
    }
    puVar1 = &lbl_8215F5C0;
  }
  else {
    if (0x5f < iVar2) {
      iVar2 = 0x5f;
    }
    puVar1 = &lbl_8215F560;
  }
  return (__int64)(int)(param_3 & 0xffff) * (__int64)(int)(unsigned int)(unsigned char)puVar1[iVar2] * 2;
}

