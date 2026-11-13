extern int fn_82522ED8();
extern int fn_825B1960();
extern int fn_8266F128();


void fn_8266FF40(int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  
  if (((param_2 & 0xffffffff) != 0) && (*param_1 != 0)) {
    if ((param_2 & 0xffffffff) != 0) {
      iVar4 = 0;
      do {
        iVar3 = *param_1 + iVar4;
        uVar2 = *(unsigned int *)(iVar3 + 4) & 0x8f;
        if (uVar2 == 4) {
          if ((*(unsigned int *)(iVar3 + 4) >> 6 & 1) == 0) {
            uVar1 = *(unsigned int *)(iVar3 + 8);
          }
          else {
            uVar1 = **(unsigned int **)(iVar3 + 8);
          }
          fn_82522ED8(uVar1);
        }
        else if (uVar2 == 5) {
          fn_825B1960(*(unsigned int *)(iVar3 + 8));
        }
        param_2 = param_2 - 1;
        iVar4 = iVar4 + 0x10;
      } while (param_2 != 0);
    }
    if (*param_1 != 0) {
      fn_8266F128(*param_1,3);
    }
    *param_1 = 0;
  }
  return;
}

