typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int fStack_70;
extern unsigned int fStack_74;
extern unsigned int fStack_78;
extern unsigned int fStack_7c;
extern unsigned int fStack_80;
extern unsigned int fStack_84;
extern unsigned int fStack_88;
extern unsigned int fStack_8c;
extern unsigned int fStack_90;
extern int fn_8301E2D8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831BC840;
extern unsigned int lbl_831BC868;
extern unsigned int lbl_83264604;
extern unsigned int lbl_83264670;
extern V16 vectorSplatImmediateSignedWord128();
extern void *memcpy(void *, const void *, unsigned int);


unsigned __int64 fn_8301EB08(void)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  double dVar6;
  double dVar7;
  unsigned char auVar8 [16];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;{ V16 _vt0 = vectorSplatImmediateSignedWord128(0); memcpy(auVar8, &_vt0, 16); }
  puVar4 = &lbl_83264670;
  dVar7 = (double)lbl_821AAD20;
  lVar3 = 8;
  dVar6 = (double)lbl_82002AE0;
  do {
    puVar1 = puVar4 + -0x19;
    puVar2 = &lbl_831BC840;
    lVar5 = 9;
    do {
      puVar2 = puVar2 + 1;
      puVar1 = puVar1 + 1;
      *puVar1 = *puVar2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    fStack_90 = (float)dVar6;
    fStack_8c = (float)dVar7;
    fStack_88 = (float)dVar7;
    fStack_84 = (float)dVar7;
    fStack_80 = (float)dVar6;
    fStack_7c = (float)dVar7;
    fStack_78 = (float)dVar7;
    fStack_74 = (float)dVar7;
    fStack_70 = (float)dVar6;
    fn_8301E2D8(0xffffffff831bc86c,&fStack_90,puVar4);
    memcpy((void *)((const void *)(puVar4 + -8)), auVar8, 16);
    memcpy((void *)((const void *)(puVar4 + -0xc)), auVar8, 16);
    *(unsigned char *)(puVar4 + -4) = 1;
    puVar4[9] = (float)dVar6;
    lVar3 = lVar3 + -1;
    puVar4 = puVar4 + 0x24;
  } while (lVar3 != 0);
  lbl_83264604 = 0;
  lbl_831BC868 = 0xffffffff;
  return 1;
}
