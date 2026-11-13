extern int fn_827F0978();


void fn_827F0F58(int param_1)

{
  unsigned int uVar1;
  unsigned short uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  
  uVar4 = fn_827F0978();
  uVar1 = (unsigned int)((uVar4 & 0xffffffff) >> 3) & 0x1ffe;
  uVar3 = (unsigned int)((uVar4 & 0xffffffff) >> 3) & 0x1ffe;
  uVar2 = (unsigned short)(1 << ((unsigned int)uVar4 & 0xf));
  *(unsigned short *)(uVar1 + param_1 + 0xec) = *(unsigned short *)(uVar1 + param_1 + 0xec) | uVar2;
  *(unsigned short *)(uVar3 + param_1 + 0xee) = *(unsigned short *)(uVar3 + param_1 + 0xee) & ~uVar2;
  return;
}

