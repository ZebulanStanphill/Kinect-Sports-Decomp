typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8269D300();


unsigned __int64 fn_8272E030(int *param_1,char param_2)

{
  int iVar1;
  bool bVar2;
  unsigned __int64 uVar3;
  char cVar4;
  unsigned __int64 uVar5;
  
  uVar5 = 0;
  if (((param_1[0x23] & 0xcU) != 0) ||
     (bVar2 = false, (~(*(unsigned char *)((int)param_1 + 0x66) >> 6) & 1) == 0)) {
    bVar2 = true;
  }
  if (!bVar2) {
    if (((*(unsigned short *)(param_1 + 0x32) >> 0xe & 1) != 0) ||
       (bVar2 = false, *(int *)(param_1[0x2d] + 0x10) != 0)) {
      bVar2 = true;
    }
    if (!bVar2) {
      uVar3 = (**(int (***)())(*param_1 + 0x40))(param_1);
      iVar1 = *(int *)(param_1[0x28] + 0x114);
      if ((((param_1[0x23] & 1U) != 0) && (iVar1 != 0)) &&
         ((((*(unsigned short *)(iVar1 + 0x68) & 1) == 0 &&
           (cVar4 = fn_8269D300(uVar3,param_1), cVar4 != '\0')) ||
          ((*(unsigned short *)(iVar1 + 0x68) >> 5 & 1) != 0)))) {
        bVar2 = true;
      }
    }
    if ((bVar2) && (param_2 == '\0')) {
      return 1;
    }
    if (bVar2) {
      return 0;
    }
  }
  if (param_2 != '\0') {
    uVar5 = 0xffffffffffffffff;
  }
  return uVar5;
}

