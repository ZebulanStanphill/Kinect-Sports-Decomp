extern int jpeg_read_header();
extern int jpeg_destroy();
extern int setjmp();
extern unsigned int iStack00000014;


unsigned __int64 fn_826EA808(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned char uVar4;
  int iStack00000014;
  
  if (*(char *)(param_1 + 0x309) == '\0') {
    iStack00000014 = param_1;
    iVar3 = setjmp(*(unsigned int *)(param_1 + 0x304));
    iVar1 = iStack00000014;
    if (iVar3 == 0) {
      if (*(int *)(iStack00000014 + 0x1c) != 0xca) {
        jpeg_read_header(iStack00000014 + 8,1);
      }
      uVar4 = 1;
      uVar2 = 1;
    }
    else {
      jpeg_destroy(iStack00000014 + 8);
      uVar4 = 0;
      uVar2 = 0;
      *(unsigned char *)(iVar1 + 0x309) = 1;
    }
    *(unsigned char *)(iVar1 + 0x308) = uVar4;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

