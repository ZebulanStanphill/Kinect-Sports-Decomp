typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_826951F0();
extern int fn_82695370();
extern unsigned int lbl_82005710;


bool fn_82695608(char *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  char cVar4;
  __int64 lVar3;
  double adStack_10;
  
  cVar4 = *param_1;
  if (cVar4 == '\x05') {
    if ((*(unsigned int **)(param_1 + 4))[4] == 0) {
      return false;
    }
    if (6 < *(unsigned char *)(param_2 + 0x7c)) {
      return true;
    }
    cVar4 = fn_826951F0(&adStack_10,**(unsigned int **)(param_1 + 4));
    if (cVar4 == '\0') {
      return false;
    }
  }
  else {
    if (cVar4 != '\x03') {
      if (cVar4 == '\x04') {
        iVar1 = *(int *)(param_1 + 8);
      }
      else {
        if (cVar4 == '\x02') {
          return (bool)param_1[4];
        }
        if (cVar4 != '\x06') {
          if (cVar4 == '\a') {
            lVar3 = fn_82695370();
            return lVar3 != 0;
          }
          if (cVar4 != '\b') {
            return cVar4 == '\v';
          }
        }
        iVar1 = *(int *)(param_1 + 4);
      }
      return iVar1 != 0;
    }
    adStack_10 = *(double *)(param_1 + 8);
  }
  if ((((unsigned __int64)adStack_10 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
     (bVar2 = true, ((unsigned __int64)adStack_10 & 0xfffffffffffff) == 0)) {
    bVar2 = false;
  }
  if (bVar2) {
    return false;
  }
  return adStack_10 != lbl_82005710;
}

