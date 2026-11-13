extern int fn_82E9C450();
extern int fn_82E9DB40();
extern int fn_82EA0AC0();
extern int fn_82EA1A40();
extern int fn_82EA31D0();
extern int fn_82EA5D28();
extern int fn_82EA6C00();
extern int fn_82EA8268();
extern int fn_82F691F0();


void fn_82E97EA0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int (**pcVar3)();
  int (**pcVar4)();
  int (**pcVar5)();
  unsigned int uVar6;
  
  iVar1 = *(int *)(param_1 + 0x684);
  if ((iVar1 == *(int *)(param_1 + 0x688)) || (*(int *)(param_1 + 0x4f20) == 0)) {
    *(unsigned int *)(param_1 + 0x684) = 0;
    if (param_2 == 0) {
      uVar6 = 0xf;
    }
    else if (param_2 == 1) {
      uVar6 = 2;
    }
    else {
      uVar6 = 1;
      if (param_2 != 2) {
        uVar6 = 0;
      }
    }
    *(unsigned int *)(param_1 + 0x688) = uVar6;
    *(unsigned int *)(param_1 + 0x68c) = 7;
    if (param_2 == 0) {
      *(unsigned int *)(param_1 + 0x6d5c) = 0;
    }
    else {
      *(unsigned int *)(param_1 + 0x6d5c) = 1;
    }
    if (*(int *)(param_1 + 0x6d5c) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(*(unsigned int *)(param_1 + 0x690),0xffffffffffffffff,
                   ((__int64)
                    (int)(((unsigned __int64)*(unsigned int *)(param_1 + 0x2d0) + 0x1f & 0xffffffff) >> 5) *
                    (__int64)*(int *)(param_1 + 0x2d4) & 0x3fffffffU) << 2);
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x89c);
    if (iVar2 == 0) {
      *(unsigned int *)(param_1 + 0x6d5c) = 1;
      *(unsigned int *)(param_1 + 0x68c) = 1;
      *(int *)(param_1 + 0x684) = iVar1 + 1;
    }
    else {
      *(unsigned int *)(param_1 + 0x6d5c) = 0;
      if (iVar2 == 1) {
        *(unsigned int *)(param_1 + 0x68c) = 1;
        *(int *)(param_1 + 0x684) = iVar1 + 1;
      }
      else if (iVar2 == 2) {
        *(unsigned int *)(param_1 + 0x68c) = 2;
        *(int *)(param_1 + 0x684) = iVar1 + 1;
      }
      else {
        *(unsigned int *)(param_1 + 0x68c) = 4;
        *(int *)(param_1 + 0x684) = iVar1 + 1;
      }
    }
  }
  *(unsigned int *)(param_1 + 0x680) = 1;
  if (*(int *)(param_1 + 0x76e0) == 0) {
    *(unsigned int *)(param_1 + 0x5264) = 1;
  }
  if (param_2 == 0) {
    *(unsigned int *)(param_1 + 0x6dd0) = 2;
    *(unsigned int *)(param_1 + 0x6d74) = 0;
    *(unsigned int *)(param_1 + 0x6d88) = 1;
    *(unsigned int *)(param_1 + 0x6d98) = 1;
    pcVar5 = fn_82EA0AC0;
    pcVar4 = fn_82EA5D28;
    *(unsigned int *)(param_1 + 0x6dd8) = 0x40;
    pcVar3 = fn_82E9C450;
  }
  else if (param_2 == 1) {
    *(unsigned int *)(param_1 + 0x6dd0) = 4;
    *(unsigned int *)(param_1 + 0x6d74) = 0;
    *(unsigned int *)(param_1 + 0x6d88) = 1;
    *(unsigned int *)(param_1 + 0x6d98) = 1;
    pcVar5 = fn_82EA1A40;
    pcVar4 = fn_82EA6C00;
    *(unsigned int *)(param_1 + 0x6dd8) = 0x20;
    pcVar3 = fn_82E9C450;
  }
  else {
    if (param_2 == 2) {
      *(unsigned int *)(param_1 + 0x6d74) = 0;
      *(unsigned int *)(param_1 + 0x6d88) = 1;
      *(unsigned int *)(param_1 + 0x6d98) = 1;
      *(unsigned int *)(param_1 + 0x6dd4) = 2;
      *(unsigned int *)(param_1 + 0x6dd0) = 6;
      *(unsigned int *)(param_1 + 0x6dd8) = 0x20;
      *(int (***)())(param_1 + 0x6f28) = fn_82EA1A40;
      *(int (***)())(param_1 + 0x6f2c) = fn_82EA6C00;
      *(int (***)())(param_1 + 0x6f30) = fn_82E9C450;
      return;
    }
    *(unsigned int *)(param_1 + 0x6d74) = 1;
    *(unsigned int *)(param_1 + 0x6d98) = 0;
    if (param_2 == 3) {
      *(unsigned int *)(param_1 + 0x6d88) = 1;
      *(unsigned int *)(param_1 + 0x6dd4) = 2;
      *(unsigned int *)(param_1 + 0x6dd0) = 8;
      *(unsigned int *)(param_1 + 0x6dd8) = 0x20;
      *(int (***)())(param_1 + 0x6f28) = fn_82EA1A40;
      *(int (***)())(param_1 + 0x6f2c) = fn_82EA6C00;
      *(int (***)())(param_1 + 0x6f30) = fn_82E9DB40;
      return;
    }
    *(unsigned int *)(param_1 + 0x6dd8) = 4;
    *(unsigned int *)(param_1 + 0x6d88) = 0;
    pcVar5 = fn_82EA31D0;
    pcVar4 = fn_82EA8268;
    *(unsigned int *)(param_1 + 0x6dd0) = 0x10;
    pcVar3 = fn_82E9DB40;
  }
  *(int (***)())(param_1 + 0x6f28) = pcVar5;
  *(int (***)())(param_1 + 0x6f2c) = pcVar4;
  *(int (***)())(param_1 + 0x6f30) = pcVar3;
  *(unsigned int *)(param_1 + 0x6dd4) = 2;
  return;
}

