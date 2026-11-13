typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_822BFB28();
extern int fn_822C72E0();
extern int fn_8232EC10();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8232F988(int param_1)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned int *puVar4;
  char cVar6;
  int iVar5;
  unsigned __int64 uVar3;
  __int64 lVar7;
  __int64 lVar8;
  unsigned int *puVar9;
  int iVar10;
  int *piVar11;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned char auStack_40 [4];
  int *piStack_3c;
  
  puVar4 = (unsigned int *)fn_822BFB28(auStack_40,*(unsigned int *)(param_1 + 0xc));
  iVar5 = puVar4[1];
  piVar1 = (int *)*puVar4;
  iVar10 = 0;
  piVar11 = (int *)0x0;
  if (iVar5 != 0) {
    cVar6 = fn_8223AAC0(iVar5);
    in_cr0 = (cVar6 == '\0') << 1;
    if (cVar6 != '\0') {
      iVar10 = iVar5;
      piVar11 = piVar1;
    }
  }
  if (ZEXT48(piStack_3c) != 0) {
    lVar8 = ZEXT48(piStack_3c) + 8;
    do {
      puVar9 = (unsigned int *)lVar8;
      lVar7 = (unsigned __int64)*puVar9 - 1;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(lVar7,0,lVar8);
        *puVar9 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar7 == 0) {
      (**(int (***)())(*piStack_3c + 4))();
    }
  }
  if ((piVar11 == (int *)0x0) || (*(int *)(*(int *)(param_1 + 8) + 0x28) != 0)) goto LAB_8232fafc;
  iVar5 = (**(int (***)())(*piVar11 + 0x18))(piVar11);
  if ((iVar5 == 5) || (*(int *)(param_1 + 0x1c) == 0)) {
    uVar2 = piVar11[2];
    if (uVar2 == 0) {
      if (*(int *)(param_1 + 0x18) != 0) goto LAB_8232fafc;
      uVar3 = 0xffffffff821acc04;
    }
    else if (uVar2 == 1) {
      if (*(int *)(param_1 + 0x14) != 0) goto LAB_8232fafc;
      uVar3 = 0xffffffff821acc10;
    }
    else {
      if ((2 < uVar2) || ((*(int *)(param_1 + 0x14) == 0 && (*(int *)(param_1 + 0x18) == 0))))
      goto LAB_8232fafc;
      uVar3 = 0xffffffff821aca8c;
    }
  }
  else {
    iVar5 = piVar11[4];
    uVar3 = (**(int (***)())(*piVar11 + 0x18))(piVar11);
    uVar3 = fn_8232EC10(uVar3,iVar5);
  }
  fn_822C72E0(*(unsigned int *)(*(int *)(param_1 + 8) + 0x20),uVar3);
LAB_8232fafc:
  if (iVar10 != 0) {
    fn_822315A0(iVar10);
  }
  return;
}

