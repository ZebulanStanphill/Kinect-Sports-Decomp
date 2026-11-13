#define true 1


unsigned __int64 fn_82A2B9A0(int param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4,unsigned int *param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  
  uVar2 = (unsigned int)*(unsigned char *)(param_1 + 0xc9);
  uVar3 = uVar2;
  if ((param_3 != 0) && (param_3 < 4)) {
    uVar1 = *(unsigned int *)("XLNI_DET_MEDIA" + param_3 * 4 + 0xc);
    trapWord(6,(unsigned __int64)uVar1,0);
    param_2 = (param_2 / uVar1) * uVar1;
  }
  while( true ) {
    puVar4 = (unsigned int *)(uVar3 * 8 + *(int *)(param_1 + 0x30));
    if ((*(unsigned char *)((int)puVar4 + 7) & 0x80) == 0) {
      return 0;
    }
    if ((*puVar4 == param_2) && ((*(unsigned char *)((int)puVar4 + 7) & 3) == param_3)) break;
    uVar3 = (unsigned int)*(unsigned char *)((int)puVar4 + 5);
    if (uVar3 == uVar2) {
      return 0;
    }
  }
  *param_4 = uVar3;
  *param_5 = puVar4;
  return 1;
}

