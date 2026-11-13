extern int fn_82FA5060();
extern unsigned int lbl_831BC768;


unsigned __int64 fn_83013CB8(int param_1)

{
  unsigned int iVar1;
  
  iVar1 = fn_82FA5060(lbl_831BC768,0x140);
  *(int *)(param_1 + 4) = iVar1;
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    return 0x34;
  }
  *(unsigned int *)(param_1 + 0xc) = 8;
  return 1;
}

