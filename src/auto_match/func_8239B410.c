typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_240;
extern unsigned int *auStack_440;
extern int fn_8229D418();
extern int fn_822AA770();
extern int fn_822ABA88();
extern int fn_82358FD8();
extern int fn_8288B760();
extern unsigned int lbl_821917B0;


void fn_8239B410(int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int iVar6;
  unsigned __int64 uVar4;
  __int64 lVar5;
  int iVar7;
  unsigned int uVar8;
  unsigned char *puVar9;
  unsigned char auStack_440 [512];
  unsigned char auStack_240 [576];
  
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  iVar6 = (**(int (***)())(**(int **)(param_1 + 0x2e0) + 0x34))();
  piVar1 = *(int **)(param_1 + 0x2e0);
  iVar2 = piVar1[3];
  uVar4 = (**(int (***)())(*piVar1 + 0x80))(piVar1);
  iVar7 = **(int **)(param_1 + 8);
  piVar1 = *(int **)(iVar2 * 4 + iVar7);
  lVar5 = fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1),uVar4);
  iVar7 = fn_822AA770(*(unsigned int *)(iVar6 * 4 + iVar7));
  if (iVar7 != 0) {
    if (*(int *)(iVar7 + 0x168) == 0) {
      uVar8 = *(unsigned int *)(iVar7 + 0x16c);
    }
    else {
      uVar8 = fn_8288B760();
      uVar8 = uVar8 & 0xff;
    }
    bVar3 = true;
    if (uVar8 != 0) goto LAB_8239b4d0;
  }
  bVar3 = false;
LAB_8239b4d0:
  iVar7 = (**(int (***)())(**(int **)(param_1 + 0x2e0) + 0x90))();
  if (!bVar3) {
    return;
  }
  if (((*(int *)(*(int *)(param_1 + 0x1e4) + 0x188) == 0) || (iVar7 != 1)) || (iVar2 != iVar6)) {
    if (*(int *)(*(int *)(param_1 + 0x1e4) + 0x16c) != 1) {
      return;
    }
    if (iVar2 != iVar6) {
      return;
    }
    fn_82358FD8(param_1,auStack_240,0x100,0xffffffff821abdd0);
    iVar2 = *(int *)(*(int *)(param_1 + 0xd4) + 0x14);
    if (*(int *)(iVar2 + 0x14) != 0) {
      return;
    }
    puVar9 = auStack_240;
  }
  else {
    fn_82358FD8(param_1,auStack_440,0x100,0xffffffff821b4bf4);
    iVar2 = *(int *)(*(int *)(param_1 + 0xd4) + 0x14);
    if (*(int *)(iVar2 + 0x14) != 0) {
      return;
    }
    puVar9 = auStack_440;
  }
  fn_8229D418(iVar2,lVar5 + 0x30,puVar9);
  *(unsigned int *)(iVar2 + 0x10) = lbl_821917B0;
  *(unsigned int *)(iVar2 + 0xc) = 1;
  return;
}

