extern unsigned int *auStack_20;
extern int fn_8289AFE8();


unsigned int * fn_8289BC58(unsigned int *param_1,int param_2,int param_3,char param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  unsigned char auStack_20 [16];
  
  puVar2 = *(unsigned int **)(param_2 + 4);
  uVar3 = 1;
  if (*(char *)((int)puVar2[1] + 0x1d) == '\0') {
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
    } while (*(char *)((int)puVar1 + 0x1d) == '\0');
  }
  puVar2 = (unsigned int *)fn_8289AFE8(auStack_20,param_2,uVar3,puVar2,param_3);
  *(unsigned char *)(param_1 + 1) = 1;
  *param_1 = *puVar2;
  return param_1;
}

