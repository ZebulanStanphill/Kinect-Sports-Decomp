extern int fn_8245B168();
extern unsigned int uStack_10;
extern unsigned int uStack_c;


unsigned __int64 fn_8245AF50(int param_1,unsigned short param_2)

{
  unsigned __int64 uVar1;
  unsigned int uStack_10;
  unsigned short uStack_c;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    *(unsigned int *)(param_1 + 0xc) = 1;
    *(unsigned int *)(param_1 + 0x1c) = 1;
    *(unsigned int *)(*(int *)(param_1 + 0x20) + 8) = 0;
    uStack_10 = *(unsigned int *)(*(int *)(param_1 + 4) + 0x5c0);
    uStack_c = param_2;
    fn_8245B168(param_1,&uStack_10,6);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff80004005;
  }
  return uVar1;
}

