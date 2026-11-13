typedef unsigned char bool;
#define true 1
#define false 0


bool fn_8242C7E0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = *(int *)(param_1 + 0x174);
  if (((*(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4) != -1) &&
      (*(int *)(*(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4) * 4 +
               *(int *)(*(int *)(iVar3 + 0x5c) + 0x1c4)) != 0)) &&
     (iVar1 = *(int *)(param_1 + 0xa0), iVar1 != 0)) {
    if (*(int *)(iVar1 + 0x40) == 2) {
      if (*(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4) == -1) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4) * 4 +
                        *(int *)(*(int *)(iVar3 + 0x5c) + 0x1c4));
      }
      iVar2 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4);
      if (*(int *)(*(int *)(iVar1 + 0x40) + 0xf8) != 0) {
        if (iVar2 == -1) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(*(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4) * 4 +
                          *(int *)(*(int *)(iVar3 + 0x5c) + 0x1c4));
        }
        if (*(int *)(*(int *)(iVar3 + 0x40) + 0x14c) + 1U <
            *(unsigned int *)(*(int *)(iVar3 + 0x40) + 0x158)) {
          bVar4 = true;
        }
        else {
          bVar4 = (unsigned __int64)*(unsigned int *)(*(int *)(iVar3 + 0x40) + 0x148) + 1 <
                  (unsigned __int64)*(unsigned int *)(*(int *)(iVar3 + 0x40) + 0x154);
        }
        return !bVar4;
      }
      if (iVar2 == -1) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4) * 4 +
                        *(int *)(*(int *)(iVar3 + 0x5c) + 0x1c4));
      }
      if ((*(int *)(*(int *)(iVar1 + 0x40) + 0xf8) != 0) ||
         (bVar4 = false,
         *(int *)(*(int *)(iVar1 + 0x40) + 0x14c) + 1 == *(int *)(*(int *)(iVar1 + 0x40) + 0x158)))
      {
        bVar4 = true;
      }
      if (bVar4) {
        if (*(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4) == -1) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(*(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4) * 4 +
                          *(int *)(*(int *)(iVar3 + 0x5c) + 0x1c4));
        }
        if (*(int *)(iVar3 + 0x14) != 0x13) {
          return true;
        }
      }
    }
    else if ((iVar1 != 0) && (*(int *)(iVar1 + 0x40) == 1)) {
      if (*(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4) == -1) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4) * 4 +
                        *(int *)(*(int *)(iVar3 + 0x5c) + 0x1c4));
      }
      if (*(int *)(**(int **)(iVar1 + 0x40) + 0xa0) != 0) {
        if (*(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4) == -1) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(*(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4) * 4 +
                          *(int *)(*(int *)(iVar3 + 0x5c) + 0x1c4));
        }
        if (*(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4) == -1) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(*(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4) * 4 +
                          *(int *)(*(int *)(iVar3 + 0x5c) + 0x1c4));
        }
        if (*(int *)(iVar2 + 0x14) != 0x13) {
          iVar2 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4);
          if (*(int *)(*(int *)(**(int **)(iVar1 + 0x40) + 0xa0) + 0x150) == 0) {
            if (iVar2 == -1) {
              iVar3 = 0;
            }
            else {
              iVar3 = *(int *)(*(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4) * 4 +
                              *(int *)(*(int *)(iVar3 + 0x5c) + 0x1c4));
            }
            if ((*(int *)(*(int *)(iVar3 + 0x40) + 0xf8) != 0) ||
               (bVar4 = false,
               *(int *)(*(int *)(iVar3 + 0x40) + 0x14c) + 1 ==
               *(int *)(*(int *)(iVar3 + 0x40) + 0x158))) {
              bVar4 = true;
            }
            return bVar4;
          }
          if (iVar2 == -1) {
            iVar1 = 0;
          }
          else {
            iVar1 = *(int *)(*(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4) * 4 +
                            *(int *)(*(int *)(iVar3 + 0x5c) + 0x1c4));
          }
          if (*(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4) == -1) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(*(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4) * 4 +
                            *(int *)(*(int *)(iVar3 + 0x5c) + 0x1c4));
          }
          if ((unsigned __int64)(*(int *)(*(int *)(iVar1 + 0x40) + 0x148) + 1) ==
              (unsigned __int64)*(unsigned int *)(*(int *)(iVar2 + 0x40) + 0x154) /
              (unsigned __int64)*(unsigned int *)(*(int *)(iVar3 + 0x5c) + 0x20c)) {
            return true;
          }
        }
      }
    }
  }
  return false;
}

