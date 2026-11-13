typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8277C338();
extern int fn_8277E998();
extern int fn_8277E9F8();
extern int fn_827808F8();
extern int fn_82780C88();
extern int fn_827810A8();
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82781180(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  bool bVar2;
  char cVar4;
  int iVar3;
  __int64 lVar5;
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  unsigned int uStack_38;
  
  stack_pair_40.first = (unsigned int)param_2 & 0xbfffffff;
  stack_pair_40.second = (unsigned int)param_3 & 0xbfffffff;
  uStack_38 = (unsigned int)param_4 & 0xbfffffff;
  if ((param_2 & 0xbfffffff) == (param_3 & 0xbfffffff)) {
    return;
  }
  if ((param_3 & 0xbfffffff) == (param_4 & 0xbfffffff)) {
    return;
  }
  if ((param_4 & 0xbfffffff) == (param_2 & 0xbfffffff)) {
    return;
  }
  if (*(char *)(param_1 + 5) != '\0') {
    if (*(unsigned int *)(param_1 + 0x184) != *(unsigned int *)(param_1 + 0x1c4)) {
      lVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x184) - 1;
      puVar1 = (unsigned int *)(*(int *)(((unsigned int)((unsigned __int64)lVar5 >> 8) & 0xfffffc) +
                                *(int *)(param_1 + 400)) + ((unsigned int)lVar5 & 0x3ff) * 0xc);
      if ((((unsigned __int64)puVar1[1] == (param_3 & 0xbfffffff)) &&
          ((unsigned __int64)*puVar1 == (param_4 & 0xbfffffff))) ||
         (((unsigned __int64)puVar1[2] == (param_4 & 0xbfffffff) &&
          ((unsigned __int64)*puVar1 == (param_3 & 0xbfffffff))))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if ((bVar2) && (cVar4 = fn_8277C338(param_1,param_2), cVar4 != '\0')) {
        iVar3 = param_1 + 0x194;
        if (((param_2 & 0xffffffff) >> 0x1e & 1) == 0) {
          iVar3 = param_1 + 0x1a4;
        }
        fn_8277E998(iVar3,&stack_pair_40.first);
        goto LAB_82781318;
      }
      if (((3 < *(unsigned int *)(param_1 + 0x194)) && (3 < *(unsigned int *)(param_1 + 0x1a4))) &&
         (1 < *(int *)(param_1 + 0x1c8))) {
        if (*(unsigned int *)(param_1 + 0x1c4) < *(unsigned int *)(param_1 + 0x184)) {
          *(unsigned int *)(param_1 + 0x184) = *(unsigned int *)(param_1 + 0x1c4);
        }
        iVar3 = *(int *)(param_1 + 0x1c8);
        if ((iVar3 == 3) || (iVar3 == 4)) {
          fn_827808F8(param_1);
        }
        else if (iVar3 == 2) {
          fn_82780C88(param_1);
        }
      }
      *(unsigned int *)(param_1 + 0x194) = 0;
      *(unsigned int *)(param_1 + 0x1a4) = 0;
      *(unsigned int *)(param_1 + 0x1c8) = 0;
      *(unsigned int *)(param_1 + 0x1cc) = 0;
      *(unsigned int *)(param_1 + 0x1c4) = *(unsigned int *)(param_1 + 0x184);
      *(unsigned int *)(param_1 + 0x1d0) = 0;
    }
    fn_827810A8(param_1,param_2,param_3,param_4);
  }
LAB_82781318:
  fn_8277E9F8(param_1 + 0x184,&stack_pair_40.first);
  return;
}

