extern unsigned int *auStack_40;
extern int fn_8265CA20();
extern int fn_82864E90();
extern int memmove();
extern unsigned int *lbl_8327F86C;


unsigned __int64 fn_825339A0(int param_1)

{
  int iVar1;
  unsigned char bVar2;
  int *piVar3;
  int *piVar4;
  char cVar6;
  int iVar5;
  int *piVar7;
  int *piVar8;
  unsigned int auStack_40;
  
  piVar3 = lbl_8327F86C;
  bVar2 = 0;
  piVar8 = (int *)*lbl_8327F86C;
  if (piVar8 != (int *)lbl_8327F86C[1]) {
    piVar7 = piVar8 + 1;
    do {
      iVar1 = *piVar8;
      if (*(int *)(iVar1 + 8) == param_1) {
        piVar4 = (int *)fn_82864E90();
        piVar4 = (int *)(**(int (***)())(*piVar4 + 0x1c))();
        cVar6 = (**(int (***)())(*piVar4 + 0x38))(piVar4,*(unsigned int *)(iVar1 + 4));
        if (cVar6 != '\0') {
          iVar5 = (**(int (***)())(**(int **)(iVar1 + 4) + 0x20))();
          if (iVar5 < 0) {
            bVar2 = 1;
          }
          auStack_40 = 0;
          (**(int (***)())(**(int **)(iVar1 + 4) + 0x50))(*(int **)(iVar1 + 4),&auStack_40);
        }
        memmove(piVar8,piVar7,(piVar3[1] - (int)piVar7 >> 2) << 2);
        piVar3[1] = piVar3[1] + -4;
        piVar4 = (int *)fn_82864E90();
        piVar4 = (int *)(**(int (***)())(*piVar4 + 0x1c))();
        (**(int (***)())(*piVar4 + 0x3c))(piVar4,iVar1);
        fn_8265CA20(iVar1);
      }
      else {
        piVar8 = piVar8 + 1;
        piVar7 = piVar7 + 1;
      }
    } while (piVar8 != (int *)piVar3[1]);
  }
  return -(unsigned __int64)bVar2 & 0xffffffff80004005;
}

