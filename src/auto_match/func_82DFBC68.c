extern unsigned int lbl_821AAD20;


double fn_82DFBC68(int *param_1,int param_2,int param_3)

{
  double dVar1;
  double dVar2;
  
  if (*(char *)(param_3 + 0xf) != '\0') {
    return (double)lbl_821AAD20;
  }
  dVar2 = (double)*(float *)(param_2 + 0xb4);
  dVar1 = (double)(**(int (***)())(*param_1 + 0x20))();
  return (double)(float)(dVar1 * dVar2);
}

