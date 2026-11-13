typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_40;
extern int fn_8255ABF8();
extern int fn_8255E320();
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


void fn_825632C8(int param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  float *pfVar3;
  float *pfVar4;
  unsigned __int64 in_r0;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  float fVar8;
  unsigned int uVar9;
  float fVar10;
  unsigned int uVar11;
  float fVar12;
  float in_register_000100d0;
  float in_register_000100d4;
  float in_register_000100d8;
  float in_vr13;
  unsigned int in_register_00010470;
  unsigned int in_register_00010474;
  unsigned int in_register_00010478;
  unsigned int in_vr71;
  unsigned char auStack_40 [64];
  
  uVar6 = ZEXT48(&stack0x00000000);
  iVar5 = *(int *)(param_2 * 0x18 + param_1 + 0xa40);
  if (iVar5 == -1) {
    puVar1 = (unsigned int *)(param_1 + 0x110U & 0xfffffff0);
    uVar7 = puVar1[1];
    uVar9 = puVar1[2];
    uVar11 = puVar1[3];
    iVar5 = (int)in_r0;
    puVar2 = (unsigned int *)((unsigned int)(auStack_40 + iVar5) & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    puVar2[2] = uVar9;
    puVar2[3] = uVar11;
    pfVar3 = (float *)((unsigned int)(auStack_40 + iVar5) & 0xfffffff0);
    fVar8 = pfVar3[1];
    fVar10 = pfVar3[2];
    fVar12 = pfVar3[3];
    loadVectorLeftIndexed128(in_r0,uVar6 - 0x80);
    pfVar4 = (float *)(iVar5 + param_3 & 0xfffffff0);
    *pfVar4 = *pfVar3 * in_register_000100d0;
    pfVar4[1] = fVar8 * in_register_000100d4;
    pfVar4[2] = fVar10 * in_register_000100d8;
    pfVar4[3] = fVar12 * in_vr13;
  }
  else {
    fn_8255E320(param_1,iVar5,uVar6 - 0x78);
    iVar5 = (int)in_r0;
    fn_8255ABF8(uVar6 - 0x78);
    puVar1 = (unsigned int *)(iVar5 + param_3 & 0xfffffff0);
    *puVar1 = in_register_00010470;
    puVar1[1] = in_register_00010474;
    puVar1[2] = in_register_00010478;
    puVar1[3] = in_vr71;
  }
  return;
}

