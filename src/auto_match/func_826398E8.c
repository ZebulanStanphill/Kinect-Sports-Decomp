extern unsigned int lbl_821954CC;
extern unsigned int uStack_c;


void fn_826398E8(int param_1,int param_2,float param_3)

{
  int iVar1;
  unsigned int uStack_c;
  
  iVar1 = (param_2 + 0x30) * 0x18 + param_1;
  uStack_c = (unsigned int)(__int64)(param_3 * lbl_821954CC);
  *(unsigned int *)(iVar1 + 0x10) = (uStack_c & 0x3ff) << 0xc | *(unsigned int *)(iVar1 + 0x10) & 0xffc00fff;
  *(unsigned __int64 *)(param_1 + 0x18) =
       0x8000000000000000U >> (param_2 + 0x20U & 0x7f) | *(unsigned __int64 *)(param_1 + 0x18);
  return;
}

