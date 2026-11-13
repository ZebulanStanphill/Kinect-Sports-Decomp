typedef unsigned char bool;
#define true 1
extern int fn_82ABDD90();
extern int fn_82ABE5F8();
extern int fn_82B86348();


int fn_82B86888(int param_1,unsigned __int64 param_2,int param_3,unsigned int param_4)

{
  bool bVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  unsigned int uVar6;
  int *piVar7;
  unsigned __int64 uVar8;
  
  uVar6 = param_4 & 0xff;
  if ((param_2 & 0xffffffff) != 0) {
    piVar4 = (int *)(param_3 + -4);
    uVar8 = param_2;
    do {
      piVar4 = piVar4 + 1;
      uVar6 = *piVar4 + uVar6;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  iVar3 = (uVar6 % 7 + 0xf) * 4;
  piVar4 = (int *)(iVar3 + param_1);
  iVar3 = *(int *)(iVar3 + param_1);
  if (iVar3 != 0) {
    piVar7 = piVar4;
    do {
      if ((*(unsigned int *)(iVar3 + 8) & 0x3f80) == 0x3980) {
        *piVar7 = *(int *)(iVar3 + 0x20);
        if ((*(unsigned int *)(param_1 + 0x28) & 0x1000) == 0) {
          uVar6 = *(unsigned int *)(iVar3 + 8);
          uVar2 = fn_82ABDD90(param_1,uVar6 >> 7 & 0x7f,uVar6 >> 0x13 & 7,uVar6 >> 0xe & 7);
          fn_82ABE5F8(param_1,iVar3,uVar2,0x23);
        }
        else {
          *(unsigned int *)(iVar3 + 0x20) = *(unsigned int *)(param_1 + 0x21c);
          *(int *)(param_1 + 0x21c) = iVar3;
        }
      }
      else {
        if (((((~(unsigned __int64)*(unsigned int *)(param_1 + 0x28) & 0xffffffff) >> 0xe & 1) == 0) ||
            ((param_4 & 0xff) == (*(unsigned int *)(iVar3 + 0x14) >> 2 & 0xff))) &&
           ((param_2 & 0xffffffff) <= ((unsigned __int64)(*(unsigned int *)(iVar3 + 8) >> 0xe) & 7))) {
          bVar1 = true;
          if ((param_2 & 0xffffffff) != 0) {
            piVar5 = (int *)(param_3 + -4);
            piVar7 = (int *)(iVar3 + 0x28);
            uVar8 = param_2;
            do {
              piVar7 = piVar7 + 1;
              piVar5 = piVar5 + 1;
              bVar1 = (bool)(*piVar7 == *piVar5 & bVar1);
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          if (bVar1) {
            return iVar3;
          }
        }
        piVar7 = (int *)(iVar3 + 0x20);
      }
      iVar3 = *piVar7;
    } while (iVar3 != 0);
  }
  iVar3 = fn_82B86348(param_1,param_2,param_3,param_4);
  *(int *)(iVar3 + 0x20) = *piVar4;
  *piVar4 = iVar3;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  return iVar3;
}

