unsigned __int64 fn_82E76450(unsigned __int64 param_1,char param_2,unsigned short *param_3,int *param_4)

{
  unsigned __int64 uVar1;
  int iVar2;
  
  if (param_2 == '\x01') {
    uVar1 = (unsigned __int64)*(unsigned char *)param_3;
    iVar2 = *param_4 + 1;
  }
  else if (param_2 == '\x02') {
    iVar2 = *param_4 + 2;
    uVar1 = ((unsigned __int64)*param_3 & 0xff) << 8 | (unsigned __int64)(*param_3 >> 8);
  }
  else {
    if (param_2 != '\x03') {
      return 0;
    }
    uVar1 = (unsigned __int64)*(unsigned char *)((int)param_3 + 3) << 0x18 |
            (unsigned __int64)*(unsigned char *)(param_3 + 1) << 0x10 | (unsigned __int64)(unsigned char)*param_3 << 8 |
            (unsigned __int64)*(unsigned char *)param_3;
    iVar2 = *param_4 + 4;
  }
  *param_4 = iVar2;
  return uVar1;
}

