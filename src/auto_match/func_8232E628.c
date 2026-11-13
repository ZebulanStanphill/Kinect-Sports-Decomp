typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_58;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_822BFB28();
extern int fn_82520780();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821917B0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8232E628(int param_1,unsigned int param_2)

{
  int iVar1;
  unsigned int uVar2;
  int *piVar3;
  char cVar5;
  int iVar4;
  __int64 lVar6;
  __int64 lVar7;
  unsigned int *puVar9;
  unsigned __int64 uVar8;
  int iVar10;
  int iVar11;
  char in_RESERVE;
  unsigned char in_cr0;
  double dVar12;
  double dVar13;
  unsigned char auStack_58 [4];
  int *piStack_54;
  
  if (*(unsigned int *)(param_1 + 0x10) != param_2) {
    if (param_2 == 0) {
      *(unsigned int *)(param_1 + 0x14) = 0;
    }
    else if (param_2 == 1) {
      *(unsigned int *)(param_1 + 0x2c) = 0;
      piVar3 = (int *)fn_822BFB28(auStack_58,*(unsigned int *)(param_1 + 0xc));
      iVar4 = piVar3[1];
      iVar1 = *piVar3;
      iVar11 = 0;
      iVar10 = 0;
      if (iVar4 != 0) {
        cVar5 = fn_8223AAC0(iVar4);
        in_cr0 = (cVar5 == '\0') << 1;
        if (cVar5 != '\0') {
          iVar11 = iVar1;
          iVar10 = iVar4;
        }
      }
      if (ZEXT48(piStack_54) != 0) {
        lVar7 = ZEXT48(piStack_54) + 8;
        do {
          puVar9 = (unsigned int *)lVar7;
          lVar6 = (unsigned __int64)*puVar9 - 1;
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed(lVar6,0,lVar7);
            *puVar9 = uVar2;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
        if ((int)lVar6 == 0) {
          (**(int (***)())(*piStack_54 + 4))();
        }
      }
      uVar8 = (unsigned __int64)*(unsigned int *)(*(int *)(iVar11 + 4) + 0x78c) - 1;
      uVar8 = ((uVar8 & 0xffffffff) >> 0x1f) - 1 & uVar8;
      if (6 < (int)uVar8) {
        uVar8 = 7;
      }
      dVar13 = (double)*(float *)((int)((uVar8 + 0xb & 0xffffffff) << 2) + iVar11);
      iVar4 = fn_82520780(dVar13,0xffffffff83265a28);
      if (iVar4 == 0) {
        *(unsigned int *)(param_1 + 0x2c) = 1;
        dVar12 = (double)lbl_8218E8E8;
        *(unsigned int *)(param_1 + 0x30) = (unsigned int)(dVar13 < dVar12);
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        *(float *)(param_1 + 0x34) =
             (float)((double)((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
                     (double)lbl_821917B0 + dVar12);
      }
      else {
        iVar4 = fn_82520780((double)*(float *)(param_1 + 0x24),0xffffffff83265a28);
        if (iVar4 != 0) {
          fn_8232E628(param_1,2);
          if (iVar10 == 0) {
            return;
          }
          fn_822315A0(iVar10);
          return;
        }
        *(unsigned int *)(param_1 + 0x2c) = 0;
      }
      if (iVar10 != 0) {
        fn_822315A0(iVar10);
      }
    }
    else if (param_2 < 3) {
      *(unsigned int *)(param_1 + 0x20) = 0;
    }
    *(unsigned int *)(param_1 + 0x10) = param_2;
  }
  return;
}

