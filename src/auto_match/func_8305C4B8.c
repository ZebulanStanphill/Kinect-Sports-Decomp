extern unsigned int *auStack_3c;
extern int fn_8305C260();
extern unsigned int uStack_40;


__int64 fn_8305C4B8(int param_1)

{
  __int64 lVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned int uStack_40;
  unsigned int auStack_3c;
  
  uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 4);
  lVar2 = 0;
  if (uVar3 != 0) {
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x20)) {
      do {
        lVar1 = fn_8305C260(param_1,uVar3,0,0,0);
        iVar4 = iVar4 + 1;
        lVar2 = lVar1 + lVar2;
        uVar3 = uVar3 + 0x30;
      } while (iVar4 < *(int *)(param_1 + 0x20));
    }
    auStack_3c = 0;
    uStack_40 = 0;
    lVar1 = fn_8305C260(param_1,*(unsigned int *)(param_1 + 4),1,&auStack_3c,&uStack_40);
    lVar2 = lVar1 + lVar2;
  }
  return lVar2;
}

