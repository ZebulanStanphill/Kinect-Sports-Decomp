typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82C58F30();
extern int fn_82C69448();
extern int fn_82C7D380();


void fn_82C47AC8(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  unsigned int uVar5;
  
  bVar4 = false;
  bVar3 = false;
  if (*(int *)(param_1 + 0x5710) != 0) {
    fn_82C7D380();
  }
  if (*(int *)(param_1 + 0x3d0c) == 0) {
    *(unsigned int *)(*(int *)(param_1 + 0xea0) + 0x25c) = *(unsigned int *)(param_1 + 0x9c);
    *(unsigned int *)(*(int *)(param_1 + 0xea0) + 0x260) = *(unsigned int *)(param_1 + 0xa0);
    *(unsigned int *)(*(int *)(param_1 + 0xea0) + 0x264) = *(unsigned int *)(param_1 + 0x54ac);
  }
  else {
    *(unsigned int *)(*(int *)(param_1 + 0xeb0) + 0x25c) = *(unsigned int *)(param_1 + 0x9c);
    *(unsigned int *)(*(int *)(param_1 + 0xeb0) + 0x260) = *(unsigned int *)(param_1 + 0xa0);
    *(unsigned int *)(*(int *)(param_1 + 0xeb0) + 0x264) = *(unsigned int *)(param_1 + 0x54ac);
  }
  if ((*(int *)(param_1 + 0x39f4) < 1) ||
     (((*(int *)(param_1 + 0xd74) == 0 && (*(int *)(param_1 + 0xd5c) == 0)) &&
      (*(int *)(param_1 + 0xda4) == 0)))) {
    if (*(int *)(param_1 + 0x3d0c) == 0) {
      uVar5 = *(unsigned int *)(param_1 + 0xea0);
    }
    else {
      uVar5 = *(unsigned int *)(param_1 + 0xeb0);
    }
    fn_82C69448(param_1 + 0xebc,uVar5);
  }
  iVar1 = *(int *)(param_1 + 0x120);
  if ((iVar1 != 2) && (iVar1 != 4)) {
    bVar3 = bVar4;
    if ((1 < *(__int64 *)(param_1 + 0xe30)) &&
       ((*(int *)(param_1 + 0xd70) == 0 && (*(int *)(param_1 + 0x3d0c) == 1)))) {
      bVar3 = true;
    }
    *(unsigned int *)(param_1 + 0xd70) = *(unsigned int *)(param_1 + 0x3d0c);
  }
  if (*(int *)(param_1 + 0x3cb0) != 7) {
    *(unsigned int *)(param_1 + 0x5580) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x39f4);
  if (iVar2 == 0) goto LAB_82c47d48;
  if ((*(__int64 *)(param_1 + 0xe30) == 1) && ((iVar1 == 0 || (iVar1 == 1)))) {
    if (*(int *)(param_1 + 0x3d0c) == 0) {
      uVar5 = *(unsigned int *)(param_1 + 0xea0);
    }
    else {
      fn_82C58F30(param_1);
      uVar5 = *(unsigned int *)(param_1 + 0xeb4);
      *(unsigned int *)(param_1 + 0xd78) = 1;
    }
  }
  else {
    if (iVar2 == 0) goto LAB_82c47d48;
    if (((*(int *)(param_1 + 0xd74) == 0) && (*(int *)(param_1 + 0xd5c) == 0)) &&
       (*(int *)(param_1 + 0xda4) == 0)) {
      if ((iVar2 == 0) || (((iVar1 != 0 && (iVar1 != 1)) && (iVar1 != 5)))) goto LAB_82c47d48;
      if (*(int *)(param_1 + 0xd78) != 0) {
        fn_82C69448(param_1 + 0xebc,*(unsigned int *)(param_1 + 0xeb4));
        *(unsigned int *)(param_1 + 0xd78) = 0;
        if (*(int *)(param_1 + 0x3d0c) != 0) {
          fn_82C58F30(param_1);
          *(unsigned int *)(param_1 + 0xd78) = 1;
        }
        goto LAB_82c47d48;
      }
      if (*(int *)(param_1 + 0x3d0c) == 0) {
        if (iVar1 == 5) goto LAB_82c47d48;
        goto LAB_82c47d3c;
      }
      if (iVar1 == 5) goto LAB_82c47d48;
      fn_82C58F30(param_1);
      *(unsigned int *)(param_1 + 0xd78) = 1;
      if (!bVar3) goto LAB_82c47c98;
      uVar5 = *(unsigned int *)(param_1 + 0xea8);
    }
    else {
      if (*(int *)(param_1 + 0xd5c) == 0) goto LAB_82c47d48;
      if ((iVar1 == 5) && (*(int *)(param_1 + 0xd68) != 0)) {
        if (*(int *)(param_1 + 0x3d0c) == 0) {
          uVar5 = *(unsigned int *)(param_1 + 0xea0);
        }
        else {
LAB_82c47c98:
          uVar5 = *(unsigned int *)(param_1 + 0xeb0);
        }
      }
      else {
LAB_82c47d3c:
        uVar5 = *(unsigned int *)(param_1 + 0xea8);
      }
    }
  }
  fn_82C69448(param_1 + 0xebc,uVar5);
LAB_82c47d48:
  if (((*(int *)(param_1 + 0x39f4) < 1) || (*(int *)(param_1 + 0x120) == 2)) ||
     (*(int *)(param_1 + 0x120) == 4)) {
    *(unsigned int *)(param_1 + 0x54b0) = *(unsigned int *)(param_1 + 0x54ac);
  }
  else {
    *(unsigned int *)(param_1 + 0x54b0) = *(unsigned int *)(param_1 + 0x54b4);
    *(unsigned int *)(param_1 + 0x54b4) = *(unsigned int *)(param_1 + 0x54ac);
  }
  return;
}

