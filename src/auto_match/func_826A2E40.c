extern unsigned int *auStack_40;
extern int fn_8267B890();
extern int fn_82695DA0();
extern int fn_82696958();
extern int fn_826A25C0();
extern int fn_826A2CB0();
extern int fn_826EBE48();


void fn_826A2E40(int param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  char cVar7;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar3;
  unsigned int uVar6;
  unsigned int uVar8;
  int iVar9;
  unsigned int auStack_40;
  
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  cVar7 = fn_826A25C0();
  if (cVar7 == '\0') {
    uVar1 = *(unsigned int *)(*(int *)(param_2 + 0x78) + 0x288);
    iVar4 = fn_82696958(param_3,param_2);
    if ((iVar4 == 0) ||
       (iVar5 = (**(int (***)())(*(int *)(iVar4 + 0x10) + 8))(iVar4 + 0x10), iVar5 != 7)) {
      uVar3 = fn_8267B890(uVar1,0x10,0);
      if ((uVar3 & 0xffffffff) == 0) {
        auStack_40 = 0;
      }
      else {
        auStack_40 = fn_82695DA0(uVar3,param_3);
      }
      fn_826EBE48(param_1 + 0x34,&auStack_40);
    }
    else if ((unsigned __int64)*(unsigned int *)(iVar4 + 0x38) != 0) {
      uVar2 = *(unsigned int *)(param_1 + 0x38);
      fn_826A2CB0(param_1,(unsigned __int64)*(unsigned int *)(iVar4 + 0x38) + (unsigned __int64)uVar2);
      uVar8 = 0;
      if (*(int *)(iVar4 + 0x38) != 0) {
        iVar9 = 0;
        iVar5 = uVar2 << 2;
        do {
          uVar3 = fn_8267B890(uVar1,0x10,0);
          if ((uVar3 & 0xffffffff) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = fn_82695DA0(uVar3,*(unsigned int *)(*(int *)(iVar4 + 0x34) + iVar9));
          }
          uVar8 = uVar8 + 1;
          iVar9 = iVar9 + 4;
          *(unsigned int *)(*(int *)(param_1 + 0x34) + iVar5) = uVar6;
          iVar5 = iVar5 + 4;
        } while (uVar8 < *(unsigned int *)(iVar4 + 0x38));
      }
    }
  }
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -1;
  return;
}

