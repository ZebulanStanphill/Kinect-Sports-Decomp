extern unsigned int *auStack_40;
extern int fn_82CE1A58();
extern int fn_82CE1B40();


void fn_828ED508(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  int iVar1;
  int *piVar2;
  __int64 lVar3;
  unsigned int auStack_40 [8];
  
  if (4 < (param_5 & 0xffffffff)) {
    param_5 = 4;
  }
  if (param_1[2] == 0) {
    auStack_40[0] = 0;
    if ((param_5 & 0xffffffff) == 0) {
      fn_82CE1A58();
    }
    else {
      fn_82CE1B40(param_2,param_3,param_4,param_5,0,0,0,0);
    }
    (**(int (***)())(*param_1 + 0x54))(param_1,auStack_40[0]);
    if (param_1[4] != 0) {
      piVar2 = param_1 + 4;
      lVar3 = 7;
      do {
        piVar2 = piVar2 + 1;
        *piVar2 = 0;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      if ((param_5 & 0xffffffff) == 0) {
        iVar1 = fn_82CE1A58(param_2,param_3,param_4,param_1[0xcc] & 0xffff,
                                  param_1[0x10d] & 0xffff,param_1 + 0xc,param_1 + 0xcd,auStack_40);
      }
      else {
        iVar1 = fn_82CE1B40(param_2,param_3,param_4,param_5,param_1[0xcc] & 0xffff,
                                param_1[0x10d] & 0xffff,param_1 + 0xc,param_1 + 0xcd);
      }
      if (iVar1 == 0x3e5) {
        *(unsigned char *)(param_1 + 0x10e) = 0;
        param_1[2] = 1;
        *(unsigned char *)(param_1 + 3) = 1;
      }
      else {
        (**(int (***)())(*param_1 + 0x58))(param_1);
      }
    }
  }
  return;
}

