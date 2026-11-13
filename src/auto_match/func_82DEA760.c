typedef unsigned char bool;
extern unsigned int lbl_82134508;


void fn_82DEA760(unsigned __int64 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  
  iVar3 = (**(int (***)())(**(int **)(param_2 + 0xc) + 0x20))();
  if (iVar3 != 0xb) {
    piVar1 = *(int **)(param_2 + 0xc);
    iVar3 = *(int *)(*(int *)(param_2 + 0x14) + 0x98);
    dVar5 = (double)lbl_82134508;
    iVar2 = *(int *)(*(int *)(param_2 + 0x18) + 0x98);
    if ((iVar3 != 0) || (iVar2 != 0)) {
      dVar6 = dVar5;
      if (iVar3 != 0) {
        dVar6 = (double)*(float *)(iVar3 + 0x18);
      }
      if (iVar2 != 0) {
        dVar5 = (double)*(float *)(iVar2 + 0x18);
      }
      bVar4 = dVar5 <= dVar6;
      if ((float)(dVar6 - dVar5) < 0.0) {
        dVar5 = dVar6;
      }
      (**(int (***)())(*piVar1 + 0x14))(piVar1,bVar4);
    }
    (**(int (***)())(*piVar1 + 0xc))(dVar5,piVar1);
  }
  return;
}

