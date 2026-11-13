#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))


unsigned short fn_826F67F0(int param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if ((*(unsigned char *)(param_1 + 4) & 0x80) != 0) {
    iVar1 = 5;
  }
  return CONCAT11(*(unsigned char *)(param_1 + 4 + iVar1 + 1 + 1),
                  *(unsigned char *)(param_1 + 4 + iVar1 + 1));
}

