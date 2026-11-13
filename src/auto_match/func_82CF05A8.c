__int64 fn_82CF05A8(__int64 param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  
  uVar5 = param_1 - 1;
  uVar1 = (uVar5 & 0xffffffff) >> 1;
  uVar2 = (uVar1 | uVar5 & 0xffffffff) >> 2;
  uVar3 = (uVar2 | uVar1 | uVar5 & 0xffffffff) >> 4;
  uVar4 = (uVar3 | uVar2 | uVar1 | uVar5 & 0xffffffff) >> 8;
  return ((uVar4 | uVar3 | uVar2 | uVar1 | uVar5 & 0xffffffff) >> 0x10 |
         uVar4 | uVar3 | uVar2 | uVar1 | uVar5) + 1;
}

