extern unsigned int *auStack_2c;
extern unsigned int *auStack_30;
extern int fn_822733C8();
extern int fn_822B4300();
extern int fn_82468820();
extern int fn_8265CA20();
extern unsigned int stack0x00000024;


unsigned int * fn_822B4378(unsigned int *param_1,int param_2,int *param_3,int *param_4)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int *piStack00000024;
  unsigned char auStack_30 [4];
  unsigned char auStack_2c [44];
  
  piVar1 = *(int **)(param_2 + 4);
  piStack00000024 = param_3;
  if ((param_3 == (int *)*piVar1) && (param_4 == piVar1)) {
    puVar3 = (unsigned int *)piVar1[1];
    while (*(char *)((int)puVar3 + 0x11) == '\0') {
      fn_822733C8(param_2,puVar3[2]);
      puVar2 = (unsigned int *)*puVar3;
      fn_8265CA20(puVar3);
      puVar3 = puVar2;
    }
    *(int *)(*(int *)(param_2 + 4) + 4) = *(int *)(param_2 + 4);
    *(unsigned int *)*(unsigned int *)(param_2 + 4) = *(unsigned int *)(param_2 + 4);
    *(int *)(*(int *)(param_2 + 4) + 8) = *(int *)(param_2 + 4);
    *(unsigned int *)(param_2 + 8) = 0;
    *param_1 = **(unsigned int **)(param_2 + 4);
  }
  else {
    while (piStack00000024 != param_4) {
      puVar3 = (unsigned int *)fn_822B4300(auStack_30,&stack0x00000024);
      fn_82468820(auStack_2c,param_2,*puVar3);
    }
    *param_1 = piStack00000024;
  }
  return param_1;
}

