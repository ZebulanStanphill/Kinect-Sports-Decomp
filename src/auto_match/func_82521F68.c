extern int fn_822315A0();
extern int fn_823AB478();
extern int fn_82522ED8();
extern int fn_827D50B8();
extern unsigned int *lbl_832767C8;


void fn_82521F68(unsigned int *param_1,int param_2)

{
  int *piVar1;
  unsigned int uVar2;
  int *piVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_2 + 0x14);
  iVar4 = fn_827D50B8(*param_1);
  piVar3 = lbl_832767C8;
  if (iVar4 == 0) {
    *(int *)(*piVar1 + 0x120) = piVar1[4];
    piVar3 = lbl_832767C8;
    if (piVar1[2] == 0) {
      iVar4 = fn_823AB478(*piVar1);
      *(unsigned char *)((int)piVar3 + iVar4 + 0x80) = 1;
    }
    else {
      (**(int (***)())(*lbl_832767C8 + 0xc))(lbl_832767C8,*piVar1,0xffffffff825223a8);
    }
  }
  else {
    iVar4 = fn_823AB478(*piVar1);
    *(unsigned char *)((int)piVar3 + iVar4 + 0x78) = 1;
    *(unsigned int *)(*piVar1 + 0x120) = 0xffffffff;
  }
  uVar2 = piVar1[3];
  piVar1[3] = (int)((unsigned __int64)uVar2 - 1);
  if ((__int64)((unsigned __int64)uVar2 - 1) < 1) {
    fn_82522ED8(piVar1);
  }
  fn_82522ED8(param_2);
  if (param_1[1] != 0) {
    fn_822315A0();
  }
  return;
}

