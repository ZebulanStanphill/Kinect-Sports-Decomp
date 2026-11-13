extern int fn_82CE5410();


void fn_82CEE880(int param_1,int param_2,int param_3,int param_4,int param_5,
                  int *param_6)

{
  int iVar2;
  unsigned int uVar1;
  
  iVar2 = fn_82CE5410();
  uVar1 = (*(int (**)())(**(int **)(iVar2 + 0x10) + 0x2c))
                    (*(int **)(iVar2 + 0x10),param_2,(int)param_4 * (int)param_5);
  (*(int (**)())(*param_6 + 0x14))
            (param_6,3,param_1,param_2,(int)param_3 * (int)param_5,uVar1);
  return;
}

