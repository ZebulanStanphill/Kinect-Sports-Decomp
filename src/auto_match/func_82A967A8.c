typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_40;
extern int fn_82AA75B8();
extern unsigned int stack0x00000000;
extern unsigned int uStack_48;
extern unsigned __int64 storeVectorElementHalfWordIndexed();
extern V16 vectorPackD3D128();
extern V16 vectorSplatHalfWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82A967A8(int param_1,int param_2)

{
  int iVar1;
  unsigned short uVar2;
  unsigned int *puVar3;
  int in_r0;
  unsigned __int64 uVar4;
  __int64 lVar5;
  int *piVar6;
  unsigned char in_vs32 [16];
  unsigned char in_vs61 [16];
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned char in_vr63 [16];
  unsigned int uStack_48;
  unsigned char auStack_40 [64];
  
  uVar4 = ZEXT48(&stack0x00000000);
  piVar6 = (int *)(param_2 + 0xc);
  lVar5 = 4;
  puVar3 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar3 = in_register_00010010;
  puVar3[1] = in_register_00010014;
  puVar3[2] = in_register_00010018;
  puVar3[3] = in_vr1;
  do {
    altv300_21(in_vs32,in_vs61);
    vectorPackD3D128(in_vr63,5,2,2);{ V16 _vt0 = vectorSplatHalfWord(in_vs32,0); memcpy(in_vs32, &_vt0, 16); }
    uVar2 = storeVectorElementHalfWordIndexed(in_vs32,0,uVar4 - 0x50);
    *(unsigned short *)(uVar4 - 0x50) = uVar2;
    fn_82AA75B8(uVar4 - 0x48,uVar4 - 0x4c,0x40001);
    iVar1 = *piVar6;
    lVar5 = lVar5 + -1;
    piVar6 = piVar6 + 1;
    *(unsigned int *)(iVar1 * 4 + param_1) = *(unsigned int *)(iVar1 * 4 + param_1) | uStack_48;
  } while (lVar5 != 0);
  return;
}

