extern int fn_83065C40();
extern int fn_8306AB80();


void fn_83061548(int param_1,unsigned char param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x24) == '\0') {
    iVar1 = *(int *)(param_1 + 4);
    while (iVar1 != 0) {
      fn_8306AB80((int *)(param_1 + 4),iVar1);
      if (param_2 == '\0') {
        fn_83065C40(iVar1);
      }
      iVar1 = *(int *)(param_1 + 4);
    }
  }
  return;
}

