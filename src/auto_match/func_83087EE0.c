typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_50;
extern V16 vectorMergeHighWord();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


double fn_83087EE0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  unsigned int *puVar2;
  int in_r0;
  char *pcVar3;
  int iVar4;
  int iVar5;
  unsigned char in_vs32 [16];
  unsigned char auVar6 [16];
  unsigned char auVar7 [16];
  unsigned char in_vs37 [16];
  unsigned char in_vs38 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs56 [16];
  unsigned char in_vs57 [16];
  unsigned char in_vs58 [16];
  unsigned char in_vs60 [16];
  unsigned char in_vs61 [16];
  unsigned int in_register_00010020;
  unsigned int in_register_00010024;
  unsigned int in_register_00010028;
  unsigned int in_vr2;
  unsigned int in_register_00010150;
  unsigned int in_register_00010154;
  unsigned int in_register_00010158;
  unsigned int in_vr21;
  unsigned char auStack_50 [80];
  
  piVar1 = *(int **)(*(char *)(param_2 + 5) + param_2);
  param_2 = *(char *)(param_2 + 5) + param_2;
  iVar4 = *(int *)(param_1 + 0x10) * param_3 + *(int *)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    iVar5 = param_3 * 0x30 + *(int *)(param_1 + 4);
    pcVar3 = (char *)(**(int (***)())(**(int **)(param_1 + 8) + 4))
                               (auStack_50,*(int **)(param_1 + 8),iVar5,param_2);
    if (*pcVar3 != '\0') {
      vectorSubtractFloatingPoint(in_vs44,in_vs43);{ V16 _vt0 = vectorMergeHighWord(in_vs39,in_vs32); memcpy(auVar7, &_vt0, 16); }{ V16 _vt1 = vectorMergeHighWord(in_vs37,in_vs38); memcpy(auVar6, &_vt1, 16); }
      vectorMergeHighWord(auVar6,auVar7);
      puVar2 = (unsigned int *)(in_r0 + param_1 + 0x20 & 0xfffffff0);
      *puVar2 = in_register_00010020;
      puVar2[1] = in_register_00010024;
      puVar2[2] = in_register_00010028;
      puVar2[3] = in_vr2;
      vectorSubtractFloatingPoint(in_vs60,in_vs61);{ V16 _vt2 = vectorMergeHighWord(in_vs58,in_vs32); memcpy(auVar7, &_vt2, 16); }{ V16 _vt3 = vectorMergeHighWord(in_vs56,in_vs57); memcpy(auVar6, &_vt3, 16); }
      vectorMergeHighWord(auVar6,auVar7);
      puVar2 = (unsigned int *)(param_1 + 0x30U & 0xfffffff0);
      *puVar2 = in_register_00010150;
      puVar2[1] = in_register_00010154;
      puVar2[2] = in_register_00010158;
      puVar2[3] = in_vr21;
      *(unsigned int *)(param_1 + 0x40) = *(unsigned int *)(iVar5 + 0x24);
      (**(int (***)())(*piVar1 + 0x24))(piVar1,param_1 + 0x20,param_2,iVar4);
    }
  }
  return (double)*(float *)(iVar4 + 4);
}

