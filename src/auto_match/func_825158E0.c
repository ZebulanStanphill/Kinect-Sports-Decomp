#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_30;
extern int fn_82230300();
extern int fn_822509A0();
extern int fn_82515A40();
extern int fn_82515E00();
extern int fn_8265CA20();
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;


unsigned int * fn_825158E0(unsigned int *param_1,int param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  char cVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int uStack00000024;
  unsigned char auStack_30 [48];
  
  puVar2 = *(unsigned int **)(param_2 + 4);
  uStack00000024 = (unsigned int)param_3;
  if (((param_3 & 0xffffffff) == (unsigned __int64)*puVar2) && (param_4 == puVar2)) {
    cVar1 = *(char *)((int)puVar2[1] + 0x49);
    puVar2 = (unsigned int *)puVar2[1];
    while (cVar1 == '\0') {
      fn_82515E00(param_2,puVar2[2]);
      puVar3 = (unsigned int *)*puVar2;
      fn_82230300(puVar2 + 5,1,0);
      fn_8265CA20(puVar2);
      puVar2 = puVar3;
      cVar1 = *(char *)((int)puVar3 + 0x49);
    }
    *(int *)(*(int *)(param_2 + 4) + 4) = *(int *)(param_2 + 4);
    *(unsigned int *)*(unsigned int *)(param_2 + 4) = *(unsigned int *)(param_2 + 4);
    *(int *)(*(int *)(param_2 + 4) + 8) = *(int *)(param_2 + 4);
    *(unsigned int *)(param_2 + 8) = 0;
    *param_1 = **(unsigned int **)(param_2 + 4);
  }
  else {
    while ((param_3 & 0xffffffff) != ZEXT48(param_4)) {
      fn_822509A0(&stack0x00000024);
      fn_82515A40(auStack_30,param_2,param_3);
      param_3 = (unsigned __int64)uStack00000024;
    }
    *param_1 = (int)param_3;
  }
  return param_1;
}

