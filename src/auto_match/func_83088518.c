extern unsigned int *auStack_30;


void fn_83088518(int param_1,int *param_2,__int64 param_3,int *param_4)

{
  int *piVar1;
  char *pcVar2;
  unsigned char auStack_30 [1];
  
  while (param_3 = param_3 + -1, -1 < param_3) {
    pcVar2 = (char *)(**(int (***)())(*param_4 + 4))
                               (auStack_30,param_4,(int)*(char *)(*param_2 + 5) + *param_2,
                                (int)*(char *)(param_2[1] + 5) + param_2[1]);
    if (*pcVar2 != '\0') {
      piVar1 = *(int **)((*(char *)(*param_2 + 4) * 8 + (int)*(char *)(param_2[1] + 4)) * 4 +
                        param_1);
      (**(int (***)())(*piVar1 + 4))(piVar1,param_2);
    }
    param_2 = param_2 + 2;
  }
  return;
}

