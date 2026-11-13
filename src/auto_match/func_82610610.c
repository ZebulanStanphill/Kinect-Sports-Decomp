typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_8257E950();
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82610610(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5)

{
  int iVar1;
  unsigned __int64 in_r0;
  unsigned char in_vr0 [16];
  unsigned char auVar2 [16];
  unsigned char in_vr1 [16];
  unsigned char in_vr12 [16];
  unsigned char in_vr13 [16];
  
  if ((param_5 == 0) && ((param_3 & 0xffffffff) != 0)) {
    iVar1 = (int)param_3;
    loadVectorLeftIndexed128(param_3,0x18);
    loadVectorLeftIndexed128(param_3,0x14);
    vectorRotateLeftImmediateMaskInsert128(in_vr13,in_vr0,4,3);
    loadVectorLeftIndexed128(param_3,0x1c);
    loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr0,in_vr12,4,3); memcpy(auVar2, &_vt0, 16); }
    vectorRotateLeftImmediateMaskInsert128(in_vr1,auVar2,3,2);
    fn_8257E950((double)*(float *)(iVar1 + 0x24),(double)*(float *)(iVar1 + 0x28),
                      **(unsigned int **)(param_1 + 0x60),*(unsigned int *)(iVar1 + 0x10),
                      *(unsigned int *)(iVar1 + 0x20),0xffffffff821cc160,0x14,
                      *(unsigned int *)(iVar1 + 0x2c),*(unsigned int **)(param_1 + 0x60),0x18);
  }
  return;
}

