typedef unsigned char bool;
#define true 1
#define false 0


unsigned __int64 fn_827597C0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  bool bVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  
  if (param_1 != *param_3) {
    return 0;
  }
  iVar1 = param_3[1];
  uVar3 = (unsigned int)*(unsigned short *)(param_2 + 10);
  if ((((uVar3 == *(unsigned short *)(iVar1 + 10)) && (*(char *)(param_2 + 9) == *(char *)(iVar1 + 9))) &&
      (*(float *)(param_2 + 0x10) == *(float *)(iVar1 + 0x10))) &&
     (*(char *)(param_2 + 8) == *(char *)(iVar1 + 8))) {
    uVar4 = 0;
    if (uVar3 != 0) {
      iVar5 = 0;
      do {
        if ((*(char *)(iVar5 + *(int *)(param_2 + 0xc)) != *(char *)(iVar5 + *(int *)(iVar1 + 0xc)))
           || (bVar2 = true,
              *(int *)(iVar5 + *(int *)(param_2 + 0xc) + 4) !=
              *(int *)(iVar5 + *(int *)(iVar1 + 0xc) + 4))) {
          bVar2 = false;
        }
        if (!bVar2) {
          return 0;
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 8;
      } while (uVar4 < uVar3);
    }
    return 1;
  }
  return 0;
}

