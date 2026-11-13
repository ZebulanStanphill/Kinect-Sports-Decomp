extern int fn_82372DE8();
extern int fn_82372ED8();
extern int fn_82372F88();


__int64 fn_82372A58(int param_1)

{
  int iVar1;
  unsigned char bVar2;
  __int64 lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x204) == 0) {
    lVar3 = fn_82372F88();
    iVar4 = (int)(lVar3 + 1) - ((int)lVar3 + (unsigned int)(lVar3 + 1 == 0));
  }
  else {
    iVar4 = *(int *)(param_1 + 0x658);
  }
  iVar1 = *(int *)(param_1 + 0xa0);
  if ((iVar1 == 0) || (bVar2 = 1, *(int *)(iVar1 + 0x40) != 1)) {
    bVar2 = 0;
  }
  if (*(int *)(param_1 + 0xa04) == 0) {
    if (*(int *)(param_1 + 0xa00) == 0) {
      if (iVar4 == 0) {
        if ((*(int *)(param_1 + 0x9e0) == 0) && ((iVar1 == 0 || (*(int *)(iVar1 + 0x40) != 1)))) {
          lVar3 = 6;
          *(unsigned int *)(param_1 + 0x9e0) = 1;
        }
        else if ((*(int *)(param_1 + 0x9f0) == 0) && (*(int *)(param_1 + 0x218) == 0)) {
          lVar3 = 0xb;
          *(unsigned int *)(param_1 + 0x9f0) = 1;
        }
        else if ((*(int *)(param_1 + 0x9e4) == 0) && (*(int *)(param_1 + 0x348) != 0)) {
          lVar3 = 7;
          *(unsigned int *)(param_1 + 0x9e4) = 1;
        }
        else if ((*(int *)(param_1 + 0x9ec) == 0) && (iVar4 = fn_82372ED8(param_1), iVar4 != 0)) {
          lVar3 = 8;
          *(unsigned int *)(param_1 + 0x9ec) = 1;
        }
        else if ((*(int *)(param_1 + 0x9e8) == 0) &&
                ((iVar4 = fn_82372DE8(param_1,0), iVar4 != 0 ||
                 (iVar4 = fn_82372DE8(param_1,1), iVar4 != 0)))) {
          lVar3 = 9;
          *(unsigned int *)(param_1 + 0x9e8) = 1;
        }
        else {
          *(unsigned int *)(param_1 + 0x9e0) = 0;
          lVar3 = 2;
          *(unsigned int *)(param_1 + 0x9e4) = 0;
          *(unsigned int *)(param_1 + 0x9e8) = 0;
          *(unsigned int *)(param_1 + 0x9ec) = 0;
          *(unsigned int *)(param_1 + 0x9f0) = 0;
        }
      }
      else {
        lVar3 = (-(unsigned __int64)bVar2 << 0x20 | -(unsigned __int64)bVar2 & 0xfffffffd) + 0xf;
      }
    }
    else {
      lVar3 = 5;
      *(unsigned int *)(param_1 + 0xa00) = 0;
    }
  }
  else {
    lVar3 = 10;
    *(unsigned int *)(param_1 + 0xa04) = 0;
  }
  return lVar3;
}

