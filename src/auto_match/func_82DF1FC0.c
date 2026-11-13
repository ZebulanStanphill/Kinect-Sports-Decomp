typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_70;
extern int fn_82CE50D8();
extern int fn_82CE5110();
extern int fn_82D89BD8();
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 loadVectorLeftIndexed128();
extern V16 vectorMergeHighWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82DF1FC0(int param_1,int param_2)

{
  int iVar1;
  int (**pcVar2)();
  unsigned int uVar3;
  float *pfVar4;
  unsigned __int64 in_r0;
  unsigned __int64 uVar5;
  double dVar6;
  unsigned char in_vs32 [16];
  unsigned char in_vs34 [16];
  unsigned char auVar7 [16];
  unsigned char auVar8 [16];
  unsigned char in_vs38 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs41 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float in_register_000101f0;
  float in_register_000101f4;
  float in_register_000101f8;
  float in_vr31;
  unsigned char auStack_70 [112];
  
  uVar5 = ZEXT48(&stack0x00000000);
  if (*(char *)(param_1 + 0x38) != '\0') {
    iVar1 = *(int *)(param_1 + 0x18);
    pfVar4 = (float *)(param_1 + 0x20U & 0xfffffff0);
    fVar9 = *pfVar4;
    fVar10 = pfVar4[1];
    fVar11 = pfVar4[2];
    fVar12 = pfVar4[3];{ V16 _vt0 = vectorMergeHighWord(in_vs41,in_vs32); memcpy(auVar8, &_vt0, 16); }{ V16 _vt1 = vectorMergeHighWord(in_vs38,in_vs39); memcpy(auVar7, &_vt1, 16); }
    vectorMergeHighWord(auVar7,auVar8);
    uVar3 = storeVectorElementWordIndexed(in_vs34,0,uVar5 - 0x80);
    *(unsigned int *)(uVar5 - 0x80) = uVar3;
    loadVectorLeftIndexed128(in_r0,uVar5 - 0x80);
    pfVar4 = (float *)((unsigned int)(auStack_70 + (int)in_r0) & 0xfffffff0);
    *pfVar4 = fVar9 * in_register_000101f0;
    pfVar4[1] = fVar10 * in_register_000101f4;
    pfVar4[2] = fVar11 * in_register_000101f8;
    pfVar4[3] = fVar12 * in_vr31;
    pcVar2 = *(int (***)())(*(int *)(iVar1 + 0xe0) + 0x14);
    (*pcVar2)(iVar1 + 0xe0,uVar5 - 0x60,pcVar2,*(int *)(iVar1 + 0xe0),uVar5 - 0x80);
    fn_82CE5110(uVar5 - 0x70,uVar5 - 0x60,uVar5 - 0x70);
    fn_82CE50D8(uVar5 - 0x70,iVar1 + 0xf0,uVar5 - 0x70);
    dVar6 = (double)*(float *)(param_2 + 8);
    fn_82D89BD8(iVar1);
    (**(int (***)())(*(int *)(iVar1 + 0xe0) + 0x60))
              (dVar6,iVar1 + 0xe0,*(int *)(iVar1 + 0xe0),uVar5 - 0x70);
  }
  return;
}

