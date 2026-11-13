#define true 1
extern unsigned int uStack_21;


unsigned char * fn_82F87C90(unsigned char *param_1,unsigned char *param_2)

{
  unsigned int bVar1;
  unsigned char bVar2;
  unsigned char *puVar3;
  int lVar4;
  unsigned char *cursor=param_2;
  unsigned char abStack_20 [32];
  
  for (lVar4=0; lVar4<32; ++lVar4) abStack_20[lVar4]=0;
  bVar1 = *param_2;
  while (bVar1 != 0) {
    cursor = cursor + 1;
    bVar2 = *cursor;
    abStack_20[bVar1 >> 3] = (unsigned char)(1 << (bVar1 & 7)) | abStack_20[bVar1 >> 3];
    bVar1 = bVar2;
  }
  bVar1 = *param_1;
  while( true ) {
    if (bVar1 == 0) {
      return (unsigned char *)0x0;
    }
    if ((1 << (bVar1 & 7) & (unsigned int)abStack_20[bVar1 >> 3]) != 0) break;
    param_1 = param_1 + 1;
    bVar1 = *param_1;
  }
  return param_1;
}

