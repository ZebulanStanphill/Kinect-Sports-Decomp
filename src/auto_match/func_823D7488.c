void fn_823D7488(unsigned __int64 *param_1,unsigned __int64 *param_2,unsigned __int64 *param_3,int (*param_4)())

{
  unsigned char cVar1;
  unsigned __int64 uVar2;
  
  cVar1 = (*param_4)(param_2,param_1);
  if (cVar1 != '\0') {
    uVar2 = *param_2;
    *(unsigned int *)param_2 = *(unsigned int *)param_1;
    *(unsigned int *)((int)param_2 + 4) = *(unsigned int *)((int)param_1 + 4);
    *param_1 = uVar2;
  }
  cVar1 = (*param_4)(param_3,param_2);
  if (cVar1 != '\0') {
    uVar2 = *param_3;
    *(unsigned int *)param_3 = *(unsigned int *)param_2;
    *(unsigned int *)((int)param_3 + 4) = *(unsigned int *)((int)param_2 + 4);
    *param_2 = uVar2;
  }
  cVar1 = (*param_4)(param_2,param_1);
  if (cVar1 != '\0') {
    uVar2 = *param_2;
    *(unsigned int *)param_2 = *(unsigned int *)param_1;
    *(unsigned int *)((int)param_2 + 4) = *(unsigned int *)((int)param_1 + 4);
    *param_1 = uVar2;
  }
  return;
}

