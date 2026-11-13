extern unsigned int *auStack_20;


unsigned char * fn_82CFA7F0(unsigned char *param_1,int param_2)

{
  char *pcVar1;
  unsigned char uVar2;
  unsigned char auStack_20 [16];
  
  if (*(int *)(param_2 + 0x10) == *(int *)(param_2 + 0x14)) {
    pcVar1 = (char *)(**(int (***)())(**(int **)(param_2 + 8) + 0xc))(auStack_20);
    uVar2 = 0;
    if (*pcVar1 == '\0') goto LAB_82cfa840;
  }
  uVar2 = 1;
LAB_82cfa840:
  *param_1 = uVar2;
  return param_1;
}

