typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_10;
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


/* WARNING: Removing unreachable block (ram,0x823dc228) */

unsigned __int64 fn_823DC1D0(int param_1,__int64 param_2)

{
  unsigned int uVar1;
  float *pfVar2;
  int in_r0;
  unsigned char in_vs32 [16];
  unsigned char auVar3 [16];
  unsigned char in_vs33 [16];
  float fVar4;
  float fVar5;
  unsigned char auStack_10 [16];
  
  uVar1 = in_r0 + param_1 & 0xfffffff0;
  fVar4 = *(float *)(uVar1 + 4);
  fVar5 = *(float *)(uVar1 + 8);{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs33,in_vs32); memcpy(auVar3, &_vt0, 16); }
  fVar4 = fVar4 * fVar4 + 0.0 + fVar5 * fVar5;
  pfVar2 = (float *)((unsigned int)(auStack_10 + in_r0) & 0xfffffff0);
  *pfVar2 = fVar4;
  pfVar2[1] = fVar4;
  pfVar2[2] = fVar4;
  pfVar2[3] = fVar4;
  if (1 < (unsigned int)param_2) {
    param_2 = param_2 + -1;
    do {
      param_1 = param_1 + 0x10;
      uVar1 = in_r0 + param_1 & 0xfffffff0;
      fVar4 = *(float *)(uVar1 + 4);
      fVar5 = *(float *)(uVar1 + 8);{ V16 _vt1 = vectorSubtractFloatingPoint(in_vs33,auVar3); memcpy(auVar3, &_vt1, 16); }
      fVar4 = fVar4 * fVar4 + 0.0 + fVar5 * fVar5;
      pfVar2 = (float *)((unsigned int)(auStack_10 + in_r0) & 0xfffffff0);
      *pfVar2 = fVar4;
      pfVar2[1] = fVar4;
      pfVar2[2] = fVar4;
      pfVar2[3] = fVar4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    return 0;
  }
  return 0;
}

