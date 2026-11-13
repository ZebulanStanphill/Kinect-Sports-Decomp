unsigned __int64 fn_82AA5548(unsigned __int64 param_1,unsigned int param_2,unsigned __int64 param_3,int param_4,int param_5,
                       unsigned int param_6)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  
  uVar4 = (param_3 & 0xffffffff) >> 2;
  lVar2 = -LZCOUNT(param_6);
  uVar1 = (param_2 & 6) * 4 + ((unsigned int)param_1 & 7) << ((unsigned int)(lVar2 + 0x1fU) & 0x3f);
  uVar3 = (param_2 >> 3) + uVar4 & 1;
  uVar4 = (((__int64)(int)((param_5 + 0x1fU >> 4 & 0xffffffe) * (int)uVar4 + (param_2 >> 4)) *
            (__int64)(int)(param_4 + 0x1fU >> 5) + ((param_1 & 0xffffffff) >> 5) & 0xffffffff) <<
          (lVar2 + 0x27U & 0x7f)) +
          (((unsigned __int64)param_2 & 1) * 8 + ((unsigned __int64)uVar1 & 0xfffffff0)) * 2 +
          ((param_3 & 3) << (lVar2 + 0x25U & 0x7f)) + ((unsigned __int64)uVar1 & 0xf);
  return (((uVar4 & 0xfffffffffffffe00) + uVar3 * 0x100) * 2 + (uVar4 & 0x1c0)) * 4 +
         ((param_1 & 0xfffffff8) * 8 + uVar3 * -0x80 & 0xc0) + (uVar4 & 0x3f) >>
         (lVar2 + 0x1fU & 0x7f) & 0xffffffff;
}

