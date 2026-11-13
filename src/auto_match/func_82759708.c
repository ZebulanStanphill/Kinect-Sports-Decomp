typedef unsigned char bool;
#define true 1
#define false 0


unsigned __int64 fn_82759708(int param_1,int param_2)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  
  uVar2 = (unsigned int)*(unsigned short *)(param_1 + 10);
  if ((((uVar2 != *(unsigned short *)(param_2 + 10)) || (*(char *)(param_1 + 9) != *(char *)(param_2 + 9)))
      || (*(float *)(param_1 + 0x10) != *(float *)(param_2 + 0x10))) ||
     (*(char *)(param_1 + 8) != *(char *)(param_2 + 8))) {
    return 0;
  }
  uVar3 = 0;
  if (uVar2 != 0) {
    iVar4 = 0;
    do {
      if ((*(char *)(iVar4 + *(int *)(param_1 + 0xc)) != *(char *)(iVar4 + *(int *)(param_2 + 0xc)))
         || (bVar1 = true,
            *(int *)(iVar4 + *(int *)(param_1 + 0xc) + 4) !=
            *(int *)(iVar4 + *(int *)(param_2 + 0xc) + 4))) {
        bVar1 = false;
      }
      if (!bVar1) {
        return 0;
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 8;
    } while (uVar3 < uVar2);
  }
  return 1;
}

