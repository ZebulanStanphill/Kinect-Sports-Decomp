typedef struct { unsigned __int64 lo, hi; } V16;
#define TBLr 0
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_82CE6768();
extern unsigned int iStack_a4;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_ac;
extern V16 vectorMergeHighWord();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D51008(int param_1,int param_2,int param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int in_r0;
  int iVar4;
  unsigned char **ppuVar5;
  unsigned __int64 *puVar6;
  __int64 lVar7;
  unsigned char in_vs32 [16];
  unsigned char in_vs33 [16];
  unsigned char in_vs34 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char auVar8 [16];
  unsigned char auVar9 [16];
  unsigned char auVar10 [16];
  unsigned char auVar11 [16];
  unsigned char in_vs60 [16];
  unsigned char in_vs61 [16];
  unsigned char in_vs62 [16];
  unsigned char in_vs63 [16];
  unsigned int in_register_00010160;
  unsigned int in_register_00010164;
  unsigned int in_register_00010168;
  unsigned int in_vr22;
  unsigned int in_register_00010170;
  unsigned int in_register_00010174;
  unsigned int in_register_00010178;
  unsigned int in_vr23;
  int *piStack_b0;
  unsigned int uStack_ac;
  unsigned char *puStack_a8;
  int iStack_a4;
  unsigned char auStack_a0 [16];
  unsigned char auStack_90 [32];
  unsigned char auStack_70 [112];
  
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar4 + 4);
  if (puVar1 < *(unsigned int **)(iVar4 + 0xc)) {
    *puVar1 = "TtrcTransform";
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(unsigned int **)(iVar4 + 4) = puVar1 + 3;
  }
  ppuVar5 = &puStack_a8;
  puVar6 = (unsigned __int64 *)(param_2 + -8);
  lVar7 = 6;
  do {
    puVar6 = puVar6 + 1;
    ppuVar5 = ppuVar5 + 2;
    *(unsigned __int64 *)ppuVar5 = *puVar6;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  uVar2 = *(unsigned int *)(param_3 + 8);
  vectorSubtractFloatingPoint(in_vs32,in_vs43);
  vectorSubtractFloatingPoint(in_vs44,in_vs43);{ V16 _vt0 = vectorMergeHighWord(in_vs34,in_vs32); memcpy(auVar11, &_vt0, 16); }{ V16 _vt1 = vectorMergeHighWord(in_vs63,in_vs33); memcpy(auVar10, &_vt1, 16); }{ V16 _vt2 = vectorMergeHighWord(in_vs62,in_vs32); memcpy(auVar9, &_vt2, 16); }{ V16 _vt3 = vectorMergeHighWord(in_vs60,in_vs61); memcpy(auVar8, &_vt3, 16); }
  vectorMergeHighWord(auVar10,auVar11);
  vectorMergeHighWord(auVar8,auVar9);
  puVar1 = (unsigned int *)((unsigned int)(auStack_a0 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010170;
  puVar1[1] = in_register_00010174;
  puVar1[2] = in_register_00010178;
  puVar1[3] = in_vr23;
  puVar1 = (unsigned int *)((unsigned int)(auStack_90 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010160;
  puVar1[1] = in_register_00010164;
  puVar1[2] = in_register_00010168;
  puVar1[3] = in_vr22;
  fn_82CE6768(auStack_70,uVar2);
  piStack_b0 = *(int **)(param_1 + 0x14);
  puStack_a8 = auStack_70;
  uStack_ac = 0;
  iStack_a4 = param_3;
  (**(int (***)())(*piStack_b0 + 0x24))(piStack_b0,auStack_a0,&piStack_b0,param_4);
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar4 + 4);
  if (puVar1 < *(unsigned int **)(iVar4 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(unsigned int **)(iVar4 + 4) = puVar1 + 3;
  }
  return;
}

