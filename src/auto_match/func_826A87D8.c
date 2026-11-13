extern int fn_82696480();
extern int fn_82696BC8();
extern int fn_826A65E8();
extern int fn_826F5C10();


unsigned char * fn_826A87D8(unsigned char *param_1,int param_2,unsigned int *param_3)

{
  __int64 lVar1;
  char cVar3;
  unsigned __int64 uVar2;
  unsigned char uVar5;
  int iVar4;
  char *apcStack_30 [12];
  
  iVar4 = *(int *)(param_2 + 0x78);
  if (*(unsigned char *)(param_2 + 0x7c) < 7) {
    cVar3 = fn_826A65E8(iVar4 + 0x100,*param_3);
    if (cVar3 != '\0') goto LAB_826a8814;
    cVar3 = fn_826A65E8((unsigned __int64)*(unsigned int *)(param_2 + 0x78) + 0xfc,*param_3);
    if (cVar3 != '\0') {
      iVar4 = *(int *)(param_2 + 0x78);
      goto LAB_826a8850;
    }
LAB_826a8894:
    apcStack_30[0] = (char *)0x0;
    uVar2 = fn_826F5C10(**(unsigned int **)*param_3,apcStack_30,
                              -(6 < *(unsigned char *)(param_2 + 0x7c)) & 1);
    if (((int)uVar2 == -1) || (*apcStack_30[0] != '\0')) {
      *param_1 = 0;
      return param_1;
    }
    lVar1 = (**(int (***)())(**(int **)(param_2 + 0x74) + 0x50))(*(int **)(param_2 + 0x74),uVar2);
    if (lVar1 == 0) {
      uVar5 = 2;
      goto LAB_826a883c;
    }
LAB_826a8830:
    fn_82696480(param_3[1],lVar1);
  }
  else {
    if (*(int *)(iVar4 + 0x100) == *(int *)*param_3) {
LAB_826a8814:
      lVar1 = (**(int (***)())(**(int **)(param_2 + 0x74) + 0x54))(*(int **)(param_2 + 0x74),0);
      goto LAB_826a8830;
    }
    if (*(int *)(iVar4 + 0xfc) != *(int *)*param_3) goto LAB_826a8894;
LAB_826a8850:
    fn_82696BC8(param_3[1],*(unsigned int *)(iVar4 + 0x2a0));
  }
  uVar5 = 1;
LAB_826a883c:
  *param_1 = uVar5;
  return param_1;
}

