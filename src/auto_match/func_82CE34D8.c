extern int fn_82CE3488();
extern int fn_82F68CC0();


__int64 fn_82CE34D8(unsigned __int64 param_1,unsigned __int64 param_2,int *param_3,int param_4)

{
  int iVar1;
  __int64 lVar2;
  unsigned __int64 *puVar3;
  unsigned short *apuStack_20 [4];
  
  lVar2 = fn_82CE3488(param_1,apuStack_20);
  if (-1 < lVar2) {
    if (param_4 == 0) {
      fn_82F68CC0(param_2,apuStack_20[0],*param_3);
    }
    else {
      iVar1 = *param_3;
      puVar3 = (unsigned __int64 *)param_2;
      if (iVar1 == 1) {
        *(unsigned char *)puVar3 = *(unsigned char *)apuStack_20[0];
      }
      else if (iVar1 == 2) {
        *(unsigned short *)puVar3 = *apuStack_20[0] << 8 | *apuStack_20[0] >> 8;
      }
      else if (iVar1 == 4) {
        *(unsigned int *)puVar3 =
             (unsigned int)*(unsigned char *)((int)apuStack_20[0] + 3) << 0x18 |
             (unsigned int)*(unsigned char *)(apuStack_20[0] + 1) << 0x10 | (unsigned int)(unsigned char)*apuStack_20[0] << 8 |
             (unsigned int)*(unsigned char *)apuStack_20[0];
      }
      else if (iVar1 == 8) {
        *puVar3 = ((unsigned __int64)*(unsigned char *)((int)apuStack_20[0] + 7) << 0x18 |
                   (unsigned __int64)*(unsigned char *)(apuStack_20[0] + 3) << 0x10 |
                   (unsigned __int64)*(unsigned char *)((int)apuStack_20[0] + 5) << 8 |
                  (unsigned __int64)*(unsigned char *)(apuStack_20[0] + 2)) << 0x20 |
                  (unsigned __int64)*(unsigned char *)((int)apuStack_20[0] + 3) << 0x18 |
                  (unsigned __int64)*(unsigned char *)(apuStack_20[0] + 1) << 0x10 |
                  (unsigned __int64)(unsigned char)*apuStack_20[0] << 8 | (unsigned __int64)*(unsigned char *)apuStack_20[0];
      }
      else {
        lVar2 = -0x7ff8fff3;
      }
    }
  }
  return lVar2;
}

