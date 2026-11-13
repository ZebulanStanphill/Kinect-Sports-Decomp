typedef unsigned char bool;
typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_82D78938();
extern V16 vectorMergeHighWord();
extern void *memcpy(void *, const void *, unsigned int);


unsigned int fn_82D68990(unsigned int param_1,__int64 param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  int iVar3;
  unsigned char in_vs32 [16];
  unsigned char auVar4 [16];
  unsigned char auVar5 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs41 [16];
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int in_register_00010040;
  unsigned int in_register_00010044;
  unsigned int in_register_00010048;
  unsigned int in_vr4;
  
  iVar3 = (int)param_2;
  puVar1 = (unsigned int *)(iVar3 + 0x50U & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar2 = (unsigned int *)(in_r0 + iVar3 + 0xc0 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;{ V16 _vt0 = vectorMergeHighWord(in_vs41,in_vs39); memcpy(auVar4, &_vt0, 16); }{ V16 _vt1 = vectorMergeHighWord(in_vs40,in_vs32); memcpy(auVar5, &_vt1, 16); }
  vectorMergeHighWord(auVar4,auVar5);
  puVar1 = (unsigned int *)(iVar3 + 0xd0U & 0xfffffff0);
  *puVar1 = in_register_00010040;
  puVar1[1] = in_register_00010044;
  puVar1[2] = in_register_00010048;
  puVar1[3] = in_vr4;
  iVar3 = fn_82D78938(param_2,param_2 + 0x80);
  *(bool *)param_1 = iVar3 == 0;
  return param_1;
}

