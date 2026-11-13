typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_30;
extern int fn_822ABBF0();
extern int fn_82359558();
extern int fn_823C9098();
extern int fn_823CA0A8();
extern int fn_823CA708();
extern unsigned int iStack_4c;
extern unsigned int lbl_821AC4A4;
extern unsigned int lbl_821B2FB8;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D2F48;
extern unsigned int lbl_831D2F58;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_823C8D58(int param_1)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned __int64 in_r0;
  int iVar4;
  unsigned __int64 uVar3;
  unsigned int uVar5;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned char in_vr0 [16];
  unsigned char auVar6 [16];
  unsigned int uVar9;
  unsigned char in_vr2 [16];
  unsigned char in_vr12 [16];
  unsigned char in_vr13 [16];
  unsigned char **ppuStack_50;
  int iStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned char auStack_30 [24];
  
  iVar4 = fn_82359558(*(unsigned int *)(param_1 + 0x240),*(unsigned int *)(param_1 + 0x10));
  if (iVar4 == 0) {
    uVar3 = fn_823CA0A8(param_1);
    fn_823CA708(param_1,uVar3);
  }
  else {
    iStack_4c = 0;
    ppuStack_50 = &lbl_821B2FB8;
    fn_822ABBF0(*(unsigned int *)((*(int **)(iVar4 + 0x1c))[4] * 4 + **(int **)(iVar4 + 0x1c)),
                      &ppuStack_50);
    ppuStack_50 = &lbl_821AC4A4;
    if (iStack_4c != 0) {
      loadVectorLeftIndexed128(0xffffffff831d2d90,0x1c0);
      iVar4 = **(int **)(*(int *)(param_1 + 0x240) + 8);
      loadVectorLeftIndexed128(0xffffffff831d2d90,0x1bc);
      vectorRotateLeftImmediateMaskInsert128(in_vr13,in_vr0,4,3);
      loadVectorLeftIndexed128(0xffffffff831d2d90,0x1c4);
      piVar1 = *(int **)(((unsigned int)LZCOUNT(*(unsigned int *)(iStack_4c + 0x2c)) >> 3 & 4) + iVar4);
      loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr0,in_vr12,4,3); memcpy(auVar6, &_vt0, 16); }
      vectorRotateLeftImmediateMaskInsert128(in_vr2,auVar6,3,2);
      fn_823C9098((double)lbl_831D2F48,
                        (double)*(float *)(*(int *)(piVar1[4] * 4 + *piVar1) + 0x14),
                        (double)ltcg_pool_0_0f,iVar4,0x1c4,0xffffffff821d0000,auStack_30,&uStack_48,
                        0xffffffff821cc160);
      puVar2 = (unsigned int *)((unsigned int)(auStack_30 + (int)in_r0) & 0xfffffff0);
      uVar5 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      *(unsigned int *)(param_1 + 0x228) = lbl_831D2F58;
      *(unsigned int *)(param_1 + 0x214) = uStack_48;
      puVar2 = (unsigned int *)(param_1 + 0x1a0U & 0xfffffff0);
      *puVar2 = uVar5;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      *(unsigned int *)(param_1 + 0x218) = uStack_44;
      *(unsigned int *)(param_1 + 0x21c) = uStack_40;
    }
  }
  return;
}

