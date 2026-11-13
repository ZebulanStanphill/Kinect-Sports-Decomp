char *strncpy(char *d, const char *s, unsigned int n);


void fn_82827650(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  unsigned int *piVar2;
  
  piVar1 = (int *)**(int **)(param_1 + 0x2ec);
  piVar2 = (int *)*piVar1;
  if (piVar2 != piVar1) {
    do {
      if (piVar2[0x42] == *(int *)(param_2 + 0x10)) {
        if (piVar2 + 2 == (int *)0x0) {
          return;
        }
        strncpy((char *)param_3,(char *)(piVar2 + 2),param_4);
        *(unsigned char *)(param_3 + param_4 + -1) = 0;
        return;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != piVar1);
  }
  return;
}

