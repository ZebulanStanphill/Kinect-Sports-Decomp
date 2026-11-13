extern int fn_828F6FA8();


void fn_82975A18(int param_1,int param_2,char *param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  char *pcVar4;
  
  piVar2 = (int *)(param_2 + 4);
  if (*(int *)(param_2 + 0x38) != -1) {
    param_2 = *(int *)(*(int *)(param_2 + 0x38) * 4 + *(int *)(param_1 + 0x14));
  }
  pcVar4 = (char *)**(unsigned int **)(*piVar2 * 4 + *(int *)(param_1 + 0x10));
  if ((*pcVar4 == '\0') || (pcVar4[1] != '\0')) {
    uVar3 = 0xffffffff820387ec;
  }
  else {
    uVar3 = 0xffffffff821c4da8;
  }
  fn_828F6FA8(param_3,param_4,uVar3);
  pcVar4 = param_3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar4 = pcVar4 + (-1 - (int)param_3);
  if (*(int *)(param_2 + 0xc) == -1) {
    fn_828F6FA8(param_3 + (int)pcVar4,param_4 - (int)pcVar4,0xffffffff821ce31c);
  }
  else {
    fn_828F6FA8(param_3 + (int)pcVar4,param_4 - (int)pcVar4,0xffffffff821c7f34);
  }
  param_3[param_4 + -1] = '\0';
  return;
}

