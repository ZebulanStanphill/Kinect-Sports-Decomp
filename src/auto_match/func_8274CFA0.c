extern int fn_82681898();
extern int fn_82713EE8();


unsigned __int64 fn_8274CFA0(int param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  unsigned int uVar5;
  unsigned __int64 uVar4;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if (iVar3 == 0) {
LAB_8274d0b0:
    uVar4 = fn_82713EE8();
  }
  else {
    pcVar6 = "width";
    pcVar8 = *(char **)*param_3;
    pcVar7 = pcVar8;
    do {
      cVar1 = *pcVar7;
      cVar2 = *pcVar6;
      if (cVar1 == '\0') break;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      if (*(int **)(iVar3 + 0xc) == (int *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (**(int (***)())(**(int **)(iVar3 + 0xc) + 4))();
      }
    }
    else {
      pcVar7 = "height";
      do {
        cVar1 = *pcVar8;
        cVar2 = *pcVar7;
        if (cVar1 == '\0') break;
        pcVar8 = pcVar8 + 1;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 != cVar2) goto LAB_8274d0b0;
      if (*(int **)(iVar3 + 0xc) == (int *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (**(int (***)())(**(int **)(iVar3 + 0xc) + 8))();
      }
    }
    fn_82681898((double)uVar5,param_4);
    uVar4 = 1;
  }
  return uVar4;
}

