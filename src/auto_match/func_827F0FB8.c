extern int fn_827F0978();


void fn_827F0FB8(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned short uVar3;
  unsigned __int64 uVar4;
  
  uVar4 = fn_827F0978();
  uVar1 = (unsigned int)((uVar4 & 0xffffffff) >> 3) & 0x1ffe;
  uVar3 = ~(unsigned short)(1 << ((unsigned int)uVar4 & 0xf));
  uVar2 = (unsigned int)((uVar4 & 0xffffffff) >> 3) & 0x1ffe;
  *(unsigned short *)(uVar1 + param_1 + 0xec) = uVar3 & *(unsigned short *)(uVar1 + param_1 + 0xec);
  *(unsigned short *)(uVar2 + param_1 + 0xee) = *(unsigned short *)(uVar2 + param_1 + 0xee) & uVar3;
  return;
}

