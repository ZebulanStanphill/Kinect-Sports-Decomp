typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned __int64 storeVectorElementByteIndexed();
extern V16 vectorAddSignedHalfWordSaturate();
extern V16 vectorPackSignedHalfWordUnsignedSaturate();
extern void *memcpy(void *, const void *, unsigned int);


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82AAC0E0(int *param_1,__int64 param_2,__int64 param_3,__int64 param_4,__int64 param_5)

{
  int iVar2;
  unsigned char uVar3;
  __int64 lVar1;
  int iVar4;
  __int64 lVar5;
  unsigned char in_vs32 [16];
  unsigned char auVar6 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs45 [16];
  unsigned char in_vs62 [16];
  
  if (0 < (int)param_5) {
    do {
      if (0 < (int)param_4) {
        iVar4 = 0;
        lVar1 = param_2;
        lVar5 = param_4;
        do {
          altv300_21(in_vs62,in_vs43);{ V16 _vt0 = vectorAddSignedHalfWordSaturate(in_vs32,in_vs45); memcpy(auVar6, &_vt0, 16); }{ V16 _vt1 = vectorPackSignedHalfWordUnsignedSaturate(auVar6,auVar6); memcpy(in_vs32, &_vt1, 16); }
          uVar3 = storeVectorElementByteIndexed(in_vs32,0,lVar1);
          *(unsigned char *)lVar1 = uVar3;
          iVar2 = *(short *)(*param_1 + iVar4) + 0x80;
          if (iVar2 < 0x100) {
            if (iVar2 < 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = (unsigned char)iVar2;
            }
          }
          else {
            uVar3 = 0xff;
          }
          ((unsigned char *)lVar1)[1] = uVar3;
          lVar1 = lVar1 + 2;
          iVar4 = iVar4 + 2;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      param_5 = param_5 + -1;
      param_2 = param_2 + param_3;
      *param_1 = *param_1 + (int)param_4 * 2;
    } while (param_5 != 0);
  }
  return;
}

