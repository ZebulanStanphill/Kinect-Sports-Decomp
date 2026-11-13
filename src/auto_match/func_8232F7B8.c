typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_822BFB28();
extern int fn_822C1928();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8232F7B8(int param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  __int64 lVar6;
  unsigned int uVar7;
  unsigned int *puVar8;
  int iVar9;
  __int64 lVar10;
  int iVar11;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned char auStack_40 [4];
  int *piStack_3c;
  
  *(unsigned int *)(param_1 + 0x18) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0;
  iVar3 = fn_822C1928((unsigned __int64)*param_2 + 4,0xffffffff821acc04,0,9);
  if (iVar3 != -1) {
    *(unsigned int *)(param_1 + 0x18) = 1;
  }
  iVar3 = fn_822C1928((unsigned __int64)*param_2 + 4,0xffffffff821acc10,0,8);
  if (iVar3 != -1) {
    *(unsigned int *)(param_1 + 0x14) = 1;
  }
  lVar10 = (unsigned __int64)*param_2 + 4;
  iVar3 = fn_822C1928(lVar10,0xffffffff821acc7c,0,5);
  if ((iVar3 == -1) && (iVar3 = fn_822C1928(lVar10,0xffffffff821acc30,0,9), iVar3 == -1)) {
    iVar3 = fn_822C1928(lVar10,0xffffffff821acce8,0,8);
    uVar7 = 0;
    if (iVar3 == -1) goto LAB_8232f8a0;
  }
  uVar7 = 1;
LAB_8232f8a0:
  *(unsigned int *)(param_1 + 0x1c) = (unsigned int)LZCOUNT(uVar7) >> 5;
  iVar3 = fn_822C1928((unsigned __int64)*param_2 + 4,0xffffffff821acc7c,0,5);
  if (iVar3 != -1) {
    piVar4 = (int *)fn_822BFB28(auStack_40,*(unsigned int *)(param_1 + 0xc));
    iVar3 = piVar4[1];
    iVar1 = *piVar4;
    iVar11 = 0;
    iVar9 = 0;
    if (iVar3 != 0) {
      cVar5 = fn_8223AAC0(iVar3);
      in_cr0 = (cVar5 == '\0') << 1;
      if (cVar5 != '\0') {
        iVar11 = iVar1;
        iVar9 = iVar3;
      }
    }
    if (ZEXT48(piStack_3c) != 0) {
      lVar10 = ZEXT48(piStack_3c) + 8;
      do {
        puVar8 = (unsigned int *)lVar10;
        lVar6 = (unsigned __int64)*puVar8 - 1;
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed(lVar6,0,lVar10);
          *puVar8 = uVar2;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      if ((int)lVar6 == 0) {
        (**(int (***)())(*piStack_3c + 4))();
      }
    }
    if (iVar11 != 0) {
      *(unsigned int *)(iVar11 + 0x10) = 1;
      *(unsigned int *)(iVar11 + 0xc) = 5;
      *(unsigned int *)(iVar11 + 0x14) = 4;
    }
    if (iVar9 != 0) {
      fn_822315A0(iVar9);
    }
  }
  return;
}

