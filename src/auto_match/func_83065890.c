extern int fn_83068418();


void fn_83065890(int *param_1,unsigned int param_2)

{
  unsigned char cVar2;
  int iVar1;
  
  param_1[1] = param_2;
  if (param_2 != 0) {
    cVar2 = fn_83068418(param_2);
    param_1[2] = param_2;
    if (cVar2 == '\0') {
      iVar1 = (*(int (**)())(*param_1 + 4))(param_1,param_2);
      param_1[2] = iVar1;
    }
  }
  return;
}

