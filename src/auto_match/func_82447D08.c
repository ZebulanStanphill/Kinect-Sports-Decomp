typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_8255AE78();
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorAddFloatingPoint();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


unsigned __int64 fn_82447D08(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned int param_4)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned __int64 in_r0;
  unsigned char auVar3 [16];
  unsigned char auVar4 [16];
  unsigned int uVar5;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned char in_vr0 [16];
  unsigned int uVar9;
  unsigned char auVar6 [16];
  unsigned char in_vr1 [16];
  unsigned char in_vr12 [16];
  unsigned char in_vr13 [16];
  
  piVar1 = *(int **)(param_2 + 0x40);
  if (piVar1[((param_4 & 0xff) + 0xc) * 0xc] == 0) {{ V16 _vt0 = loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x20); memcpy(auVar3, &_vt0, 16); }{ V16 _vt1 = loadVectorLeftIndexed128(in_r0,0xffffffff821cc160); memcpy(auVar4, &_vt1, 16); }
    vectorRotateLeftImmediateMaskInsert128(in_vr12,in_vr13,4,3);{ V16 _vt2 = vectorRotateLeftImmediateMaskInsert128(in_vr0,in_vr13,4,3); memcpy(auVar6, &_vt2, 16); }
    vectorRotateLeftImmediateMaskInsert128(in_vr1,auVar6,3,2);
    fn_8255AE78((double)*(float *)(*(int *)(*(int *)(*piVar1 + 0x174) + 4) + 0x10));
    puVar2 = (unsigned int *)
             (*(int *)(*(int *)(**(int **)(param_2 + 0x40) + 0x174) + 4) + 0x20U & 0xfffffff0);
    uVar5 = *puVar2;
    uVar7 = puVar2[1];
    uVar8 = puVar2[2];
    uVar9 = puVar2[3];
    vectorAddFloatingPoint(auVar3,auVar4);
  }
  else {
    puVar2 = (unsigned int *)((unsigned int)(piVar1 + (param_4 & 0xff) * 0xc + 0x94) & 0xfffffff0);
    uVar5 = *puVar2;
    uVar7 = puVar2[1];
    uVar8 = puVar2[2];
    uVar9 = puVar2[3];
  }
  puVar2 = (unsigned int *)((int)in_r0 + (int)param_1 & 0xfffffff0);
  *puVar2 = uVar5;
  puVar2[1] = uVar7;
  puVar2[2] = uVar8;
  puVar2[3] = uVar9;
  return param_1;
}

