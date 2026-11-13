typedef struct { unsigned __int64 lo, hi; } V16;
extern V16 vectorMergeHighWord();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82CE5088(int param_1)

{
  unsigned int *puVar1;
  int in_r0;
  unsigned char in_vs32 [16];
  unsigned char auVar2 [16];
  unsigned char auVar3 [16];
  unsigned char in_vs38 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs44 [16];
  unsigned int in_register_00010030;
  unsigned int in_register_00010034;
  unsigned int in_register_00010038;
  unsigned int in_vr3;
  
  vectorSubtractFloatingPoint(in_vs32,in_vs44);{ V16 _vt0 = vectorMergeHighWord(in_vs40,in_vs32); memcpy(auVar3, &_vt0, 16); }{ V16 _vt1 = vectorMergeHighWord(in_vs38,in_vs39); memcpy(auVar2, &_vt1, 16); }
  vectorMergeHighWord(auVar2,auVar3);
  puVar1 = (unsigned int *)(in_r0 + param_1 & 0xfffffff0);
  *puVar1 = in_register_00010030;
  puVar1[1] = in_register_00010034;
  puVar1[2] = in_register_00010038;
  puVar1[3] = in_vr3;
  return;
}

