extern unsigned int lbl_821957EC;
extern unsigned int uStack_c;


void fn_82639840(int param_1,int param_2,float param_3)

{
  int iVar1;
  unsigned int uStack_c;
  
  iVar1 = (param_2 + 0x30) * 0x18 + param_1;
  uStack_c = (unsigned int)(__int64)(param_3 * lbl_821957EC);
  *(unsigned int *)(iVar1 + 0x14) = (uStack_c & 0xf) << 5 | *(unsigned int *)(iVar1 + 0x14) & 0xfffffe1f;
  *(unsigned __int64 *)(param_1 + 0x18) =
       0x8000000000000000U >> (param_2 + 0x20U & 0x7f) | *(unsigned __int64 *)(param_1 + 0x18);
  return;
}

