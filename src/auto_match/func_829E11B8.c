#define true 1


unsigned __int64 fn_829E11B8(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  
  puVar2 = (unsigned int *)*param_1;
  param_1[2] = 0;
  *(unsigned short *)(param_1 + 3) = 0;
  *(unsigned short *)((int)param_1 + 0xe) = 1;
  uVar1 = *puVar2;
  while( true ) {
    if ((uVar1 & 0xffffc000) == 0) {
      return -(unsigned __int64)(*(short *)(param_1 + 3) == 0) & 0xffffffff80004005;
    }
    if ((puVar2[1] & 0x1ff00) == 0) {
      if (*(short *)(param_1 + 3) != 0) {
        return 0xffffffff80004005;
      }
      *(unsigned short *)(param_1 + 3) = (unsigned short)(puVar2[1] >> 0x11);
    }
    uVar1 = (*puVar2 >> 3 & 0x7fe) + (*puVar2 >> 0xe) + param_1[2];
    param_1[2] = uVar1;
    if ((unsigned int)param_1[1] <= uVar1) break;
    if ((unsigned int)*(unsigned short *)((int)param_1 + 0xe) <= puVar2[1] >> 0x11) {
      *(unsigned short *)((int)param_1 + 0xe) = (unsigned short)(puVar2[1] >> 0x11) + 1;
    }
    puVar2 = (unsigned int *)((int)puVar2 + (*puVar2 >> 3 & 0x7fe) + (*puVar2 >> 0xe));
    uVar1 = *puVar2;
  }
  return 0xffffffff80004005;
}

