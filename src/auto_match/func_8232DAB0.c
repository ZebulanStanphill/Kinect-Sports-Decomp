extern int fn_82520780();


void fn_8232DAB0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0xc);
  iVar2 = fn_82520780((double)*(float *)(param_1 + 0x10),0xffffffff83265a28);
  if (iVar2 != 0) {
    iVar2 = piVar1[2];
    piVar1[2] = (unsigned int)(param_2 == 0);
    (**(int (***)())(*piVar1 + 0x14))(piVar1,iVar2);
  }
  return;
}

