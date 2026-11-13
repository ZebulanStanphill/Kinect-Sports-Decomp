#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))


unsigned __int64 fn_82768648(int param_1,unsigned int param_2)

{
  int iVar1;
  unsigned int uVar2;
  
  if (param_2 < *(unsigned int *)(param_1 + 0x38)) {
    uVar2 = *(int *)(param_1 + 0x3c) + param_2 * 8;
    iVar1 = *(int *)(*(int *)(param_1 + 0x34) + 0xc);
    return (unsigned __int64)
           CONCAT11(*(unsigned char *)
                     (*(int *)((uVar2 + 1 >> 10 & 0x3ffffc) + iVar1) + (uVar2 + 1 & 0xfff)),
                    *(unsigned char *)(*(int *)((uVar2 >> 10 & 0x3ffffc) + iVar1) + (uVar2 & 0xfff)));
  }
  return 0xffffffffffffffff;
}

