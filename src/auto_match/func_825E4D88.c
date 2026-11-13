typedef struct { unsigned __int64 lo, hi; } V16;
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82545160();
extern int fn_8257F5C0();
extern int fn_828389E0();
extern int fn_8284C850();
extern int fn_8284C858();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_825E4D88(double param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  unsigned int uVar1;
  unsigned __int64 in_r0;
  unsigned __int64 uVar2;
  unsigned char in_vr0 [16];
  unsigned char auVar3 [16];
  unsigned char in_vr1 [16];
  unsigned char in_vr2 [16];
  unsigned char in_vr10 [16];
  unsigned char in_vr11 [16];
  unsigned char in_vr12 [16];
  unsigned char auVar4 [16];
  unsigned char in_vr13 [16];
  
  uVar1 = ltcg_pool_0_0f;
  uVar2 = ZEXT48(&stack0x00000000);
  fn_8284C858();
  fn_8284C850(param_2);
  loadVectorLeftIndexed128(param_3,4);
  loadVectorLeftIndexed128(in_r0,param_3);{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr0,in_vr13,4,3); memcpy(auVar3, &_vt0, 16); }
  loadVectorLeftIndexed128(in_r0,uVar2 - 0xa0);
  loadVectorLeftIndexed128(in_r0,uVar2 - 0x98);
  loadVectorLeftIndexed128(0xffffffff821ca45c,4);
  loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);
  vectorRotateLeftImmediateMaskInsert128(auVar3,in_vr13,4,3);{ V16 _vt1 = vectorRotateLeftImmediateMaskInsert128(in_vr12,in_vr11,4,3); memcpy(auVar4, &_vt1, 16); }{ V16 _vt2 = vectorRotateLeftImmediateMaskInsert128(in_vr10,in_vr11,4,3); memcpy(auVar3, &_vt2, 16); }
  vectorRotateLeftImmediateMaskInsert128(in_vr1,auVar3,3,2);
  vectorRotateLeftImmediateMaskInsert128(in_vr2,auVar4,3,2);
  fn_8257F5C0(uVar2 - 0x80,CONCAT44(uVar1,(float)param_1),(unsigned __int64)uVar1 << 0x20,param_5,
                    uVar1,uVar2 - 0xa0,0xffffffff821ca45c,uVar2 - 0x98);
  fn_828389E0(param_2,0,param_7);
  fn_82545160(param_6,uVar2 - 0x80);
  return;
}

