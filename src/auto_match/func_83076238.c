typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_8306E9B8();
extern int fn_83076080();
extern unsigned int lbl_82005344;
extern unsigned int lbl_82006848;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000010;
extern V16 vectorSplatImmediateSignedWord128();
extern V16 vectorUnpackD3D128();
extern void *memcpy(void *, const void *, unsigned int);


double fn_83076238(void)

{
  unsigned int *puVar1;
  float fVar2;
  int in_r0;
  char cVar3;
  double dVar4;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned char auVar5 [16];
  float in_stack_0000001c;{ V16 _vt0 = vectorSplatImmediateSignedWord128(0); memcpy(auVar5, &_vt0, 16); }
  vectorUnpackD3D128(auVar5,4);
  puVar1 = (unsigned int *)((unsigned int)(&stack0x00000010 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  cVar3 = fn_83076080((double)lbl_82006848);
  fVar2 = lbl_821AAD20;
  if (cVar3 == '\0') {
    dVar4 = (double)fn_8306E9B8((double)in_stack_0000001c);
    fVar2 = (float)(dVar4 * (double)lbl_82005344);
  }
  return (double)fVar2;
}

