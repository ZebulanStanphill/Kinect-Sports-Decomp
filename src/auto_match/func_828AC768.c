extern unsigned int *auStack_40;
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();
extern unsigned int uStack_44;


void fn_828AC768(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  unsigned int uStack_44;
  unsigned int auStack_40 [2];
  
  lVar5 = 2;
  puVar4 = &uStack_44;
  do {
    iVar1 = fn_828E9DA8(param_2);
    iVar2 = fn_828E9D90(param_2);
    if (iVar1 - iVar2 < 6) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_828E9FF8(param_2,6);
    }
    lVar5 = lVar5 + -1;
    puVar4 = puVar4 + 1;
    *puVar4 = uVar3;
  } while (lVar5 != 0);
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  *(unsigned int *)(param_1 + 0x10) = auStack_40[0];
  *(unsigned int *)(param_1 + 0x14) = auStack_40[1];
  *(char *)(param_1 + 4) = '\x01' - ((unsigned __int64)auStack_40[0] + (unsigned __int64)auStack_40[1] == 0);
  return;
}

