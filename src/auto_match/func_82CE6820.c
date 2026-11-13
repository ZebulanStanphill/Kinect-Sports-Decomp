typedef struct { unsigned __int64 lo, hi; } V16;
extern V16 vectorMergeHighWord();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82CE6820(int param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int *puVar1;
  int iVar2;
  __int64 lVar3;
  unsigned char in_vs32 [16];
  unsigned char auVar4 [16];
  unsigned char auVar5 [16];
  unsigned char auVar6 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  unsigned int in_register_00010020;
  unsigned int in_register_00010024;
  unsigned int in_register_00010028;
  unsigned int in_vr2;
  unsigned int in_register_00010040;
  unsigned int in_register_00010044;
  unsigned int in_register_00010048;
  unsigned int in_vr4;
  
  iVar2 = param_3 + 0x20;
  lVar3 = 3;
  do {{ V16 _vt0 = vectorMergeHighWord(in_vs41,in_vs32); memcpy(auVar6, &_vt0, 16); }{ V16 _vt1 = vectorMergeHighWord(in_vs39,in_vs40); memcpy(auVar5, &_vt1, 16); }
    vectorMergeHighWord(auVar5,auVar6);
    puVar1 = (unsigned int *)((param_1 - param_3) + iVar2 & 0xfffffff0);
    *puVar1 = in_register_00010040;
    puVar1[1] = in_register_00010044;
    puVar1[2] = in_register_00010048;
    puVar1[3] = in_vr4;
    iVar2 = iVar2 + -0x10;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  vectorSubtractFloatingPoint(in_vs41,in_vs42);{ V16 _vt2 = vectorMergeHighWord(in_vs39,in_vs32); memcpy(auVar4, &_vt2, 16); }{ V16 _vt3 = vectorMergeHighWord(auVar5,auVar6); memcpy(auVar5, &_vt3, 16); }
  vectorMergeHighWord(auVar5,auVar4);
  puVar1 = (unsigned int *)(param_1 + 0x30U & 0xfffffff0);
  *puVar1 = in_register_00010020;
  puVar1[1] = in_register_00010024;
  puVar1[2] = in_register_00010028;
  puVar1[3] = in_vr2;
  return;
}

