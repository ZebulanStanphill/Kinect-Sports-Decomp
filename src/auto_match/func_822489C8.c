extern int fn_82381BC0();
extern int fn_8288B760();


__int64 fn_822489C8(int param_1)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  char cVar5;
  int iVar4;
  __int64 lVar6;
  unsigned int * apuStack_30;
  
  if ((*(int *)(param_1 + 0x38) == 0) || (cVar5 = fn_8288B760(), cVar5 == '\0')) {
    lVar6 = 0;
  }
  else {
    piVar1 = *(int **)(param_1 + 0x38);
    lVar6 = 1;
    puVar2 = *(unsigned int **)(piVar1[4] + 0x220);
    apuStack_30 = (unsigned int *)*puVar2;
    while (puVar3 = apuStack_30, apuStack_30 != puVar2) {
      if (lVar6 == 0) {
LAB_82248a48:
        lVar6 = 0;
      }
      else {
        iVar4 = (**(int (***)())(*piVar1 + 8))();
        cVar5 = (**(int (***)())(*(int *)(iVar4 + 0x1ec) + 0x38))((int *)(iVar4 + 0x1ec),puVar3[4]);
        lVar6 = 1;
        if (cVar5 == '\0') goto LAB_82248a48;
      }
      fn_82381BC0(&apuStack_30);
      piVar1 = *(int **)(param_1 + 0x38);
      puVar2 = *(unsigned int **)(piVar1[4] + 0x220);
    }
  }
  return lVar6;
}

