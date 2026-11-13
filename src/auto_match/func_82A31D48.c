extern int fn_82A30A08();
extern int fn_82A31840();
extern int fn_82A31960();
extern int fn_82A31BF0();
extern int fn_82A31CB8();


void fn_82A31D48(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_2 + 0x50);
  iVar2 = *(int *)(iVar1 + 0x18);
  iVar3 = *(int *)(iVar2 + 8);
  RtlEnterCriticalSection();
  iVar4 = *(int *)(param_1 + 0x88);
  if (iVar4 != 0) goto LAB_82a31f08;
  if ((*(unsigned char *)(iVar2 + 2) & 0x10) != 0) {
    iVar4 = -0x3ffffed8;
    goto LAB_82a31f08;
  }
  if ((*(char *)(param_1 + 0xce) != '\0') || (*(int *)(iVar1 + 8) == 0xe)) {
    iVar1 = *(int *)(iVar1 + 8);
    iVar4 = 0;
    if (iVar1 == 4) {
      if ((*(unsigned char *)(iVar3 + 0x35) & 4) != 0) goto LAB_82a31edc;
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar4 = fn_82A31840(param_1,iVar3,*(unsigned int *)(param_2 + 0x1c));
        goto LAB_82a31f08;
      }
    }
    else if (iVar1 == 10) {
      if ((*(unsigned char *)(iVar3 + 0x35) & 4) != 0) goto LAB_82a31edc;
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar4 = fn_82A31960(param_1,param_2,iVar3,*(unsigned int *)(param_2 + 0x1c));
        goto LAB_82a31f08;
      }
    }
    else if (iVar1 == 0xd) {
      if ((*(unsigned char *)(iVar3 + 0x35) & 4) != 0) goto LAB_82a31edc;
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar4 = fn_82A31BF0(param_1,iVar3,*(unsigned int *)(param_2 + 0x1c));
        goto LAB_82a31f08;
      }
    }
    else {
      if (iVar1 == 0xe) {
        *(unsigned __int64 *)(iVar2 + 0x14) = **(unsigned __int64 **)(param_2 + 0x1c);
        goto LAB_82a31f08;
      }
      if (iVar1 == 0x13) {
        if ((*(unsigned char *)(iVar3 + 0x35) & 2) != 0) goto LAB_82a31edc;
        if (*(int *)(iVar3 + 0xc) == 0) {
          if (**(int **)(param_2 + 0x1c) == 0) {
            iVar4 = fn_82A30A08(param_1,iVar3,(*(int **)(param_2 + 0x1c))[1],0);
          }
          else {
            iVar4 = -0x3fffff81;
          }
          goto LAB_82a31f08;
        }
      }
      else {
        if ((iVar1 != 0x14) || ((*(unsigned char *)(iVar3 + 0x35) & 2) != 0)) {
LAB_82a31edc:
          iVar4 = -0x3ffffff3;
          goto LAB_82a31f08;
        }
        if (*(int *)(iVar3 + 0xc) == 0) {
          iVar4 = fn_82A31CB8(param_1,iVar3,*(unsigned int *)(param_2 + 0x1c));
          goto LAB_82a31f08;
        }
      }
    }
  }
  iVar4 = -0x3fffffde;
LAB_82a31f08:
  RtlLeaveCriticalSection(param_1);
  *(int *)(param_2 + 0x10) = iVar4;
  IoCompleteRequest(param_2,1);
  return;
}

