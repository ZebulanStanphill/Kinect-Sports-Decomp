typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8267C498();
extern int fn_8268B400();
extern int fn_827555D8();
extern int fn_82756488();
extern int fn_82756E30();
extern int fn_82756F70();
extern unsigned int iStack_64;
extern unsigned int iStack_bc;
extern unsigned int iStack_c0;
extern unsigned int lbl_821AAD20;


void fn_82757DE8(__int64 param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  unsigned int uVar9;
  double dVar10;
  struct { int first; int second; } stack_pair_c0;

  __int64 lStack_b8;
  unsigned short *puStack_b0;
  unsigned short *puStack_ac;
  int iStack_64;
  
  if (param_2 != 0) {
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  }
  iVar7 = 0;
  bVar3 = true;
  stack_pair_c0.second = 0;
  uVar9 = 0;
  dVar10 = (double)lbl_821AAD20;
  iVar8 = 0;
  stack_pair_c0.first = param_2;
  while( true ) {
    if ((((int *)(param_2 + 0x6c) == (int *)0x0) || (*(unsigned int *)(param_2 + 0x70) <= uVar9)) ||
       (bVar2 = false, (int)uVar9 < 0)) {
      bVar2 = true;
    }
    if (bVar2) break;
    iVar6 = *(int *)(*(int *)(param_2 + 0x6c) + iVar8);
    lStack_b8 = (__int64)*(int *)(iVar6 + 0xc);
    if ((bVar3) || ((double)lStack_b8 != dVar10)) {
      if (bVar3) {
        dVar10 = (double)lStack_b8;
      }
    }
    else {
      fn_8268B400(param_1 + 0xc,10);
    }
    fn_82756F70(&puStack_b0,iVar6);
    if (iStack_64 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iStack_64 + 0x14);
    }
    piVar1 = *(int **)(iVar6 + 0xc);
    if (piVar1 != (int *)0x0) {
      while( true ) {
        if ((puStack_b0 == (unsigned short *)0x0) || (bVar3 = false, puStack_ac <= puStack_b0)) {
          bVar3 = true;
        }
        if (bVar3) break;
        uVar5 = (unsigned __int64)*puStack_b0;
        if (0xfffe < uVar5) {
          uVar5 = 0xffffffffffffffff;
        }
        uVar4 = (**(int (***)())(*piVar1 + 0x34))(piVar1,uVar5);
        if ((int)uVar4 != -1) {
          iVar7 = iVar7 + 1;
          fn_8268B400(param_1 + 0xc,uVar4);
        }
        fn_827555D8(&puStack_b0);
      }
      bVar3 = false;
    }
    fn_82756488(&puStack_b0);
    if (uVar9 < *(unsigned int *)(param_2 + 0x70)) {
      uVar9 = uVar9 + 1;
      iVar8 = iVar8 + 4;
    }
  }
  stack_pair_c0.second = iVar7;
  fn_82756E30(param_1,&stack_pair_c0.first);
  if (param_2 != 0) {
    fn_8267C498(param_2);
  }
  return;
}

