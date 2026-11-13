typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_10;


void fn_82897C08(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  unsigned int *puVar3;
  int *piVar4;
  unsigned int auStack_10 [4];
  
  piVar4 = (int *)(param_2 + 0x28);
  iVar1 = *piVar4;
  while (iVar1 != 0) {
    param_2 = *piVar4;
    piVar4 = (int *)(param_2 + 0x28);
    iVar1 = *(int *)(param_2 + 0x28);
  }
  if ((*(char *)(param_2 + 0x30) != '\0') || (bVar2 = false, *(char *)(param_1 + 0x30) != '\0')) {
    bVar2 = true;
  }
  auStack_10[0] = *(unsigned int *)(param_1 + 0x34);
  if ((bVar2) && (*(char *)(param_2 + 0x30) != '\0')) {
    if (auStack_10[0] == 0) {
      auStack_10[0] = *(unsigned int *)(param_2 + 0x34);
    }
    else {
      puVar3 = (unsigned int *)(param_2 + 0x34);
      if (auStack_10[0] <= *(unsigned int *)(param_2 + 0x34)) {
        puVar3 = auStack_10;
      }
      auStack_10[0] = *puVar3;
    }
  }
  *piVar4 = param_1;
  *(int *)(param_1 + 0x24) = param_2;
  if (!bVar2) {
    return;
  }
  for (; param_2 != 0; param_2 = *(int *)(param_2 + 0x24)) {
    param_1 = param_2;
  }
  do {
    *(unsigned int *)(param_1 + 0x34) = auStack_10[0];
    *(unsigned char *)(param_1 + 0x30) = 1;
    param_1 = *(int *)(param_1 + 0x28);
  } while (param_1 != 0);
  return;
}

