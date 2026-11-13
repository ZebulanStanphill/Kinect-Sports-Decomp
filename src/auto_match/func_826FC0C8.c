extern int fn_8267BE38();
extern int fn_8267C5B0();
extern int fn_826F8818();


void fn_826FC0C8(int *param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int iVar3;
  
  fn_826F8818(param_1 + 1,param_1);
  *(unsigned char *)(param_1 + 8) = *(unsigned char *)(param_1 + 8) >> 1 & 0x40 | *(unsigned char *)(param_1 + 8) & 0xbf;
  if ((param_2 & 0xffffffff) == 0) {
    puVar1 = (unsigned int *)*param_1;
    if (puVar1 != (unsigned int *)0x0) {
      uVar2 = *puVar1;
      *puVar1 = (unsigned int)((unsigned __int64)uVar2 - 1);
      if ((unsigned __int64)uVar2 - 1 == 0) {
        fn_8267BE38();
      }
    }
    *param_1 = 0;
  }
  else {
    iVar3 = fn_8267C5B0(param_2);
    puVar1 = (unsigned int *)*param_1;
    if (puVar1 != (unsigned int *)0x0) {
      uVar2 = *puVar1;
      *puVar1 = (unsigned int)((unsigned __int64)uVar2 - 1);
      if ((unsigned __int64)uVar2 - 1 == 0) {
        fn_8267BE38(puVar1);
      }
    }
    *param_1 = iVar3;
  }
  *(unsigned char *)(param_1 + 8) = (unsigned char)(LZCOUNT((int)param_2) << 2) & 0x80 | *(unsigned char *)(param_1 + 8) & 0x7f
  ;
  return;
}

