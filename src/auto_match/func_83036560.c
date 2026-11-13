extern int fn_83009C10();
extern int fn_83009C40();
extern unsigned int lbl_821AAD20;


void fn_83036560(double param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,char param_5)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)fn_83009C40(*(unsigned int *)(param_2 + 4));
  *(float *)(param_2 + 0xc) = (float)param_1;
  dVar2 = (double)fn_83009C40(*(unsigned int *)(param_2 + 4));
  dVar1 = (double)(float)(dVar2 - dVar1);
  if (param_5 != '\0') {
    fn_83009C10(*(unsigned int *)(param_2 + 4));
    *(unsigned int *)(param_2 + 8) = 0;
  }
  if (dVar1 != (double)lbl_821AAD20) {
    (**(int (***)())(**(int **)(param_2 + 4) + 0x3c))(dVar1,*(int **)(param_2 + 4),0,param_4,0,0);
  }
  return;
}

