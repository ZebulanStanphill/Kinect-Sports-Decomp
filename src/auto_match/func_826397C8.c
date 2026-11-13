extern unsigned char lbl_821CC078;


void fn_826397C8(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (param_2 + 0x30) * 0x18 + param_1;
  if (((*(unsigned int *)(iVar1 + 0x10) & 0x800) != 0) || ((*(unsigned int *)(iVar1 + 0x10) & 0x400) != 0)) {
    *(unsigned int *)(iVar1 + 0xc) =
         (*(unsigned int *)(&lbl_821CC078 + param_3 * 4) & 7) << 0x19 | *(unsigned int *)(iVar1 + 0xc) & 0xf1ffffff;
    *(unsigned __int64 *)(param_1 + 0x18) =
         0x8000000000000000U >> (param_2 + 0x20U) | *(unsigned __int64 *)(param_1 + 0x18);
  }
  *(char *)(param_1 + param_2 + 0x2f44) = (char)param_3;
  return;
}

