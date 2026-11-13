typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82F6A524();
extern int fn_82F6A570();
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82573310(void)

{
  unsigned __int64 in_r0;
  unsigned __int64 uVar1;
  unsigned char in_vr0 [16];
  unsigned char in_vr1 [16];
  unsigned char in_vr11 [16];
  unsigned char in_vr12 [16];
  unsigned char in_vr13 [16];
  unsigned char auVar2 [16];
  
  uVar1 = ZEXT48(&stack0x00000000);
  fn_82F6A524();
  loadVectorLeftIndexed128(in_r0,uVar1 - 0x80);
  loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);
  loadVectorLeftIndexed128(in_r0,uVar1 - 0x78);
  loadVectorLeftIndexed128(in_r0,uVar1 - 0x7c);
  vectorRotateLeftImmediateMaskInsert128(in_vr11,in_vr12,4,3);{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr13,in_vr0,4,3); memcpy(auVar2, &_vt0, 16); }
  vectorRotateLeftImmediateMaskInsert128(in_vr1,auVar2,3,2);
  fn_82F6A570();
  return;
}

