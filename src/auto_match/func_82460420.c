extern int fn_82270B70();
extern int fn_82472120();
extern int fn_82472D48();
extern unsigned int lbl_831C6C34;
extern unsigned int lbl_832960B8;


void fn_82460420(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned int *puVar5;
  double dVar6;
  
  if (*(int *)(param_2 + 0x54) == 5) {
    if (lbl_832960B8 == 0) {
      iVar2 = **(int **)(param_2 + 0x4c);
      if ((iVar2 != 3) && (iVar2 != 4)) {
        fn_82472D48(*(int **)(param_2 + 0x4c),3);
      }
    }
    if (**(int **)(param_2 + 0x4c) != 4) {
      fn_82472120(param_1);
    }
  }
  iVar2 = *(int *)(param_2 + 0x38);
  if ((*(int *)(iVar2 + 0xc) == 6) && (*(int *)(iVar2 + 0x10) == 0)) {
    fVar1 = (float)((double)*(float *)(iVar2 + 0x84) + param_1);
    dVar6 = (double)fVar1;
    *(float *)(iVar2 + 0x84) = fVar1;
    if (((double)lbl_831C6C34 <= dVar6) &&
       (((double)(float)(dVar6 - param_1) < (double)lbl_831C6C34 &&
        (iVar2 = *(int *)(iVar2 + 0x308), iVar2 != 0)))) {
      iVar4 = fn_82270B70();
      puVar5 = *(unsigned int **)(iVar4 + 0xa8);
      for (puVar3 = (unsigned int *)*puVar5; puVar3 != puVar5; puVar3 = (unsigned int *)*puVar3) {
        if ((puVar3[2] == iVar2) && (puVar3[0x42d] == 0)) {
          puVar3[5] = 1;
        }
        puVar5 = *(unsigned int **)(iVar4 + 0xa8);
      }
    }
  }
  return;
}

