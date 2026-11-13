extern unsigned int *auStack_40;
extern int fn_82CEB1A8();
extern int fn_82CEB1B8();
extern int fn_82CEEDF8();


void fn_82CEEE70(unsigned __int64 param_1,unsigned __int64 param_2,__int64 param_3,__int64 param_4,
                  int *param_5)

{
  char *pcVar2;
  __int64 lVar1;
  int iVar3;
  unsigned char auStack_40 [64];
  
  iVar3 = (int)param_4;
  if ((iVar3 != 0) && (pcVar2 = (char *)fn_82CEEDF8(auStack_40), *pcVar2 == '\0')) {
    lVar1 = fn_82CEB1A8(param_2);
    pcVar2 = (char *)fn_82CEB1B8(auStack_40,param_2);
    if (*pcVar2 == '\0') {
      if (0 < iVar3) {
        do {
          (**(int (***)())(*param_5 + 0x10))(param_5,param_2,param_1,param_3,1);
          param_4 = param_4 + -1;
          param_3 = lVar1 + param_3;
        } while (param_4 != 0);
      }
    }
    else if (0 < iVar3) {
      do {
        (**(int (***)())(*param_5 + 0xc))(param_5,param_1,param_3,1);
        param_4 = param_4 + -1;
        param_3 = lVar1 + param_3;
      } while (param_4 != 0);
    }
  }
  return;
}

