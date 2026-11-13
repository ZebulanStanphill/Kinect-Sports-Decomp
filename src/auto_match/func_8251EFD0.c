extern int fn_8251F0E8();
extern int fn_8251F2B0();
extern int fn_8265CA20();


unsigned int * fn_8251EFD0(unsigned int *param_1,int param_2,int param_3,char param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  unsigned int *apuStack_50 [20];
  
  puVar2 = *(unsigned int **)(param_2 + 4);
  uVar3 = 1;
  if (*(char *)((int)puVar2[1] + 0x2d) == '\0') {
    puVar1 = (unsigned int *)puVar2[1];
    do {
      puVar2 = puVar1;
      if (param_4 == '\0') {
        uVar3 = -(unsigned __int64)(*(unsigned int *)(param_3 + 0xc) < (unsigned int)puVar2[3]) & 1;
      }
      else {
        uVar3 = -((unsigned __int64)((unsigned int)puVar2[3] < *(unsigned int *)(param_3 + 0xc)) - 1);
      }
      if ((uVar3 & 0xff) == 0) {
        puVar1 = (unsigned int *)puVar2[2];
      }
      else {
        puVar1 = (unsigned int *)*puVar2;
      }
    } while (*(char *)((int)puVar1 + 0x2d) == '\0');
  }
  apuStack_50[0] = puVar2;
  if ((uVar3 & 0xff) != 0) {
    if (puVar2 == (unsigned int *)**(unsigned int **)(param_2 + 4)) {
      uVar3 = 1;
      goto LAB_8251f080;
    }
    fn_8251F2B0(apuStack_50);
  }
  puVar1 = apuStack_50[0];
  if (*(unsigned int *)(param_3 + 0xc) <= (unsigned int)apuStack_50[0][3]) {
    fn_8265CA20(param_3);
    *param_1 = puVar1;
    *(unsigned char *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_8251f080:
  puVar2 = (unsigned int *)fn_8251F0E8(apuStack_50,param_2,uVar3,puVar2,param_3);
  *(unsigned char *)(param_1 + 1) = 1;
  *param_1 = *puVar2;
  return param_1;
}

