unsigned __int64 fn_82E08C10(int param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned int *param_4,unsigned int *param_5)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      if (*(char *)(param_1 + 8) == '\x01') {
        iVar1 = (int)((param_2 + (param_2 & 0x7fffffff) * 2 & 0x3fffffff) << 2);
        *param_3 = *(unsigned int *)(iVar1 + *(int *)(param_1 + 0x18));
        *param_4 = *(unsigned int *)(iVar1 + *(int *)(param_1 + 0x18) + 4);
        *param_5 = *(unsigned int *)(iVar1 + *(int *)(param_1 + 0x18) + 8);
        return 1;
      }
      if (*(char *)(param_1 + 8) == '\x02') {
        iVar1 = (int)((param_2 & 0xffffffff) << 2);
        *param_3 = *(unsigned int *)(iVar1 + *(int *)(param_1 + 0x18));
        *param_4 = *(unsigned int *)(iVar1 + *(int *)(param_1 + 0x18) + 4);
        *param_5 = *(unsigned int *)((int)((param_2 + 2 & 0xffffffff) << 2) + *(int *)(param_1 + 0x18));
        return 1;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 8) == '\x01') {
      iVar1 = (int)((param_2 + (param_2 & 0x7fffffff) * 2 & 0x7fffffff) << 1);
      *param_3 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0xc) + iVar1);
      *param_4 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0xc) + iVar1 + 2);
      *param_5 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0xc) + iVar1 + 4);
      return 1;
    }
    if (*(char *)(param_1 + 8) == '\x02') {
      iVar1 = (int)((param_2 & 0xffffffff) << 1);
      *param_3 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0xc) + iVar1);
      *param_4 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0xc) + iVar1 + 2);
      *param_5 = (unsigned int)*(unsigned short *)((int)((param_2 + 2 & 0xffffffff) << 1) + *(int *)(param_1 + 0xc))
      ;
      return 1;
    }
  }
  *param_3 = 0xffffffff;
  *param_4 = 0xffffffff;
  *param_5 = 0xffffffff;
  return 0;
}

