typedef unsigned char bool;
#define true 1
#define false 0


void fn_828F5848(unsigned __int64 param_1,char *param_2,__int64 param_3,int param_4,unsigned int param_5)

{
  bool bVar1;
  bool bVar2;
  unsigned int uVar3;
  
  uVar3 = 0;
  bVar1 = false;
  bVar2 = false;
  if ((int)param_3 != 0) {
    do {
      if (*param_2 == '\"') {
        if ((param_4 != 0) && (uVar3 < param_5)) {
          *(unsigned char *)(uVar3 + param_4) = 0x5c;
        }
        uVar3 = uVar3 + 1;
        if (!bVar1) {
          bVar2 = !bVar2;
        }
      }
      bVar1 = false;
      if ((bVar2) && (*param_2 == '\\')) {
        if ((param_4 != 0) && (uVar3 < param_5)) {
          *(unsigned char *)(uVar3 + param_4) = 0x5c;
        }
        uVar3 = uVar3 + 1;
        bVar1 = true;
      }
      if ((param_4 != 0) && (uVar3 < param_5)) {
        *(char *)(uVar3 + param_4) = *param_2;
      }
      uVar3 = uVar3 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    return;
  }
  return;
}

