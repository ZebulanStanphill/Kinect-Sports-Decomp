#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int fStack_ac;
extern unsigned int fStack_b0;
extern int fn_82CE50D8();
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();


void fn_82DFD518(double param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  float fVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  unsigned char in_vs44 [16];
  float fStack_b0;
  float fStack_ac;
  
  uVar5 = ZEXT48(&stack0x00000000);
  uVar1 = *(unsigned int *)(param_2 + 0x1c);
  puVar6 = (unsigned int *)(param_2 + 0x1c);
  iVar7 = 0;
  if ('\0' < *(char *)(uVar1 + 0x20)) {
    iVar9 = 0;
    dVar13 = (double)lbl_821AAD20;
    iVar8 = 0;
    do {
      iVar11 = iVar8 + *(int *)(param_2 + 0x48);
      iVar10 = (int)*(char *)(*(int *)(uVar1 + 0x8c) + iVar9 + 0x24);
      iVar3 = iVar10 * 0x24 + param_2;
      dVar12 = dVar13;
      if ((*(int *)(iVar11 + 0x24) != 0) && (*(char *)(*(int *)(iVar11 + 0x24) + 0xe8) == '\x05')) {
        dVar12 = (double)*(float *)(iVar3 + 0x5c);
      }
      *(float *)(iVar11 + 200) = (float)dVar12;
      *(unsigned int *)(iVar11 + 0xcc) = *(unsigned int *)(iVar3 + 0x60);
      *(unsigned int *)(iVar11 + 0xd4) = *(unsigned int *)(iVar3 + 0x58);
      *(unsigned int *)(iVar11 + 0xd0) = *(unsigned int *)(iVar3 + 0x54);
      fn_82CE50D8(uVar5 - 0xa0,(unsigned __int64)*(unsigned int *)(param_2 + 0x18) + 0xf0,
                   (unsigned __int64)*puVar6 + 0x40);
      uVar2 = storeVectorElementWordIndexed(in_vs44,0,uVar5 - 0xb0);
      *(unsigned int *)(uVar5 - 0xb0) = uVar2;
      if (*(char *)(*(int *)(param_2 + 0xa0) + iVar7) == '\0') {
        fVar4 = *(float *)(iVar11 + 0xd0) + fStack_b0;
        if (*(int *)(iVar10 * 4 + param_4) != 0) {
          uVar2 = storeVectorElementWordIndexed(in_vs44,0,uVar5 - 0xac);
          *(unsigned int *)(uVar5 - 0xac) = uVar2;
          fVar4 = fVar4 - fStack_ac;
        }
        fVar4 = fVar4 / *(float *)(*(int *)(*puVar6 + 0x8c) + iVar9);
        *(float *)(iVar11 + 0xc0) = fVar4;
        *(float *)(iVar11 + 0xc4) =
             (float)((double)fVar4 * param_1 + (double)*(float *)(iVar11 + 0xc4));
      }
      else {
        *(float *)(iVar11 + 0xc0) = (float)dVar13;
      }
      uVar1 = *puVar6;
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 0xe0;
      iVar9 = iVar9 + 0x28;
    } while (iVar7 < *(char *)(uVar1 + 0x20));
  }
  return;
}

