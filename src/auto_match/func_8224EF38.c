extern int fn_8224EFC8();
extern int fn_8224F250();


unsigned int * fn_8224EF38(int param_1,unsigned int *param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  
  puVar3 = *(unsigned int **)(param_1 + 4);
  if (*(char *)((int)param_2 + 0x19) == '\0') {
    puVar1 = (unsigned int *)fn_8224EFC8(param_1);
    fn_8224F250(param_1 + 0xd,puVar1 + 3,param_2 + 3);
    puVar1[1] = param_3;
    *(unsigned char *)(puVar1 + 6) = *(unsigned char *)(param_2 + 6);
    if (*(char *)((int)puVar3 + 0x19) != '\0') {
      puVar3 = puVar1;
    }
    uVar2 = fn_8224EF38(param_1,*param_2,puVar1);
    *puVar1 = uVar2;
    uVar2 = fn_8224EF38(param_1,param_2[2],puVar1);
    puVar1[2] = uVar2;
  }
  return puVar3;
}

