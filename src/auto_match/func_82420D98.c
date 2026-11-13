typedef unsigned char bool;
#define true 1
#define false 0
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_50;
extern int fn_8241CEB8();
extern int fn_824209C8();
extern int fn_82421000();
extern int fn_82421138();
extern int fn_82421270();
extern int fn_825200A8();


void fn_82420D98(int param_1)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int uVar3;
  bool bVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  unsigned int uVar10;
  unsigned char auStack_50 [80];
  
  if (*(int *)(param_1 + 8) == 0) {
    if (*(int *)(**(int **)(param_1 + 0xc) + 0x174) == 2) {
      uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x10) + 900);
      for (uVar10 = *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x380); uVar10 < uVar1;
          uVar10 = uVar10 + 0xd0) {
        if (*(int *)(uVar10 + 0x94) != 0) {
          piVar2 = *(int **)(*(int *)(uVar10 + 0x94) + 0x8c0);
          if (piVar2 == (int *)0x0) {
            uVar5 = 0xffffffff82196288;
          }
          else {
            uVar5 = (**(int (***)())(*piVar2 + 0x20))();
          }
          if ((uVar5 & 0xffffffff) == 0) {
LAB_82420fa8:
            if ((((*(unsigned int *)(uVar10 + 0x9c) & 1) != 0) &&
                (*(int *)(**(int **)(param_1 + 0xc) + 0x8a8) != 0)) &&
               (*(float *)(**(int **)(param_1 + 0xc) + 0x84c) < *(float *)(uVar10 + 0xa4))) {
              fn_82421270(param_1);
            }
          }
          else {
            uVar8 = ZEXT48(*(unsigned int **)(param_1 + 0xc));
            lVar9 = 0xcc0;
            uVar7 = (unsigned __int64)**(unsigned int **)(param_1 + 0xc);
            do {
              iVar6 = fn_825200A8(uVar5,lVar9 + uVar7);
              if (iVar6 != 0) {
                bVar4 = true;
                goto LAB_82420f1c;
              }
              lVar9 = lVar9 + 4;
            } while ((int)lVar9 < 0xce8);
            bVar4 = false;
LAB_82420f1c:
            if (bVar4) {
              uVar3 = *(unsigned int *)uVar8;
              if ((*(int *)(uVar3 + 0x8a0) != 0) &&
                 (*(float *)(uVar3 + 0x83c) < *(float *)(uVar10 + 0xa4))) {
                fn_82421000(param_1);
              }
            }
            else {
              uVar7 = (unsigned __int64)*(unsigned int *)uVar8;
              iVar6 = fn_825200A8(uVar5,uVar7 + 0xcbc);
              if (iVar6 == 0) goto LAB_82420fa8;
              if ((*(int *)((int)uVar7 + 0x8a4) != 0) &&
                 (*(float *)((int)uVar7 + 0x85c) < *(float *)(uVar10 + 0xa4))) {
                fn_82421138(param_1);
              }
            }
          }
        }
      }
    }
  }
  else {
    while (iVar6 = fn_8241CEB8(*(unsigned int *)(param_1 + 0xc),param_1,6), iVar6 != 0) {
      fn_824209C8(auStack_50,param_1);
      fn_82421000((double)*(float *)(iVar6 + 0x10),param_1);
    }
    while (iVar6 = fn_8241CEB8(*(unsigned int *)(param_1 + 0xc),param_1,4), iVar6 != 0) {
      fn_824209C8(auStack_50,param_1);
      fn_82421138((double)*(float *)(iVar6 + 0x10),param_1);
    }
    while (iVar6 = fn_8241CEB8(*(unsigned int *)(param_1 + 0xc),param_1,5), iVar6 != 0) {
      fn_824209C8(auStack_50,param_1);
      fn_82421270((double)*(float *)(iVar6 + 0x10),param_1);
    }
  }
  return;
}

