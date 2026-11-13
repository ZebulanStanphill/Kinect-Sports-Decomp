__int64 fn_82DFA230(int param_1,__int64 param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  uVar1 = *(unsigned int *)(param_1 + 0xc);
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 8) + param_2;
  trapWord(6,(unsigned __int64)uVar1,0);
  trapWord(5,(unsigned __int64)uVar1 & ~(((uVar2 & 0x7fffffff) << 1 | (uVar2 & 0xffffffff) >> 0x1f) - 1),
           0xffff);
  return (uVar2 - (__int64)((int)uVar2 / (int)uVar1) * (__int64)(int)uVar1 & 0x7ffffff) * 0x20 +
         (unsigned __int64)*(unsigned int *)(param_1 + 0x10);
}

