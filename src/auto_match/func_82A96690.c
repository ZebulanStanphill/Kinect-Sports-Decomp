typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_40;
extern int fn_82AA75B8();
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementHalfWordIndexed();
extern V16 vectorPackD3D128();
extern V16 vectorSplatHalfWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82A96690(int param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned short uVar4;
  unsigned int *puVar5;
  int in_r0;
  unsigned __int64 uVar6;
  __int64 lVar7;
  int *piVar8;
  unsigned char in_vs32 [16];
  unsigned char in_vs61 [16];
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned char in_vr63 [16];
  short sStack_4e;
  unsigned char auStack_40 [64];
  
  uVar6 = ZEXT48(&stack0x00000000);
  piVar8 = (int *)(param_2 + 0xc);
  lVar7 = 4;
  puVar5 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar5 = in_register_00010010;
  puVar5[1] = in_register_00010014;
  puVar5[2] = in_register_00010018;
  puVar5[3] = in_vr1;
  do {
    altv300_21(in_vs32,in_vs61);
    vectorPackD3D128(in_vr63,5,2,2);{ V16 _vt0 = vectorSplatHalfWord(in_vs32,0); memcpy(in_vs32, &_vt0, 16); }
    uVar4 = storeVectorElementHalfWordIndexed(in_vs32,0,uVar6 - 0x4e);
    *(unsigned short *)(uVar6 - 0x4e) = uVar4;
    iVar1 = piVar8[4];
    uVar2 = piVar8[8];
    fn_82AA75B8(uVar6 - 0x50,uVar6 - 0x50,0x20001);
    iVar3 = *piVar8;
    lVar7 = lVar7 + -1;
    piVar8 = piVar8 + 1;
    *(unsigned short *)(iVar3 * 2 + param_1) =
         *(unsigned short *)(iVar3 * 2 + param_1) | sStack_4e << (uVar2 & 0x3f) & (unsigned short)iVar1;
  } while (lVar7 != 0);
  return;
}

