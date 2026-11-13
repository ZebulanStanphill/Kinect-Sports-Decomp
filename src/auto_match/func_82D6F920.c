#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_270;
extern unsigned int fStack_280;
extern unsigned int lbl_82134504;
extern unsigned int stack0x00000000;
extern unsigned int uStack_264;
extern unsigned __int64 storeVectorElementWordIndexed();


void fn_82D6F920(int param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned __int64 in_r0;
  unsigned __int64 uVar3;
  int *piVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  unsigned char in_vs44 [16];
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  float fStack_280;
  unsigned char auStack_270 [12];
  unsigned int uStack_264;
  
  uVar3 = ZEXT48(&stack0x00000000);
  uVar5 = 0;
  dVar9 = (double)lbl_82134504;
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    iVar7 = 0;
    iVar8 = 0;
    uVar5 = 0;
    do {
      piVar4 = (int *)(**(int (***)())(*(int *)(*(int *)(param_1 + 0x20) + 0x10) + 0x14))
                                (*(int *)(param_1 + 0x20) + 0x10,
                                 *(unsigned int *)(iVar8 + *(int *)(param_1 + 0x24)),uVar3 - 0x260);
      (**(int (***)())(*piVar4 + 0x38))(piVar4,param_2,uVar3 - 0x270);
      puVar2 = (unsigned int *)((unsigned int)(auStack_270 + (int)in_r0) & 0xfffffff0);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      uVar12 = puVar2[2];
      uVar13 = puVar2[3];
      uVar1 = storeVectorElementWordIndexed(in_vs44,0,uVar3 - 0x280);
      *(unsigned int *)(uVar3 - 0x280) = uVar1;
      if (dVar9 < (double)fStack_280) {
        puVar2 = (unsigned int *)((int)in_r0 + param_3 & 0xfffffff0);
        *puVar2 = uVar10;
        puVar2[1] = uVar11;
        puVar2[2] = uVar12;
        puVar2[3] = uVar13;
        uVar5 = ((int)(uStack_264 & 0xc0ffffff) >> 4) +
                (unsigned int)((int)(uStack_264 & 0xc0ffffff) < 0 && (uStack_264 & 0xf) != 0) + iVar7;
        dVar9 = (double)fStack_280;
      }
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + 4;
      iVar7 = iVar7 + 3;
    } while (iVar6 < *(int *)(param_1 + 0x28));
  }
  *(unsigned int *)(param_3 + 0xc) = uVar5 | 0x3f000000;
  return;
}

