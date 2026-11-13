#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82250A18();
extern int fn_822ABA88();
extern int fn_8236A928();
extern int fn_8236BA88();
extern unsigned int lbl_832975B0;


void fn_822B0A98(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  
  piVar1 = *(int **)(param_1 + 0xc);
  uVar7 = ZEXT48(piVar1);
  uVar4 = 0;
  uVar5 = (unsigned __int64)*(unsigned int *)(*(int *)(piVar1[4] * 4 + *piVar1) + 8);
  if (uVar5 != 0) {
    uVar6 = (unsigned __int64)*(unsigned int *)(piVar1[4] * 4 + *piVar1);
    do {
      iVar2 = fn_822ABA88(*(unsigned int *)(((int *)uVar7)[4] * 4 + *(int *)uVar7));
      iVar3 = fn_822ABA88(uVar6);
      iVar3 = *(int *)(*(int *)(iVar3 + 0x110) + 0x1c);
      if ((iVar3 == 8) || (iVar3 == 0x18)) {
        fn_8236A928(*(unsigned int *)(param_1 + 0x10),iVar2,6);
        iVar3 = (**(int (***)())(**(int **)(param_1 + 0x10) + 200))();
        if (iVar3 == 1) {
          iVar3 = lbl_832975B0;
          if (lbl_832975B0 == 0) {
            iVar3 = fn_82250A18();
          }
          if (*(char *)(iVar3 + 4) == '\0') goto code_r0x822b0bbc;
        }
        iVar3 = lbl_832975B0;
        if (lbl_832975B0 == 0) {
          iVar3 = fn_82250A18();
        }
        if (*(char *)(iVar3 + 4) == '\0') {
          return;
        }
code_r0x822b0bbc:
        (**(int (***)())(**(int **)(iVar2 + 0x110) + 0xc))();
        return;
      }
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xffffffff) < (uVar5 & 0xffffffff));
  }
  fn_8236BA88(uVar7);
  return;
}

