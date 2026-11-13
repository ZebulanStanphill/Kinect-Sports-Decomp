typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82E01D98(unsigned __int64 param_1,int param_2,unsigned int param_3,int param_4)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  int in_r0;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned char in_vr11 [16];
  unsigned char auVar9 [16];

  uVar5 = lbl_821AAD20;
  iVar2 = *(int *)(param_2 + 0x48);
  uVar1 = *(unsigned int *)
           (*(int *)(*(int *)(param_2 + 0x34) + 8) +
            ((param_3 & 0xff) + (param_3 & 0xff) * 2) * 0x10 + 0x20);
  *(unsigned int *)(param_4 + 0x24) = 0;
  *(unsigned int *)(param_4 + 0x48) = uVar1;
  *(unsigned int *)(param_4 + 0x4c) = uVar5;
  puVar3 = (unsigned int *)((param_3 & 0xff) * 0xe0 + iVar2 + 0x60 & 0xfffffff0);
  uVar6 = puVar3[1];
  uVar7 = puVar3[2];
  uVar8 = puVar3[3];
  puVar4 = (unsigned int *)(in_r0 + param_4 & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  uVar6 = lbl_82002AE0;{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr11,*(unsigned char (*) [16])(in_r0 + param_4 + 0x10 & 0xfffffff0),1,0); memcpy(auVar9, &_vt0, 16); }
  memcpy((void *)((const void *)(in_r0 + param_4 + 0x10 & 0xfffffff0)), auVar9, 16);
  *(unsigned int *)(param_4 + 0x20) = uVar5;
  *(unsigned int *)(param_4 + 0x50) = uVar6;
  *(unsigned int *)(param_4 + 0x1c) = uVar1;
  return;
}
