extern int fn_830080D8();


unsigned __int64
fn_82FB80D0(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3,int param_4,char *param_5)

{
  unsigned int *puVar2;
  char cVar3;
  unsigned __int64 uVar1;
  
  puVar2 = (unsigned int *)fn_830080D8(param_4);
  if (puVar2 == (unsigned int *)0x0) {
    uVar1 = 2;
  }
  else {
    *puVar2 = param_2;
    if ((unsigned __int64)(unsigned int)param_2[2] == (param_3 & 0xffffffff)) {
      *param_5 = '\x01';
    }
    else {
      cVar3 = (**(int (***)())(*param_2 + 4))(param_2);
      if (cVar3 == '\0') {
        cVar3 = *param_5;
        for (puVar2 = (unsigned int *)param_2[4];
            (cVar3 == '\0' && (puVar2 != (unsigned int *)param_2[5])); puVar2 = puVar2 + 1) {
          uVar1 = fn_82FB80D0(param_1,*puVar2,param_3,param_4,param_5);
          if ((int)uVar1 != 1) {
            return uVar1;
          }
          cVar3 = *param_5;
        }
      }
    }
    if (*param_5 == '\0') {
      *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + -4;
    }
    uVar1 = 1;
  }
  return uVar1;
}

