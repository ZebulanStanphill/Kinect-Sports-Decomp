typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int lbl_83265A28;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorAddFloatingPoint();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82601D68(unsigned __int64 param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned __int64 in_r0;
  unsigned __int64 uVar3;
  unsigned char in_vs32 [16];
  unsigned char auVar4 [16];
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned char in_vr10 [16];
  unsigned char auVar8 [16];
  unsigned char in_vr11 [16];
  unsigned char in_vr12 [16];
  unsigned char auVar9 [16];
  unsigned char in_vr13 [16];
  
  uVar3 = ZEXT48(&stack0x00000000);
  puVar1 = (unsigned int *)((int)in_r0 + param_2 & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  lbl_83265A28 = ((lbl_83265A28 * 0x19660d + 0x3c6ef35f) * 0x19660d + 0x3c6ef35f) * 0x19660d +
                 0x3c6ef35f;
  loadVectorLeftIndexed128(in_r0,uVar3 - 0x10);
  loadVectorLeftIndexed128(in_r0,uVar3 - 0xc);
  loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr12,in_vr13,4,3); memcpy(auVar9, &_vt0, 16); }{ V16 _vt1 = loadVectorLeftIndexed128(in_r0,uVar3 - 8); memcpy(auVar4, &_vt1, 16); }{ V16 _vt2 = vectorRotateLeftImmediateMaskInsert128(in_vr10,in_vr11,4,3); memcpy(auVar8, &_vt2, 16); }
  vectorRotateLeftImmediateMaskInsert128(auVar8,auVar9,3,2);
  vectorAddFloatingPoint(in_vs32,auVar4);
  puVar2 = (unsigned int *)((int)in_r0 + param_2 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  return;
}

