extern int fn_822607F8();
extern int fn_822ABA88();
extern unsigned int lbl_831C996C;


void fn_82399530(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int *piVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  int iVar9;
  unsigned __int64 uVar8;
  int iVar10;
  int iVar11;
  unsigned __int64 uVar12;
  double dVar13;
  
  uVar7 = (**(int (***)())(**(int **)(param_1 + 0x2e0) + 0x90))();
  if ((uVar7 & 0xffffffff) < 9) {
    if ((int)uVar7 == 0) {
      uVar12 = 0xffffffff821b4b54;
    }
    else {
      if (uVar7 == 1) {
        return;
      }
      if (uVar7 == 2) {
        uVar12 = 0xffffffff821b4b24;
      }
      else if (uVar7 == 3) {
        uVar12 = 0xffffffff821b4b3c;
      }
      else if (uVar7 == 4) {
        uVar12 = 0xffffffff821b4adc;
      }
      else if (uVar7 == 5) {
        uVar12 = 0xffffffff821b4b10;
      }
      else if (uVar7 == 6) {
        uVar12 = 0xffffffff821b4af8;
      }
      else if (uVar7 == 7) {
        uVar12 = 0xffffffff821b4b04;
      }
      else {
        uVar12 = 0xffffffff821b4b5c;
      }
    }
    iVar9 = (**(int (***)())(**(int **)(param_1 + 0x2e0) + 0x7c))(*(int **)(param_1 + 0x2e0),param_2);
    piVar5 = *(int **)(**(int **)(param_1 + 8) + iVar9 * 4);
    uVar8 = (**(int (***)())(**(int **)(param_1 + 0x2e0) + 0x80))(*(int **)(param_1 + 0x2e0));
    iVar11 = *(int *)(piVar5[4] * 4 + *piVar5);
    iVar10 = fn_822ABA88(iVar11,uVar8);
    uVar6 = lbl_831C996C;
    dVar13 = (double)*(float *)(param_2 + 0x26c);
    iVar9 = *(int *)(iVar10 + 0x24);
    uVar1 = *(unsigned int *)(iVar10 + 0x214);
    uVar2 = *(unsigned int *)(iVar10 + 0x28);
    uVar3 = *(unsigned int *)(iVar10 + 0x244);
    uVar4 = *(unsigned int *)(iVar11 + 0x10);
    uVar8 = (**(int (***)())(**(int **)(param_1 + 0x2e0) + 0x3c))();
    fn_822607F8(ABS(dVar13),uVar6,uVar8,uVar4,uVar2,iVar9 != 0,uVar12,uVar1,uVar3);
  }
  return;
}

