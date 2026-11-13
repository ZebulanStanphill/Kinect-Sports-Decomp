typedef struct { unsigned __int64 lo, hi; } V16;
#define TBLr 0
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int iStack_4c;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_50;
extern V16 vectorMergeHighWord();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D8CE68(int param_1,int param_2,unsigned __int64 param_3)

{
  int *piVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned __int64 in_r0;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  unsigned char in_vs32 [16];
  unsigned char auVar7 [16];
  unsigned char auVar8 [16];
  unsigned char in_vs36 [16];
  unsigned char in_vs37 [16];
  unsigned char in_vs38 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned char in_vs56 [16];
  unsigned char in_vs57 [16];
  unsigned char in_vs58 [16];
  unsigned char in_vs60 [16];
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int in_register_00010150;
  unsigned int in_register_00010154;
  unsigned int in_register_00010158;
  unsigned int in_vr21;
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [16];
  unsigned int uStack_50;
  int iStack_4c;
  
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar6 = *(unsigned int **)(iVar4 + 4);
  if (puVar6 < *(unsigned int **)(iVar4 + 0xc)) {
    *puVar6 = "TtrcPhantom";
    uVar2 = TBLr;
    puVar6[1] = (int)uVar2;
    *(unsigned int **)(iVar4 + 4) = puVar6 + 3;
  }
  uStack_50 = *(unsigned int *)(param_2 + 0x24);
  if ((*(char *)(param_2 + 0x20) == '\0') ||
     (iStack_4c = *(int *)(*(int *)(param_1 + 8) + 0x7c), iStack_4c == 0)) {
    iStack_4c = 0;
  }
  else {
    iStack_4c = iStack_4c + 0x10;
  }
  uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0xd4);
  puVar6 = *(unsigned int **)(param_1 + 0xd0);
  while (uVar5 = uVar5 - 1, -1 < (__int64)uVar5) {
    piVar1 = *(int **)*puVar6;
    if (piVar1 != (int *)0x0) {
      vectorSubtractFloatingPoint(in_vs45,in_vs42);{ V16 _vt0 = vectorMergeHighWord(in_vs38,in_vs32); memcpy(auVar8, &_vt0, 16); }{ V16 _vt1 = vectorMergeHighWord(in_vs36,in_vs37); memcpy(auVar7, &_vt1, 16); }
      vectorMergeHighWord(auVar7,auVar8);
      puVar3 = (unsigned int *)((unsigned int)(auStack_70 + (int)in_r0) & 0xfffffff0);
      *puVar3 = in_register_00010010;
      puVar3[1] = in_register_00010014;
      puVar3[2] = in_register_00010018;
      puVar3[3] = in_vr1;
      vectorSubtractFloatingPoint(in_vs44,in_vs60);{ V16 _vt2 = vectorMergeHighWord(in_vs58,in_vs32); memcpy(auVar8, &_vt2, 16); }{ V16 _vt3 = vectorMergeHighWord(in_vs56,in_vs57); memcpy(auVar7, &_vt3, 16); }
      vectorMergeHighWord(auVar7,auVar8);
      puVar3 = (unsigned int *)((unsigned int)(auStack_60 + (int)in_r0) & 0xfffffff0);
      *puVar3 = in_register_00010150;
      puVar3[1] = in_register_00010154;
      puVar3[2] = in_register_00010158;
      puVar3[3] = in_vr21;
      (**(int (***)())(*piVar1 + 0x24))(piVar1,auStack_70,*puVar6,param_3);
    }
    puVar6 = puVar6 + 1;
  }
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar6 = *(unsigned int **)(iVar4 + 4);
  if (puVar6 < *(unsigned int **)(iVar4 + 0xc)) {
    *puVar6 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar6[1] = (int)uVar2;
    *(unsigned int **)(iVar4 + 4) = puVar6 + 3;
  }
  return;
}

