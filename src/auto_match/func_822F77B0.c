extern unsigned int fStack_54;
extern int fn_822F78F0();
extern int fn_822F7B80();
extern int fn_822F7FA0();
extern int fn_822F8298();
extern int fn_822F8438();
extern int fn_8265CA20();
extern unsigned int uStack_48;
extern unsigned int uStack_58;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_822F77B0(unsigned __int64 param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  int *piVar2;
  int *piVar3;
  unsigned int uVar4;
  int *piVar5;
  float *pfVar6;
  float *pfVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  double dVar10;
  struct { unsigned int first; float second; } stack_pair_58;

  int *piStack_50;
  int *piStack_4c;
  unsigned int uStack_48;
  
  uVar1 = param_2[1];
  for (uVar4 = *param_2; uVar4 != uVar1; uVar4 = uVar4 + 0x14) {
    dVar10 = (double)fn_822F7B80(param_1,uVar4);
    *(float *)(uVar4 + 8) = (float)dVar10;
  }
  piStack_50 = (int *)0x0;
  piStack_4c = (int *)0x0;
  uStack_48 = 0;
  fn_822F7FA0(&piStack_50,(int)(param_2[1] - *param_2) / 0x14);
  uVar4 = param_2[1];
  for (uVar8 = (unsigned __int64)*param_2; piVar3 = piStack_4c, piVar2 = piStack_50,
      (uVar8 & 0xffffffff) != (unsigned __int64)uVar4; uVar8 = uVar8 + 0x14) {
    stack_pair_58.first = (int)uVar8;
    dVar10 = (double)fn_822F78F0(param_1,uVar8);
    stack_pair_58.second = (float)dVar10;
    fn_822F8438(&piStack_50,&stack_pair_58.first);
  }
  fn_822F8298(piStack_50,piStack_4c,(int)piStack_4c - (int)piStack_50 >> 3,0);
  uVar4 = *param_2;
  for (piVar5 = piVar2; piVar5 != piVar3; piVar5 = piVar5 + 2) {
    pfVar6 = &stack_pair_58.second;
    pfVar7 = (float *)(*piVar5 + -4);
    lVar9 = 5;
    do {
      pfVar7 = pfVar7 + 1;
      pfVar6 = pfVar6 + 1;
      *pfVar6 = *pfVar7;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    pfVar7 = &stack_pair_58.second;
    pfVar6 = (float *)(uVar4 - 4);
    lVar9 = 5;
    do {
      pfVar7 = pfVar7 + 1;
      pfVar6 = pfVar6 + 1;
      *pfVar6 = *pfVar7;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    uVar4 = uVar4 + 0x14;
  }
  if (piVar2 != (int *)0x0) {
    fn_8265CA20(piVar2);
  }
  return;
}

