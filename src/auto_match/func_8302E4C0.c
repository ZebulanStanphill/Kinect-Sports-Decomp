extern int fn_8302DF40();


int fn_8302E4C0(int param_1,int *param_2)

{
  unsigned char uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  
  uVar4 = 1;
  uVar6 = 0;
  uVar5 = (unsigned int)*(unsigned short *)*param_2;
  *param_2 = (int)((unsigned short *)*param_2 + 1);
  if (uVar5 != 0) {
    do {
      puVar2 = (unsigned int *)*param_2;
      uVar3 = *puVar2;
      *param_2 = (int)(puVar2 + 1);
      uVar1 = *(unsigned char *)(puVar2 + 1);
      *param_2 = *param_2 + 1;
      uVar4 = fn_8302DF40(param_1,uVar3,uVar1);
      if ((int)uVar4 == 0xf) {
        uVar4 = 1;
      }
      else if ((int)uVar4 != 1) {
        return uVar4;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  return uVar4;
}

