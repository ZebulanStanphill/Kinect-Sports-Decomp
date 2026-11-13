extern int jpeg_finish_decompress();
extern int jpeg_destroy();
extern int setjmp();
extern unsigned int iStack00000014;


unsigned __int64 fn_826EA898(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int iStack00000014;
  
  if (*(char *)(param_1 + 0x309) == '\0') {
    if (*(char *)(param_1 + 0x308) != '\0') {
      iStack00000014 = param_1;
      iVar3 = setjmp(*(unsigned int *)(param_1 + 0x304));
      iVar1 = iStack00000014;
      if (iVar3 != 0) {
        jpeg_destroy();
        *(unsigned char *)(iVar1 + 0x308) = 0;
        *(unsigned char *)(iVar1 + 0x309) = 1;
        return 0;
      }
      jpeg_finish_decompress(iStack00000014 + 8);
      *(unsigned char *)(iVar1 + 0x308) = 0;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

