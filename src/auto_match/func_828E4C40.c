typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_30;
extern int fn_8289F270();
extern int fn_828E4B88();


void fn_828E4C40(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  unsigned char auStack_30 [1];
  
  if (*param_1 != param_1[3]) {
    if (*param_1 != param_1[1]) {
      do {
        piVar1 = *(int **)(*param_1 + 8);
        (**(int (***)())(*piVar1 + 8))(piVar1);
        iVar2 = param_1[2];
        iVar3 = *(int *)(iVar2 + 0x5c);
        if (iVar3 != 0) {
          fn_8289F270(iVar2 + 4,iVar3,auStack_30);
          *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) - iVar3;
        }
        fn_828E4B88(*(unsigned int *)(*param_1 + 8),(unsigned __int64)(unsigned int)param_1[2] + 4);
        iVar2 = param_1[2];
        if (*(char *)(*(int *)(*param_1 + 8) + 4) == '\0') {
          *(int *)(iVar2 + 0x6c) = *(int *)(iVar2 + 0x6c) + 1;
        }
        else {
          *(int *)(iVar2 + 0x68) = *(int *)(iVar2 + 0x68) + 1;
        }
        iVar2 = *(int *)(*param_1 + 8);
        if ((*(char *)(iVar2 + 4) == '\0') ||
           ((iVar2 = *(int *)(iVar2 + 0xc), iVar2 != 0 && (*(int *)(iVar2 + 4) != 0)))) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (!bVar4) {
          param_1[3] = *param_1;
          (**(int (***)())(*piVar1 + 0xc))(piVar1);
          break;
        }
        (**(int (***)())(*piVar1 + 0xc))(piVar1);
        iVar2 = *(int *)*param_1;
        *param_1 = iVar2;
      } while (iVar2 != param_1[1]);
    }
    if (*param_1 == param_1[1]) {
      param_1[3] = param_1[1];
    }
  }
  return;
}

