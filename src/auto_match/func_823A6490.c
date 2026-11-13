extern int fn_8239B628();
extern unsigned int lbl_82192388;
extern unsigned int lbl_82192D74;
extern unsigned int lbl_82193D04;


void fn_823A6490(int param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  unsigned int uVar4;
  double dVar5;
  
  piVar2 = *(int **)(*(int *)(param_1 + 8) + 0x2e0);
  dVar5 = (double)(**(int (***)())(*piVar2 + 0xa0))(piVar2);
  fVar1 = (float)((double)(float)((double)(float)piVar2[0x24] - dVar5) / (double)(float)piVar2[0x24]
                 );
  if ((fVar1 <= lbl_82192388) || (*(int *)(param_1 + 0x38) != 0)) {
    if ((fVar1 <= lbl_82192D74) || (*(int *)(param_1 + 0x34) != 0)) {
      if ((lbl_82193D04 < fVar1) && (*(int *)(param_1 + 0x30) == 0)) {
        iVar3 = *(int *)(param_1 + 8);
        uVar4 = ((unsigned int *)**(int **)(iVar3 + 8))[1];
        fn_8239B628(iVar3,*(unsigned int *)**(int **)(iVar3 + 8),iVar3 + 0x6c4);
        dVar5 = (double)fn_8239B628(iVar3,uVar4,iVar3 + 0x6f0);
        *(float *)(iVar3 + 0x86c) = (float)dVar5;
        *(unsigned int *)(param_1 + 0x30) = 1;
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 8);
      uVar4 = ((unsigned int *)**(int **)(iVar3 + 8))[1];
      fn_8239B628(iVar3,*(unsigned int *)**(int **)(iVar3 + 8),iVar3 + 0x71c);
      dVar5 = (double)fn_8239B628(iVar3,uVar4,iVar3 + 0x748);
      *(float *)(iVar3 + 0x86c) = (float)dVar5;
      *(unsigned int *)(param_1 + 0x34) = 1;
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 8);
    uVar4 = ((unsigned int *)**(int **)(iVar3 + 8))[1];
    fn_8239B628(iVar3,*(unsigned int *)**(int **)(iVar3 + 8),iVar3 + 0x774);
    dVar5 = (double)fn_8239B628(iVar3,uVar4,iVar3 + 0x7a0);
    *(float *)(iVar3 + 0x86c) = (float)dVar5;
    *(unsigned int *)(param_1 + 0x38) = 1;
  }
  return;
}

