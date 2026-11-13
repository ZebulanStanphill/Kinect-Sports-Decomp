extern unsigned int *auStack_38;
extern int fn_830508A0();
extern int fn_83054288();


void fn_83054920(int param_1,unsigned __int64 *param_2,unsigned __int64 param_3,char param_4)

{
  unsigned __int64 *puVar1;
  int iVar2;
  unsigned __int64 *puVar3;
  unsigned __int64 *puVar4;
  int iVar5;
  unsigned __int64 *puStack_40;
  unsigned __int64 *puStack_3c;
  unsigned char auStack_38 [8];
  
  if ((*(unsigned int *)(param_2 + 6) & 0xe0000000) == 0x40000000) {
    puVar4 = *(unsigned __int64 **)(param_1 + 0xbc);
    puVar1 = (unsigned __int64 *)0x0;
    while (puVar3 = puVar4, puVar3 != (unsigned __int64 *)0x0) {
      if (puVar3 == param_2) {
        if (puVar3 == *(unsigned __int64 **)(param_1 + 0xbc)) {
          *(unsigned int *)(param_1 + 0xbc) = *(unsigned int *)((int)puVar3 + 0xc);
        }
        else {
          *(unsigned int *)((int)puVar1 + 0xc) = *(unsigned int *)((int)puVar3 + 0xc);
        }
        break;
      }
      puVar1 = puVar3;
      puVar4 = *(unsigned __int64 **)((int)puVar3 + 0xc);
    }
  }
  else {
    if (param_4 == '\0') {
      puVar1 = *(unsigned __int64 **)(param_1 + 0xb0);
      if (puVar1 != param_2) {
        puStack_3c = (unsigned __int64 *)0x0;
        puStack_40 = puVar1;
        if (puVar1 != (unsigned __int64 *)0x0) {
          do {
            puStack_40 = puVar1;
            if (puStack_40 == param_2) {
              fn_83054288(auStack_38,param_1 + 0xb0,&puStack_40);
              goto LAB_83054a40;
            }
            puVar1 = *(unsigned __int64 **)((int)puStack_40 + 0xc);
            puStack_3c = puStack_40;
          } while (*(unsigned __int64 **)((int)puStack_40 + 0xc) != (unsigned __int64 *)0x0);
          puStack_40 = (unsigned __int64 *)0x0;
        }
        goto LAB_83054a40;
      }
    }
    iVar2 = *(int *)(param_1 + 0xb0);
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 0xc) == 0) {
        *(unsigned int *)(param_1 + 0xb0) = 0;
        *(unsigned int *)(param_1 + 0xb4) = 0;
        *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + -1;
      }
      else {
        *(unsigned int *)(param_1 + 0xb0) = *(unsigned int *)(iVar2 + 0xc);
        *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + -1;
      }
    }
  }
LAB_83054a40:
  fn_830508A0(param_1,*param_2,param_3);
  iVar2 = *(int *)(param_1 + 0x60);
  iVar5 = iVar2 + 0x10;
  RtlEnterCriticalSection(iVar5);
  if (*(int *)(iVar2 + 0x98) == 0) {
    *(unsigned __int64 **)(iVar2 + 0x98) = param_2;
    *(unsigned int *)((int)param_2 + 0xc) = 0;
    RtlLeaveCriticalSection(iVar5);
  }
  else {
    *(int *)((int)param_2 + 0xc) = *(int *)(iVar2 + 0x98);
    *(unsigned __int64 **)(iVar2 + 0x98) = param_2;
    RtlLeaveCriticalSection(iVar5);
  }
  return;
}

