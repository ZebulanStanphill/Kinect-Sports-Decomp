#define true 1
typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int fStack_34;
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D10EF8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned __int64 in_r0;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned char in_vs32 [16];
  unsigned char in_vs40 [16];
  unsigned char auVar9 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char auVar10 [16];
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  
  uVar6 = ZEXT48(&stack0x00000000);
  uVar8 = param_3;
  uVar7 = param_2;
LAB_82d10f28:
  do {{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs43,in_vs32); memcpy(auVar10, &_vt0, 16); }
    while( true ) {{ V16 _vt1 = vectorSubtractFloatingPoint(in_vs42,in_vs32); memcpy(auVar9, &_vt1, 16); }
      uVar11 = storeVectorElementWordIndexed(in_vs40,0,uVar6 - 0x40);
      *(unsigned int *)(uVar6 - 0x40) = uVar11;
      uVar11 = storeVectorElementWordIndexed(auVar10,0,uVar6 - 0x3c);
      *(unsigned int *)(uVar6 - 0x3c) = uVar11;
      if (fStack_3c <= fStack_40) break;
      param_2 = param_2 + 1;
    }
    while( true ) {
      uVar11 = storeVectorElementWordIndexed(auVar10,0,uVar6 - 0x38);
      *(unsigned int *)(uVar6 - 0x38) = uVar11;{ V16 _vt2 = vectorSubtractFloatingPoint(auVar10,in_vs32); memcpy(in_vs42, &_vt2, 16); }
      uVar11 = storeVectorElementWordIndexed(auVar9,0,uVar6 - 0x34);
      *(unsigned int *)(uVar6 - 0x34) = uVar11;
      if (fStack_34 <= fStack_38) break;
      uVar8 = uVar8 - 1;
    }
    if ((int)param_2 <= (int)uVar8) {
      if ((int)uVar8 != (int)param_2) {
        iVar3 = (int)((uVar8 & 0xffffffff) << 4) + (int)param_1;
        iVar4 = (int)((param_2 & 0xffffffff) << 4) + (int)param_1;
        iVar2 = (int)in_r0;
        puVar1 = (unsigned int *)(iVar2 + iVar3 & 0xfffffff0);
        uVar11 = *puVar1;
        uVar12 = puVar1[1];
        uVar13 = puVar1[2];
        uVar14 = puVar1[3];
        puVar1 = (unsigned int *)(iVar2 + iVar4 & 0xfffffff0);
        uVar15 = puVar1[1];
        uVar16 = puVar1[2];
        uVar17 = puVar1[3];
        puVar5 = (unsigned int *)(iVar2 + iVar3 & 0xfffffff0);
        *puVar5 = *puVar1;
        puVar5[1] = uVar15;
        puVar5[2] = uVar16;
        puVar5[3] = uVar17;
        puVar1 = (unsigned int *)(iVar2 + iVar4 & 0xfffffff0);
        *puVar1 = uVar11;
        puVar1[1] = uVar12;
        puVar1[2] = uVar13;
        puVar1[3] = uVar14;
      }
      uVar8 = uVar8 - 1;
      param_2 = param_2 + 1;
      if ((int)param_2 <= (int)uVar8) goto LAB_82d10f28;
    }
    if ((int)uVar7 < (int)uVar8) {
      fn_82D10EF8(param_1,uVar7,uVar8,param_4);
    }
    uVar8 = param_3;
    uVar7 = param_2;
    if ((int)param_3 <= (int)param_2) {
      return;
    }
  } while( true );
}

