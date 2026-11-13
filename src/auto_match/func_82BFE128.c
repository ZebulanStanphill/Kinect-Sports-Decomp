extern int fn_82BFD650();
extern int fn_82BFD918();


unsigned __int64 fn_82BFE128(int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x40) == 0x4c665175)) {
    puVar1 = *(unsigned int **)(param_1 + 0x4c);
    uVar5 = 0;
    if ((puVar1 == (unsigned int *)0x0) || (uVar2 = *puVar1, (uVar2 & 4) == 0)) {
      iVar4 = fn_82BFD650(param_1,(unsigned __int64)param_2 << 0x20);
      if (iVar4 == 0) {
        return 0xffffffff80310001;
      }
    }
    else {
      uVar3 = fn_82BFD918(param_1,(unsigned __int64)param_2 << 0x20,puVar1[1],puVar1[5],uVar2 >> 4 & 1,
                            puVar1[3],uVar2 >> 6 & 1);
      if ((uVar3 & 0xffffffff) != 0) {
        if ((uVar3 & 0xffffffff) == 0x102) {
          uVar5 = 0xffffffff80310001;
        }
        else {
          uVar5 = uVar3;
          if (0 < (int)uVar3) {
            uVar5 = uVar3 & 0xffff | 0x80070000;
          }
        }
      }
    }
    return uVar5;
  }
  return 0xffffffff80070057;
}

