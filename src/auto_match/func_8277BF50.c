unsigned __int64 fn_8277BF50(int param_1,unsigned int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  unsigned int uVar3;
  
  iVar2 = *(int *)(param_1 + 0x3c);
  fVar1 = *(float *)(*(int *)((param_2 >> 8 & 0xfffffc) + iVar2) + (param_2 & 0x3ff) * 8 + 4);
  uVar3 = param_2 - 1;
  if ((int)param_2 < param_3) {
    if ((fVar1 < *(float *)(*(int *)((uVar3 >> 8 & 0xfffffc) + iVar2) + (uVar3 * 8 & 0x1ff8) + 4))
       && (fVar1 <= *(float *)(*(int *)((param_2 + 1 >> 8 & 0xfffffc) + iVar2) +
                               ((param_2 + 1) * 8 & 0x1ff8) + 4))) {
      return 1;
    }
  }
  else if (fVar1 < *(float *)(*(int *)((uVar3 >> 8 & 0xfffffc) + iVar2) + (uVar3 * 8 & 0x1ff8) + 4))
  {
    return 1;
  }
  return 0;
}

