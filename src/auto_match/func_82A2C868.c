extern unsigned int *auStack_30;
extern unsigned int uStack_14;
extern unsigned int uStack_16;
extern unsigned int uStack_18;
extern unsigned int uStack_1a;
extern unsigned int uStack_1c;
extern unsigned int uStack_1e;


unsigned __int64 fn_82A2C868(unsigned __int64 param_1)

{
  unsigned short uVar1;
  char cVar2;
  unsigned __int64 auStack_30 [2];
  short sStack_20;
  unsigned short uStack_1e;
  unsigned short uStack_1c;
  unsigned short uStack_1a;
  unsigned short uStack_18;
  unsigned short uStack_16;
  unsigned short uStack_14;
  
  uVar1 = (unsigned short)(param_1 >> 0x10);
  uStack_1e = uVar1 >> 5 & 0xf;
  uStack_1c = uVar1 & 0x1f;
  uStack_16 = (unsigned short)((param_1 & 0xffffffff) << 1) & 0x3e;
  uStack_1a = (unsigned short)((param_1 & 0xffffffff) >> 0xb) & 0x1f;
  uStack_18 = (unsigned short)((param_1 & 0xffffffff) >> 5) & 0x3f;
  sStack_20 = (uVar1 >> 9) + 0x7bc;
  uStack_14 = 0;
  cVar2 = RtlTimeFieldsToTime(&sStack_20,auStack_30);
  return -(unsigned __int64)(cVar2 != '\0') & auStack_30[0];
}

