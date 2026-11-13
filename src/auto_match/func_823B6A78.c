extern int fn_82381BC0();
extern int fn_8288B760();


unsigned __int64 fn_823B6A78(int *param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  char cVar5;
  int *piVar3;
  int iVar4;
  unsigned __int64 uVar6;
  unsigned int * apuStack_30;
  
  uVar6 = 1;
  if ((param_1[3] == 0) || (cVar5 = fn_8288B760((unsigned __int64)(unsigned int)param_1[3] - 0x68), cVar5 == '\0')
     ) {
LAB_823b6b20:
    uVar6 = 0;
  }
  else {
    puVar1 = *(unsigned int **)(*param_1 + 0x200);
    apuStack_30 = (unsigned int *)*puVar1;
    while (puVar2 = apuStack_30, apuStack_30 != puVar1) {
      piVar3 = (int *)(param_1[3] + -0x68);
      if (param_1[3] == 0) {
        piVar3 = (int *)0x0;
      }
      iVar4 = (**(int (***)())(*piVar3 + 8))();
      cVar5 = (**(int (***)())(*(int *)(iVar4 + 0x144) + 0x38))((int *)(iVar4 + 0x144),puVar2[4]);
      if (cVar5 == '\0') goto LAB_823b6b20;
      fn_82381BC0(&apuStack_30);
      puVar1 = *(unsigned int **)(*param_1 + 0x200);
    }
  }
  return uVar6;
}

