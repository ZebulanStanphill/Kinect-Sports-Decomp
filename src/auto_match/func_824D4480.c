typedef unsigned char bool;
#define true 1
#define false 0
typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_824D4480(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  float *pfVar2;
  bool bVar3;
  unsigned __int64 in_r0;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  int iVar9;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  float in_register_000100d0;
  float in_register_000100d4;
  float in_register_000100d8;
  float in_vr13;
  float in_register_000104d0;
  float in_register_000104d4;
  float in_register_000104d8;
  float in_vr77;
  
  uVar7 = (unsigned __int64)*(unsigned int *)(param_2 + 0x11c);
  piVar1 = *(int **)(param_2 + 0x110);
  iVar9 = 0;
  uVar8 = *(unsigned int *)(param_2 + 0x120) + uVar7;
  while( true ) {
    if (((uVar7 & 0xffffffff) == (uVar8 & 0xffffffff)) || (bVar3 = true, param_4 <= iVar9)) {
      bVar3 = false;
    }
    if (!bVar3) break;
    iVar4 = 0;
    if (param_5 == 0) {
      if (piVar1 != (int *)0x0) {
        iVar4 = *piVar1;
      }
      uVar6 = uVar7;
      if ((unsigned __int64)*(unsigned int *)(iVar4 + 8) <= (uVar7 & 0xffffffff)) {
        uVar6 = uVar7 - *(unsigned int *)(iVar4 + 8);
      }
      iVar5 = param_3 + 0x2e;
      iVar4 = *(int *)((int)((uVar6 & 0xffffffff) << 2) + *(int *)(iVar4 + 4));
    }
    else {
      if (piVar1 != (int *)0x0) {
        iVar4 = *piVar1;
      }
      uVar6 = uVar7;
      if ((unsigned __int64)*(unsigned int *)(iVar4 + 8) <= (uVar7 & 0xffffffff)) {
        uVar6 = uVar7 - *(unsigned int *)(iVar4 + 8);
      }
      iVar5 = param_3 + 0x20;
      iVar4 = *(int *)(*(int *)(iVar4 + 4) + (int)((uVar6 & 0xffffffff) << 2));
    }
    uVar7 = uVar7 + 1;
    iVar9 = iVar9 + 1;
    pfVar2 = (float *)(iVar4 + iVar5 * 0x10 & 0xfffffff0);
    in_register_000100d0 = *pfVar2;
    in_register_000100d4 = pfVar2[1];
    in_register_000100d8 = pfVar2[2];
    in_vr13 = pfVar2[3];{ V16 _vt0 = vectorAddFloatingPoint(in_vs32,in_vs45); memcpy(in_vs32, &_vt0, 16); }
  }
  if (*(int *)(param_2 + 0x120) != 0) {
    loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x30);
    in_register_000104d0 = in_register_000104d0 * in_register_000100d0;
    in_register_000104d4 = in_register_000104d4 * in_register_000100d4;
    in_register_000104d8 = in_register_000104d8 * in_register_000100d8;
    in_vr77 = in_vr77 * in_vr13;
  }
  pfVar2 = (float *)((int)in_r0 + param_1 & 0xfffffff0);
  *pfVar2 = in_register_000104d0;
  pfVar2[1] = in_register_000104d4;
  pfVar2[2] = in_register_000104d8;
  pfVar2[3] = in_vr77;
  return;
}

