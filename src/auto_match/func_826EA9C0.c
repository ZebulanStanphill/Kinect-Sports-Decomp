extern int jpeg_read_coefficients();
extern int jpeg_destroy();
extern int setjmp();
extern unsigned int iStack00000014;


unsigned __int64 fn_826EA9C0(int param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int uVar4;
  int iStack00000014;
  unsigned int *puStack0000001c;
  
  if (*(char *)(param_1 + 0x309) == '\0') {
    iStack00000014 = param_1;
    puStack0000001c = param_2;
    iVar3 = setjmp(*(unsigned int *)(param_1 + 0x304));
    iVar1 = iStack00000014;
    if (iVar3 == 0) {
      uVar4 = jpeg_read_coefficients(iStack00000014 + 8);
      *puStack0000001c = uVar4;
      uVar2 = 1;
    }
    else {
      jpeg_destroy(iStack00000014 + 8);
      *(unsigned char *)(iVar1 + 0x308) = 0;
      uVar2 = 0;
      *(unsigned char *)(iVar1 + 0x309) = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

