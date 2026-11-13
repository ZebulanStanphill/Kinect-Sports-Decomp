typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned __int64 storeVectorElementHalfWordIndexed();
extern V16 vectorAddSignedHalfWordSaturate();
extern V16 vectorPackSignedHalfWordUnsignedSaturate();
extern void *memcpy(void *, const void *, unsigned int);


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82AAC198(int *param_1,__int64 param_2,__int64 param_3,__int64 param_4,__int64 param_5)

{
  unsigned short uVar1;
  int *piVar2;
  int iVar3;
  int iVar5;
  unsigned char uVar6;
  __int64 lVar4;
  int iVar7;
  int *piVar8;
  __int64 lVar9;
  __int64 lVar10;
  unsigned char in_vs32 [16];
  unsigned char auVar11 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs45 [16];
  unsigned char in_vs57 [16];
  unsigned char in_vs58 [16];
  
  if (0 < (int)param_5) {
    do {
      if (0 < (int)param_4) {
        iVar7 = 0;
        lVar4 = param_2;
        lVar9 = param_4;
        do {
          iVar3 = 0;
          altv300_21(in_vs58,in_vs43);
          altv300_21(in_vs57,in_vs43);
          lVar10 = 2;{ V16 _vt0 = vectorAddSignedHalfWordSaturate(in_vs32,in_vs45); memcpy(auVar11, &_vt0, 16); }{ V16 _vt1 = vectorPackSignedHalfWordUnsignedSaturate(auVar11,auVar11); memcpy(in_vs32, &_vt1, 16); }
          uVar1 = storeVectorElementHalfWordIndexed(in_vs32,0,lVar4);
          *(unsigned short *)lVar4 = uVar1;
          piVar8 = param_1;
          do {
            iVar5 = *(short *)(*piVar8 + iVar7) + 0x80;
            if (iVar5 < 0x100) {
              if (iVar5 < 0) {
                uVar6 = 0;
              }
              else {
                uVar6 = (unsigned char)iVar5;
              }
            }
            else {
              uVar6 = 0xff;
            }
            *(unsigned char *)((int)(unsigned short *)lVar4 + iVar3 + 2) = uVar6;
            iVar3 = iVar3 + 1;
            piVar8 = piVar8 + 1;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
          lVar9 = lVar9 + -1;
          lVar4 = lVar4 + 4;
          iVar7 = iVar7 + 2;
        } while (lVar9 != 0);
      }
      piVar8 = param_1 + -1;
      lVar4 = 2;
      do {
        piVar2 = piVar8 + 1;
        piVar8 = piVar8 + 1;
        *piVar8 = *piVar2 + (int)param_4 * 2;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      param_5 = param_5 + -1;
      param_2 = param_2 + param_3;
    } while (param_5 != 0);
  }
  return;
}

