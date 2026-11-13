extern int fn_827F3C20();


__int64 fn_827EFAE8(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned short uVar1;
  unsigned short uVar2;
  int iVar3;
  
  iVar3 = fn_827F3C20();
  uVar1 = *(unsigned short *)(iVar3 + 0x32);
  iVar3 = fn_827F3C20(param_1);
  uVar2 = *(unsigned short *)(iVar3 + 0x2e);
  iVar3 = fn_827F3C20(param_1);
  return (unsigned __int64)*(unsigned int *)(iVar3 + 0x84) +
         ((unsigned __int64)uVar2 + (param_2 & 0xffff) + (unsigned __int64)uVar1 * 0xc) * 4;
}

