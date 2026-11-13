typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int lbl_821AAD20;
extern V16 vectorSplatImmediateSignedWord128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_829F9FE0(int param_1,int param_2)

{
  unsigned short uVar1;
  unsigned int uVar2;
  int in_r0;
  int iVar3;
  unsigned short *puVar4;
  unsigned short *puVar5;
  unsigned short *puVar6;
  __int64 lVar7;
  unsigned char auVar8 [16];

  iVar3 = param_2 * 0x4b50 + param_1;
  if (*(int *)(iVar3 + 0x48) == 2) {
    lVar7 = 0x12c0;
    puVar6 = (unsigned short *)(param_1 + 0x4c994);
    puVar5 = (unsigned short *)(param_1 + 0x1c3fe);
    puVar4 = (unsigned short *)(*(int *)(param_1 + 0x4b6d0) + 10);
    do {
      if ((unsigned int)puVar5[-1] == param_2 + 1U) {
        puVar5[-1] = 199;
        *puVar5 = *puVar5 & 0xfff;
      }
      if ((*puVar6 & 7) == param_2 + 1U) {
        uVar1 = *puVar6 >> 3;
        puVar4[-3] = uVar1;
        *puVar4 = uVar1;
        *puVar6 = 0;
      }
      puVar5 = puVar5 + 8;
      puVar4 = puVar4 + 8;
      puVar6 = puVar6 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }{ V16 _vt0 = vectorSplatImmediateSignedWord128(0); memcpy(auVar8, &_vt0, 16); }
  *(unsigned int *)(iVar3 + 0x3c) = 0;
  *(unsigned int *)(iVar3 + 0x40) = 0;
  *(unsigned int *)(iVar3 + 0x48) = 0;
  *(unsigned int *)(iVar3 + 0x4c) = 0;
  uVar2 = lbl_821AAD20;
  *(unsigned int *)(iVar3 + 0x50) = 0;
  *(unsigned int *)(iVar3 + 0x30) = uVar2;
  *(unsigned int *)(iVar3 + 0x44) = 0;
  *(unsigned int *)(iVar3 + 0x34) = uVar2;
  *(unsigned int *)(iVar3 + 0x54) = 1;
  *(unsigned int *)(iVar3 + 0x38) = uVar2;
  memcpy((void *)((const void *)(in_r0 + iVar3 + 0x10 & 0xfffffff0)), auVar8, 16);
  memcpy((void *)((const void *)(iVar3 + 0x20U & 0xfffffff0)), auVar8, 16);
  return;
}
