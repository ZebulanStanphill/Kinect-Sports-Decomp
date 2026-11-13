unsigned int fn_82547CF0(unsigned int param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
  int iVar1;
  unsigned int uVar2;
  
  iVar1 = -(int)LZCOUNT(param_4);
  uVar2 = (param_2 & 6) * 4 + (param_1 & 7) << (iVar1 + 0x1fU & 0x3f);
  uVar2 = ((param_3 + 0x1fU >> 5) * (param_2 >> 5) + (param_1 >> 5) << (iVar1 + 0x26U & 0x3f)) +
          ((param_2 & 1) * 8 + (uVar2 & 0xfffffff0)) * 2 + ((param_2 & 8) << (iVar1 + 0x22U & 0x3f))
          + (uVar2 & 0xf);
  return (((param_2 & 0x10) * 0x10 + (uVar2 & 0xfffffe00)) * 2 + (uVar2 & 0x1c0)) * 4 +
         ((param_2 & 0x7ffffff8) * 2 + param_1 & 0x18) * 8 + (uVar2 & 0x3f) >>
         (iVar1 + 0x1fU & 0x3f);
}

