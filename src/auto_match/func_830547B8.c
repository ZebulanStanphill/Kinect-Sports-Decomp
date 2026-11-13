extern unsigned int *auStack_38;
extern int fn_83054288();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;


void fn_830547B8(int param_1,int param_2,unsigned __int64 param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  struct { int first; int second; } stack_pair_40;

  unsigned char auStack_38 [8];
  
  if ((*(unsigned int *)(param_2 + 0x30) & 0xe0000000) == 0x40000000) {
    iVar3 = *(int *)(param_1 + 0xac);
    iVar1 = 0;
    while (iVar2 = iVar3, iVar2 != 0) {
      if (iVar2 == param_2) {
        if (iVar2 == *(int *)(param_1 + 0xac)) {
          *(unsigned int *)(param_1 + 0xac) = *(unsigned int *)(iVar2 + 0xc);
        }
        else {
          *(unsigned int *)(iVar1 + 0xc) = *(unsigned int *)(iVar2 + 0xc);
        }
        break;
      }
      iVar1 = iVar2;
      iVar3 = *(int *)(iVar2 + 0xc);
    }
  }
  else {
    if (param_4 == '\0') {
      iVar1 = *(int *)(param_1 + 0xa0);
      if (iVar1 != param_2) {
        stack_pair_40.second = 0;
        stack_pair_40.first = iVar1;
        if (iVar1 != 0) {
          do {
            stack_pair_40.first = iVar1;
            if (stack_pair_40.first == param_2) {
              fn_83054288(auStack_38,param_1 + 0xa0,&stack_pair_40.first);
              goto LAB_830548d4;
            }
            iVar1 = *(int *)(stack_pair_40.first + 0xc);
            stack_pair_40.second = stack_pair_40.first;
          } while (*(int *)(stack_pair_40.first + 0xc) != 0);
          stack_pair_40.first = 0;
        }
        goto LAB_830548d4;
      }
    }
    iVar1 = *(int *)(param_1 + 0xa0);
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0xc) == 0) {
        *(unsigned int *)(param_1 + 0xa0) = 0;
        *(unsigned int *)(param_1 + 0xa4) = 0;
        *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + -1;
      }
      else {
        *(unsigned int *)(param_1 + 0xa0) = *(unsigned int *)(iVar1 + 0xc);
        *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + -1;
      }
    }
  }
LAB_830548d4:
  iVar1 = *(int *)(param_1 + 0x60);
  iVar3 = iVar1 + 0x10;
  RtlEnterCriticalSection(iVar3);
  if (*(int *)(iVar1 + 0x98) == 0) {
    *(int *)(iVar1 + 0x98) = param_2;
    *(unsigned int *)(param_2 + 0xc) = 0;
    RtlLeaveCriticalSection(iVar3);
  }
  else {
    *(int *)(param_2 + 0xc) = *(int *)(iVar1 + 0x98);
    *(int *)(iVar1 + 0x98) = param_2;
    RtlLeaveCriticalSection(iVar3);
  }
  return;
}

