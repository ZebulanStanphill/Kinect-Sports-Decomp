extern int fn_82247000();
extern int fn_8288B760();
extern int fn_828AB870();


void fn_822449A8(int *param_1,char param_2)

{
  int iVar3;
  __int64 lVar1;
  char cVar5;
  __int64 lVar2;
  int iVar4;
  
  fn_82247000();
  iVar3 = (**(int (***)())(*param_1 + 8))(param_1);
  lVar1 = (**(int (***)())(*(int *)(iVar3 + 0x48) + 0x3c))();
  cVar5 = fn_8288B760(param_1);
  iVar3 = (int)lVar1;
  if (cVar5 == '\0') {
    iVar4 = (**(int (***)())(*param_1 + 8))(param_1);
    lVar1 = (**(int (***)())(*(int *)(iVar4 + 0x9c) + 0x3c))();
    if ((param_2 != '\0') && (iVar3 <= (int)lVar1)) goto LAB_82244a80;
    lVar2 = (**(int (***)())(*param_1 + 8))(param_1);
    lVar2 = lVar2 + 0x9c;
  }
  else {
    if (4 < iVar3) goto LAB_82244a80;
    lVar2 = (**(int (***)())(*param_1 + 8))(param_1);
    lVar2 = lVar2 + 0x48;
  }
  fn_828AB870(lVar2,lVar1 + 1);
LAB_82244a80:
  fn_82247000(param_1);
  return;
}

