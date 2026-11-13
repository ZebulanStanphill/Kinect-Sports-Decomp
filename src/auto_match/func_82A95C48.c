typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82AA75B8();
extern unsigned int stack0x00000000;
extern unsigned int uStack_4c;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorSplatHalfWord();
extern V16 vectorUnpackD3D128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82A95C48(__int64 param_1,int param_2)

{
  unsigned __int64 in_r0;
  unsigned __int64 uVar1;
  __int64 lVar2;
  __int64 lVar3;
  unsigned char auVar4 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vr0 [16];
  unsigned int uStack_4c;
  
  uVar1 = ZEXT48(&stack0x00000000);
  param_2 = param_2 + 0x18;
  lVar2 = uVar1 - 0x44;
  lVar3 = 4;
  do {
    fn_82AA75B8(uVar1 - 0x48,((unsigned __int64)*(unsigned int *)(param_2 + -0xc) & 0x3fffffff) * 4 + param_1
                      ,0x40001);
    param_2 = param_2 + 4;
    lVar3 = lVar3 + -1;{ V16 _vt0 = loadVectorLeftIndexed128(in_r0,uVar1 - 0x50); memcpy(auVar4, &_vt0, 16); }{ V16 _vt1 = vectorSplatHalfWord(auVar4,0); memcpy(auVar4, &_vt1, 16); }
    vectorUnpackD3D128(in_vr0,0x14);
    altv300_30(auVar4,in_vs41);
    lVar2 = lVar2 + 4;
    *(unsigned int *)lVar2 = uStack_4c;
  } while (lVar3 != 0);
  altv300_23(in_vs42,in_vs43);
  altv300_21(auVar4,in_vs41);
  return;
}

