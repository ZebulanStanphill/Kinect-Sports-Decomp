extern int fn_827FA1E8();


unsigned int fn_827F7028(int param_1)

{
  unsigned short uVar1;
  unsigned int lVar2;
  
  uVar1 = *(unsigned short *)(param_1 + 0x2e);
  lVar2 = fn_827FA1E8();
  lVar2 = lVar2 + uVar1;
  return (*(unsigned short *)(param_1 + 0x32) * 0xc + lVar2 & 0x3fffffff) * 4 +
         (__int64)((int)(*(unsigned short *)(param_1 + 0x32) + 7) >> 3) + ((lVar2 + 7U & 0xffffffff) >> 3);
}

