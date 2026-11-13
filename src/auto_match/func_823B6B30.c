typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82381BC0();
extern int fn_8288B760();


bool fn_823B6B30(int *param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  char cVar5;
  int *piVar3;
  int iVar4;
  unsigned int *apuStack_20 [2];
  
  if ((param_1[3] == 0) || (cVar5 = fn_8288B760((unsigned __int64)(unsigned int)param_1[3] - 0x68), cVar5 == '\0')
     ) {
    if ((param_1[3] != 0) &&
       (cVar5 = fn_8288B760((unsigned __int64)(unsigned int)param_1[3] - 0x68), cVar5 == '\0')) {
      piVar3 = (int *)(param_1[3] + -0x68);
      if (param_1[3] == 0) {
        piVar3 = (int *)0x0;
      }
      iVar4 = (**(int (***)())(*piVar3 + 8))();
      cVar5 = (**(int (***)())(*(int *)(iVar4 + 0x198) + 0x3c))();
      return cVar5 != '\0';
    }
  }
  else {
    puVar1 = *(unsigned int **)(*param_1 + 0x200);
    apuStack_20[0] = (unsigned int *)*puVar1;
    while( true ) {
      puVar2 = apuStack_20[0];
      if (apuStack_20[0] == puVar1) {
        return true;
      }
      piVar3 = (int *)(param_1[3] + -0x68);
      if (param_1[3] == 0) {
        piVar3 = (int *)0x0;
      }
      iVar4 = (**(int (***)())(*piVar3 + 8))();
      cVar5 = (**(int (***)())(*(int *)(iVar4 + 0x198) + 0x38))((int *)(iVar4 + 0x198),puVar2[4]);
      if (cVar5 == '\0') break;
      fn_82381BC0(apuStack_20);
      puVar1 = *(unsigned int **)(*param_1 + 0x200);
    }
  }
  return false;
}

