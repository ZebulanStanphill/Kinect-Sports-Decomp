__int64 fn_82D41968(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  int iVar2;
  int iVar4;
  int iVar3;
  
  uVar1 = (param_2 & 0x7fffffff) >> (0x20 - *(unsigned int *)(param_1 + 0xb0) & 0x3f);
  if ((param_2 & 0x80000000) == 0) {
    if (*(int *)(param_1 + 0xb8) == 1) {
      iVar3 = param_1 + 0x20;
      goto LAB_82d419c4;
    }
    iVar3 = *(int *)(param_1 + 0xb4);
    iVar2 = uVar1 * 0x60;
  }
  else {
    iVar3 = *(int *)(param_1 + 0xc0);
    iVar2 = uVar1 << 6;
  }
  iVar3 = iVar3 + iVar2;
LAB_82d419c4:
  iVar2 = *(int *)(iVar3 + 4);
  if (iVar2 == 0) {
    return 0;
  }
  iVar4 = (unsigned int)*(unsigned short *)(iVar3 + 8) *
          (0xffffffffU >> (*(unsigned int *)(param_1 + 0xb0) & 0x3f) & param_2);
  if (*(char *)(iVar3 + 1) == '\x01') {
    return (__int64)(int)(unsigned int)*(unsigned char *)(iVar4 + iVar2) * (__int64)(int)*(short *)(iVar3 + 2) +
           (unsigned __int64)*(unsigned int *)(iVar3 + 0xc);
  }
  return (__int64)(int)(unsigned int)*(unsigned short *)(iVar4 + iVar2) * (__int64)(int)*(short *)(iVar3 + 2) +
         (unsigned __int64)*(unsigned int *)(iVar3 + 0xc);
}

