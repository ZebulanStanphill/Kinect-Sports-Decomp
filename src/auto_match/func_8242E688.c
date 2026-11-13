extern int fn_822ABA88();
extern int fn_8242C410();


int fn_8242E688(unsigned __int64 param_1,unsigned int param_2)

{
  int *piVar1;
  int iVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  __int64 lVar5;
  
  lVar4 = 0;
  iVar2 = fn_8242C410();
  if (0 < iVar2) {
    lVar5 = 0;
    uVar3 = (unsigned __int64)**(unsigned int **)((int)param_1 + 8);
    do {
      piVar1 = *(int **)((int)lVar5 + (int)uVar3);
      iVar2 = fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1),0);
      if (*(unsigned char *)(*(int *)(iVar2 + 0x1a0) + 0x44) == param_2) {
        return iVar2;
      }
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 4;
      iVar2 = fn_8242C410(param_1);
    } while ((int)lVar4 < iVar2);
  }
  return 0;
}

