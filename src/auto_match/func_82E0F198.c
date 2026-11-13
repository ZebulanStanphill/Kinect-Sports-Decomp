extern int fn_82CE5410();
extern int fn_82CEA160();
extern int fn_82CEA220();
extern int fn_82CEAC20();


void fn_82E0F198(int *param_1,int param_2,__int64 param_3,int *param_4,int param_5)

{
  int iVar3;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int iVar4;
  int *piVar5;
  
  if (0 < (int)param_3) {
    piVar5 = (int *)(param_2 + 4);
    do {
      if ((*piVar5 != 0) && (iVar3 = fn_82CEA220(param_5), *(int *)(param_5 + 8) < iVar3)) {
        iVar3 = *param_4;
        uVar1 = fn_82CEAC20(*piVar5);
        uVar2 = (**(int (***)())(iVar3 + 0x10))(param_4,uVar1);
        if ((uVar2 & 0xffffffff) == 0) {
          (**(int (***)())(*param_1 + 0x18))(param_1,*piVar5,0,0);
        }
        else {
          iVar3 = *piVar5;
          iVar4 = fn_82CE5410();
          fn_82CEA160(param_5,*(unsigned int *)(iVar4 + 0x10),uVar2,iVar3);
          (**(int (***)())(*param_1 + 0x18))(param_1,*piVar5,uVar2,0xffffffff8323ae68);
          (**(int (***)())(*param_1 + 0x20))(param_1,uVar2);
        }
      }
      param_3 = param_3 + -1;
      piVar5 = piVar5 + 2;
    } while (param_3 != 0);
  }
  return;
}

