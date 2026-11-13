#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_30;
extern int fn_823E1618();
extern int fn_824CB080();
extern int fn_824CB558();
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;


unsigned int * fn_824CAC50(unsigned int *param_1,int param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  unsigned int *puVar1;
  unsigned int uStack00000024;
  unsigned char auStack_30 [48];
  
  puVar1 = *(unsigned int **)(param_2 + 4);
  uStack00000024 = (unsigned int)param_3;
  if (((param_3 & 0xffffffff) == (unsigned __int64)*puVar1) && (param_4 == puVar1)) {
    fn_824CB558(param_2,puVar1[1]);
    *(int *)(*(int *)(param_2 + 4) + 4) = *(int *)(param_2 + 4);
    *(unsigned int *)*(unsigned int *)(param_2 + 4) = *(unsigned int *)(param_2 + 4);
    *(int *)(*(int *)(param_2 + 4) + 8) = *(int *)(param_2 + 4);
    *(unsigned int *)(param_2 + 8) = 0;
    *param_1 = **(unsigned int **)(param_2 + 4);
  }
  else {
    while ((param_3 & 0xffffffff) != ZEXT48(param_4)) {
      fn_823E1618(&stack0x00000024);
      fn_824CB080(auStack_30,param_2,param_3);
      param_3 = (unsigned __int64)uStack00000024;
    }
    *param_1 = (int)param_3;
  }
  return param_1;
}

