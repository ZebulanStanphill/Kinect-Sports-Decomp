extern int fn_82E1C150();


void fn_82E1C2D8(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  int *piVar2;
  
  if ((*(char *)(param_1 + 2) != '\0') || (iVar1 = fn_82E1C150(), -1 < iVar1)) {
    piVar2 = param_1 + 3;
    if (0xf < (unsigned int)param_1[8]) {
      piVar2 = (int *)*piVar2;
    }
    (**(int (***)())(*param_1 + 0x1c))(param_1,param_2,param_3,piVar2,(unsigned __int64)(unsigned int)param_1[7] + 1);
  }
  return;
}

