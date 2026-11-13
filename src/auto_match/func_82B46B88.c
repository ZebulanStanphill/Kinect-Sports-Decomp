extern unsigned int *auStack_20;
extern int fn_82AA66A8();
extern int fn_82B46050();


unsigned __int64 fn_82B46B88(int param_1,int param_2)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned char auStack_20 [8];
  
  iVar2 = *(int *)(param_2 + 4);
  if (iVar2 == 0xe) {
    uVar1 = (__int64)*(int *)(param_2 + 0x18) * (__int64)*(int *)(param_2 + 0x14);
  }
  else {
    if (iVar2 != 0xf) {
      if (iVar2 == 0x1c) {
        iVar2 = fn_82B46050(param_1,param_2,auStack_20);
        iVar2 = *(int *)(*(int *)(iVar2 * 0x28 + *(int *)(param_1 + 0xc) + 0x10) + 0x30);
        if (*(int *)(iVar2 + 4) == 8) {
          if (*(int *)(param_2 + 0x18) == 0) goto code_r0x82b46c80;
          iVar2 = *(int *)(iVar2 + 0x10);
          if (*(int *)(iVar2 + 4) != 9) {
            iVar2 = 0;
          }
        }
        else if ((iVar2 == 0) || (*(int *)(iVar2 + 4) != 9)) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c1);
        }
        if (iVar2 != 0) {
          if (*(int *)(iVar2 + 0x10) == 2) {
            if ((*(unsigned int *)(iVar2 + 0x24) & 0x400) == 0) {
              return (unsigned __int64)*(unsigned int *)(iVar2 + 0x1c);
            }
          }
          else if (*(int *)(iVar2 + 0x1c) != 1) goto code_r0x82b46c80;
          return (unsigned __int64)*(unsigned int *)(iVar2 + 0x20);
        }
      }
code_r0x82b46c80:
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    if (*(unsigned int *)(param_2 + 0x10) < 4) {
      uVar1 = 1;
    }
    else {
      if (*(unsigned int *)(param_2 + 0x10) != 6) goto code_r0x82b46c80;
      uVar1 = (unsigned __int64)*(unsigned int *)(param_2 + 0x1c);
    }
  }
  return uVar1;
}

