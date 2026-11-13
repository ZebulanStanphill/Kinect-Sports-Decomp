typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int lbl_83265A28;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82306238(void)

{
  unsigned __int64 in_r0;
  unsigned char in_vr0 [16];
  unsigned char auVar1 [16];
  unsigned char in_vr1 [16];
  unsigned char in_vr12 [16];
  unsigned char in_vr13 [16];
  
  lbl_83265A28 = (lbl_83265A28 * 0x19660d + 0x3c6ef35f) * 0x19660d + 0x3c6ef35f;
  loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x10);
  loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x10);
  loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr0,in_vr12,4,3); memcpy(auVar1, &_vt0, 16); }
  vectorRotateLeftImmediateMaskInsert128(in_vr13,in_vr12,4,3);
  vectorRotateLeftImmediateMaskInsert128(in_vr1,auVar1,3,2);
  return;
}

