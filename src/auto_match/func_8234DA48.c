extern int fn_82564658();
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_821954EC;
extern unsigned int lbl_82195994;


void fn_8234DA48(int param_1,float *param_2,unsigned __int64 param_3)

{
  int iVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  double dVar4;
  
  if ((((lbl_82195994 <= param_2[2]) && (param_2[2] <= lbl_82193AF0)) &&
      (lbl_82195994 <= param_2[1] - *param_2)) && (param_2[1] - *param_2 <= lbl_82193AF0)) {
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x48) + 0x8c0);
  if ((iVar1 == 0) || (piVar2 = *(int **)(iVar1 + 0x1b4), piVar2 == (int *)0x0)) {
    uVar3 = 0xffffffffffffffff;
  }
  else {
    uVar3 = (**(int (***)())(*piVar2 + 0x14))(piVar2,param_3);
  }
  dVar4 = (double)(param_2[5] * lbl_821954EC);
  fn_82564658((double)(*param_2 * lbl_821954EC),(double)(param_2[1] * lbl_821954EC),dVar4,
                    (double)(param_2[2] * lbl_821954EC),dVar4,(double)(param_2[3] * lbl_821954EC),
                    dVar4,(double)param_2[4],param_1,uVar3);
  return;
}

