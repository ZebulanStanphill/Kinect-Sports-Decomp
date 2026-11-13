extern unsigned int *puRam83296194;
extern int fn_825269D0();
extern unsigned int lbl_832960B4;
extern unsigned int lbl_832960C0;
extern unsigned int lbl_8329615C;
extern unsigned int lbl_8329618C;
extern unsigned int uRam832960bc;


int fn_8251CD18(unsigned __int64 param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;

  iVar2 = 0;
  puVar3 = &lbl_8329615C;
  do {
    if (*puVar3 != 0) {
      fn_825269D0(0xf,param_1);
    }
    if ((((param_1 & 0xffffffff) == (unsigned __int64)*puVar3) ||
        ((param_1 & 0xffffffff) == (unsigned __int64)puVar3[-1])) && (puVar3[1] == 0)) {
      puVar3[1] = 1;
      uVar1 = lbl_8329618C;
      lbl_8329618C = puVar3 + -1;
      iVar2 = 1;
      fn_825269D0(0x11,*puVar3);
      puRam83296194 = (unsigned int *)(-(unsigned int)(puRam83296194 != puVar3 + -1) & (unsigned int)puRam83296194);
      lbl_8329618C = (unsigned int *)uVar1;
    }
    puVar3 = puVar3 + -0xc;
  } while (-0x7cd69f35 < (int)puVar3);
  if (iVar2 != 0) {
    lbl_832960B4 = lbl_832960B4 + 1;
    uRam832960bc = 0;
    lbl_832960C0 = 0;
  }
  return iVar2;
}
