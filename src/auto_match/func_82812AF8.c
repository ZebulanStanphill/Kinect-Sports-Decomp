extern int fn_82813A78();
extern int fn_82813D80();


void fn_82812AF8(int param_1,int param_2)

{
  char cVar3;
  int iVar1;
  int iVar2;
  int aiStack_20 [2];
  
  if (*(int *)(param_2 + 0xc) == 0) {
    *(int *)(param_2 + 0xc) = param_1;
    cVar3 = fn_82813A78(param_2);
    if (cVar3 == '\0') {
      iVar2 = KeTlsGetValue(*(unsigned int *)(param_1 + 0xd8));
      iVar1 = param_1 + 8;
      if (iVar2 == 0) {
        iVar1 = param_1 + 0x48;
      }
    }
    else {
      iVar1 = param_1 + 0x88;
      *(unsigned char *)(param_2 + 0x15) = 1;
    }
    aiStack_20[0] = param_2;
    fn_82813D80(iVar1,aiStack_20);
  }
  return;
}

