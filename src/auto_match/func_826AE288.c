typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82696330();
extern int fn_82696B20();


unsigned int * fn_826AE288(unsigned int *param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  char acStack_30;
  
  acStack_30 = '\0';
  iVar1 = *(int *)(*(int *)(param_2 + 0x78) + 0x2a0);
  cVar3 = (**(int (***)())(*(int *)(iVar1 + 0x10) + 0x2c))
                    (iVar1 + 0x10,param_2 + 0x78,(param_3 + 2) * 4 + *(int *)(param_2 + 0x78),
                     &acStack_30);
  if (cVar3 != '\0') {
    if ((acStack_30 == '\b') || (bVar2 = false, acStack_30 == '\v')) {
      bVar2 = true;
    }
    if (bVar2) {
      fn_82696B20(param_1,&acStack_30,param_2);
      goto LAB_826ae320;
    }
  }
  *(unsigned char *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
LAB_826ae320:
  fn_82696330(&acStack_30);
  return param_1;
}

