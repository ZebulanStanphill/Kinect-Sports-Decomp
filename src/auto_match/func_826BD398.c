void fn_826BD398(int param_1,int *param_2,unsigned __int64 param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  
  if ((param_3 & 0xffffffff) < 0x80) {
    iVar5 = *param_2;
  }
  else {
    if ((param_3 & 0xffffffff) < 0x800) {
      uVar3 = param_3 & 0xffffffff;
      param_3 = param_3 & 0xffffffff0000003f | 0xffffff80;
      *(unsigned char *)(*param_2 + param_1) = (unsigned char)(uVar3 >> 6) & 0x3f | 0xc0;
    }
    else if ((param_3 & 0xffffffff) < 0x10000) {
      *(unsigned char *)(*param_2 + param_1) = (unsigned char)((param_3 & 0xffffffff) >> 0xc) & 0x1f | 0xe0;
      iVar5 = *param_2;
      *param_2 = iVar5 + 1;
      *(unsigned char *)(iVar5 + 1 + param_1) = (unsigned char)((param_3 & 0xffffffff) >> 6) & 0x3f | 0x80;
      param_3 = param_3 & 0xffffffff0000003f | 0xffffff80;
    }
    else if ((param_3 & 0xffffffff) < 0x200000) {
      uVar3 = param_3 & 0xffffffff;
      *(unsigned char *)(*param_2 + param_1) = (unsigned char)((param_3 & 0xffffffff) >> 0x12) & 0xf | 0xf0;
      uVar4 = param_3 & 0xffffffff;
      param_3 = param_3 & 0xffffffff0000003f | 0xffffff80;
      iVar5 = *param_2;
      *param_2 = iVar5 + 1;
      *(unsigned char *)(iVar5 + 1 + param_1) = (unsigned char)(uVar4 >> 0xc) & 0x3f | 0x80;
      iVar5 = *param_2;
      *param_2 = iVar5 + 1;
      *(unsigned char *)(iVar5 + 1 + param_1) = (unsigned char)(uVar3 >> 6) & 0x3f | 0x80;
    }
    else {
      bVar2 = (unsigned char)(param_3 >> 0x18);
      if ((param_3 & 0xffffffff) < 0x4000000) {
        bVar1 = (unsigned char)((param_3 & 0xffffffff) >> 6);
        *(unsigned char *)(*param_2 + param_1) = bVar2 & 7 | 0xf8;
        iVar5 = *param_2;
        *param_2 = iVar5 + 1;
        *(unsigned char *)(iVar5 + 1 + param_1) = (unsigned char)((param_3 & 0xffffffff) >> 0x12) & 0x3f | 0x80;
        iVar5 = *param_2;
        *param_2 = iVar5 + 1;
        *(unsigned char *)(iVar5 + 1 + param_1) = (unsigned char)((param_3 & 0xffffffff) >> 0xc) & 0x3f | 0x80;
      }
      else {
        if (0x7fffffff < (param_3 & 0xffffffff)) {
          return;
        }
        bVar1 = (unsigned char)((param_3 & 0xffffffff) >> 6);
        *(unsigned char *)(*param_2 + param_1) = bVar2 >> 6 | 0xfc;
        iVar5 = *param_2;
        *param_2 = iVar5 + 1;
        *(unsigned char *)(iVar5 + 1 + param_1) = bVar2 & 0x3f | 0x80;
        iVar5 = *param_2;
        *param_2 = iVar5 + 1;
        *(unsigned char *)(iVar5 + 1 + param_1) = (unsigned char)((param_3 & 0xffffffff) >> 0x12) & 0x3f | 0x80;
        iVar5 = *param_2;
        *param_2 = iVar5 + 1;
        *(unsigned char *)(iVar5 + 1 + param_1) = (unsigned char)((param_3 & 0xffffffff) >> 0xc) & 0x3f | 0x80;
      }
      param_3 = param_3 & 0xffffffff0000003f | 0xffffff80;
      iVar5 = *param_2;
      *param_2 = iVar5 + 1;
      *(unsigned char *)(iVar5 + 1 + param_1) = bVar1 & 0x3f | 0x80;
    }
    iVar5 = *param_2 + 1;
    *param_2 = iVar5;
  }
  *(char *)(iVar5 + param_1) = (char)param_3;
  *param_2 = *param_2 + 1;
  return;
}

