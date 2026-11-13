extern unsigned int *auStack_2d;


void fn_82D808D0(int *param_1,int param_2,int param_3)

{
  int (**pcVar1)();
  char *pcVar2;
  char cVar3;
  int *piVar4;
  char cStack_30;
  char cStack_2f;
  char cStack_2e;
  unsigned char auStack_2d [1];
  
  (**(int (***)())(*param_1 + 0x20))(&cStack_30,param_1,param_2);
  piVar4 = param_1 + 4;
  pcVar2 = (char *)(**(int (***)())(*(int *)(param_3 + 8) + 4))(auStack_2d,param_3 + 8,piVar4,param_2);
  if (*pcVar2 == '\0') {
    if (cStack_30 != '\0') {
      (**(int (***)())(*param_1 + 0x24))(param_1,param_2);
    }
    if (*(char *)(param_2 + 0x18) != '\x02') {
      return;
    }
    (**(int (***)())(*(int *)(*(char *)(param_2 + 0x10) + param_2) + 0x20))
              (&cStack_2e,*(char *)(param_2 + 0x10) + param_2,piVar4);
    if (cStack_2e == '\0') {
      return;
    }
    cVar3 = *(char *)(param_2 + 0x10);
    pcVar1 = *(int (***)())(*(int *)(cVar3 + param_2) + 0x24);
  }
  else {
    if (cStack_30 == '\0') {
      (**(int (***)())(*param_1 + 0x1c))(param_1,param_2);
    }
    if (*(char *)(param_2 + 0x18) != '\x02') {
      return;
    }
    (**(int (***)())(*(int *)(*(char *)(param_2 + 0x10) + param_2) + 0x20))
              (&cStack_2f,*(char *)(param_2 + 0x10) + param_2,piVar4);
    if (cStack_2f != '\0') {
      return;
    }
    cVar3 = *(char *)(param_2 + 0x10);
    pcVar1 = *(int (***)())(*(int *)(cVar3 + param_2) + 0x1c);
  }
  (*pcVar1)(cVar3 + param_2,piVar4);
  return;
}

