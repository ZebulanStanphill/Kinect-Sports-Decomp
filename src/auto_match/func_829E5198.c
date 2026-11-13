extern int fn_829E50B8();
extern int fn_829E5148();
extern int fn_829E6208();


void fn_829E5198(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 8) != '\0') {
    fn_829E5148();
  }
  iVar1 = fn_829E50B8((unsigned int *)(param_1 + 4));
  if ((iVar1 == 0) && (iVar1 = fn_829E6208(*(unsigned int *)(param_1 + 4)), iVar1 == 0)) {
    *(unsigned char *)(param_1 + 8) = 1;
  }
  return;
}

