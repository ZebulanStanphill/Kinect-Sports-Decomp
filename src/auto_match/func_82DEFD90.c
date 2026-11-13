extern unsigned int *auStack_20;


unsigned char * fn_82DEFD90(unsigned char *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  unsigned char uVar3;
  unsigned char auStack_20 [16];
  
  iVar1 = *(int *)(param_2 + 0x28);
  if (iVar1 != 0) {
    pcVar2 = (char *)(*(int (**)())**(unsigned int **)(iVar1 + 0xc))(auStack_20,iVar1 + 0xc);
    uVar3 = 0;
    if (*pcVar2 == '\0') goto LAB_82defde8;
  }
  uVar3 = 1;
LAB_82defde8:
  *param_1 = uVar3;
  return param_1;
}

