typedef unsigned char bool;
#define true 1
#define false 0
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_825E8220();
extern int fn_82A1E650();
extern int fn_82A1E810();
extern int fn_82A1E968();
extern int fn_82A1F160();
extern int fn_82F622E0();
extern unsigned int lbl_82195518;
extern unsigned int lbl_82195820;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_825E7EE8(__int64 param_1)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  bool bVar6;
  unsigned int *puVar7;
  int *piVar8;
  unsigned __int64 uVar9;
  unsigned int *puVar10;
  __int64 lVar11;
  unsigned int *puVar12;
  char in_RESERVE;
  unsigned char in_cr0;
  double dVar13;
  double dVar14;
  __int64 lStack_80;
  __int64 lStack_78;
  __int64 lStack_70;
  __int64 lStack_68;
  unsigned char auStack_60 [8];
  int (**pcStack_58)();
  unsigned char auStack_50 [8];
  int (**pcStack_48)();
  
  fn_825E8220(auStack_60,param_1 + 0x18);
  (*pcStack_58)(auStack_60);
  do {
    puVar7 = (unsigned int *)param_1;
    if (in_RESERVE != '\0') {
      uVar3 = storeWordConditionalIndexed((unsigned __int64)*puVar7 + 1,0,param_1);
      *puVar7 = uVar3;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  fn_82A1F160(&lStack_80);
  dVar13 = (double)lStack_80 * lbl_82195820;
  puVar10 = (unsigned int *)puVar7[1];
  dVar14 = lbl_82195518;
  do {
    if (puVar10 == (unsigned int *)puVar7[2]) {
      fn_825E8220(auStack_50,param_1 + 0x48);
      *(double *)(puVar7 + 0x10) = dVar14 + *(double *)(puVar7 + 0x10);
      (*pcStack_48)(auStack_50);
      do {
        piVar8 = (int *)(param_1 + 0x28);
        iVar1 = *piVar8;
        if (in_RESERVE != '\0') {
          iVar5 = storeWordConditionalIndexed(1,0,param_1 + 0x28);
          *piVar8 = iVar5;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      if (iVar1 == 0) {
        fn_82A1E968(&lStack_68);
        *(double *)(puVar7 + 0xe) = (double)(lStack_68 - *(__int64 *)(puVar7 + 0xc)) / dVar13;
      }
      do {
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed((unsigned __int64)*puVar7 - 1,0,param_1);
          *puVar7 = uVar3;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      return;
    }
    puVar2 = (unsigned int *)*puVar10;
    lVar11 = ZEXT48(puVar2) + 4;
    do {
      puVar12 = (unsigned int *)lVar11;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((unsigned __int64)*puVar12 + 1,0,lVar11);
        *puVar12 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (*(int *)puVar2[2] <= (int)puVar2[1]) {
      fn_82A1E810(*puVar2);
    }
    fn_82A1E650(*puVar2,0xffffffffffffffff);
    do {
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((unsigned __int64)*puVar12 - 1,0,lVar11);
        *puVar12 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    piVar8 = (int *)0x0;
    while( true ) {
      uVar3 = *puVar10;
      do {
        puVar12 = (unsigned int *)((unsigned __int64)uVar3 + 0xc);
        uVar9 = (unsigned __int64)*puVar12 + 1;
        if (in_RESERVE != '\0') {
          uVar4 = storeWordConditionalIndexed(uVar9,0,(unsigned __int64)uVar3 + 0xc);
          *puVar12 = uVar4;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      uVar4 = *(int *)(uVar3 + 0x14) - *(int *)(uVar3 + 0x10) >> 2;
      if ((int)uVar9 < (int)uVar4) {
        if ((unsigned __int64)uVar4 <= (uVar9 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82F622E0(0xffffffff821ae698);
        }
        bVar6 = true;
        piVar8 = *(int **)((int)((uVar9 & 0xffffffff) << 2) + *(int *)(uVar3 + 0x10));
      }
      else {
        bVar6 = false;
      }
      in_cr0 = !bVar6 << 1;
      if (!bVar6) break;
      fn_82A1E968(&lStack_78);
      (**(int (***)())(*piVar8 + 4))(piVar8);
      fn_82A1E968(&lStack_70);
      lStack_68 = lStack_70 - lStack_78;
      dVar14 = (double)lStack_68 / dVar13 + dVar14;
    }
    puVar10 = puVar10 + 1;
  } while( true );
}

