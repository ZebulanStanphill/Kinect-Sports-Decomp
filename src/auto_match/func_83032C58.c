extern int fn_8302C718();
extern int fn_8302EA08();


unsigned int * fn_83032C58(unsigned int *param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned short uVar3;
  unsigned int uVar2;
  
  if (param_2 != param_1) {
    fn_8302EA08(param_1,*param_2,1);
    if ((int *)param_2[1] == (int *)0x0) {
      param_1[1] = 0;
    }
    else {
      iVar1 = *(int *)param_2[1];
      uVar3 = fn_8302C718(*param_1);
      uVar2 = (**(int (***)())(iVar1 + 0xc))(param_2[1],uVar3);
      param_1[1] = uVar2;
    }
    *(unsigned short *)(param_1 + 2) = *(unsigned short *)(param_2 + 2);
    *(unsigned short *)((int)param_1 + 10) = *(unsigned short *)((int)param_2 + 10);
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
  }
  return param_1;
}

