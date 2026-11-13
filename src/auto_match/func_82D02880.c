__int64 fn_82D02880(unsigned int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  
  uVar2 = (unsigned __int64)(param_1 >> 8);
  if (uVar2 == 0) {
    return 0;
  }
  if (0xffff < uVar2) {
    return 0x1f;
  }
  uVar4 = (uVar2 - 0x100 & 0xffffffff) >> 0x10 & 8;
  iVar1 = (param_1 >> 8) << (int)uVar4;
  uVar3 = (unsigned __int64)(iVar1 - 0x1000U >> 0x10) & 4;
  iVar1 = iVar1 << (int)uVar3;
  uVar2 = (unsigned __int64)(iVar1 - 0x4000U >> 0x10) & 2;
  lVar5 = (((unsigned int)(iVar1 << (int)uVar2) >> 0xf) - uVar2) - (uVar3 + uVar4);
  return ((unsigned __int64)(param_1 >> ((int)lVar5 + 0x15U & 0x3f)) & 1) + (lVar5 + 0xeU & 0x7fffffff) * 2
  ;
}

