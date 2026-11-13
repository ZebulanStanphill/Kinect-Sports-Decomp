typedef unsigned char bool;
#define true 1
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82298280();
extern int fn_8249B9D0();
extern int fn_8249C358();
extern int fn_82512A48();
extern int fn_8251CD18();
extern int fn_825200A8();
extern int fn_82535298();
extern int fn_82536288();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_828648F0();
extern int (*lbl_83276798)();


void fn_8249BDC0(int param_1,int param_2)

{
  unsigned int uVar1;
  bool bVar2;
  int iVar4;
  unsigned __int64 uVar3;
  unsigned int auStack_60 [4];
  unsigned char auStack_50 [80];
  
  uVar1 = *(unsigned int *)(param_1 + 4);
  if (uVar1 == 0) {
    bVar2 = true;
  }
  else {
    if (uVar1 != 1) {
      if (2 < uVar1) {
        return;
      }
      iVar4 = fn_8249C358();
      if (iVar4 != 0) {
        fn_8251CD18(*(unsigned int *)(param_1 + 0x70));
      }
      if (param_2 == 0) {
        if ((*(int *)(param_1 + 0x70) != 0) &&
           (iVar4 = fn_825200A8(*(int *)(param_1 + 0x70),param_1 + 0xe0), iVar4 != 0)) {
          return;
        }
        if (lbl_83276798 == (int (**)())0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (*lbl_83276798)();
        }
        if (iVar4 == 0) {
          return;
        }
      }
      goto LAB_8249bf1c;
    }
    if ((param_2 != 0) && (*(int *)(*(int *)(param_1 + 0xb0) + 0x60) != 0)) {
      *(unsigned int *)(*(int *)(param_1 + 0xb0) + 0x4c) = 0;
      fn_82298280();
    }
    bVar2 = *(int *)(*(int *)(param_1 + 0xb0) + 0x60) == 0;
    if (!bVar2) {
      return;
    }
    if (*(int *)(*(int *)(param_1 + 0x110) + 0x24) != 0) {
      fn_82512A48();
      *(unsigned int *)(*(int *)(param_1 + 0x110) + 0x24) = 0;
    }
    if (*(int *)(param_1 + 0x78) != 0) {
      fn_828648F0(auStack_50,0xffffffff832924b0);
      uVar3 = fn_828647D8();
      auStack_60[0] = *(unsigned int *)(param_1 + 0xd8);
      auStack_60[0] = fn_82535298(auStack_60,uVar3,0xffffffff83296bc0,0xffffffff83296bd0);
      fn_82864898(auStack_50);
      fn_82536288(auStack_60);
      *(unsigned int *)(param_1 + 0x78) = 0;
    }
  }
  if (!bVar2) {
    return;
  }
LAB_8249bf1c:
  if (*(int *)(param_1 + 0x88) != 0) {
    *(unsigned int *)(param_1 + 4) = 1;
    *(unsigned int *)(*(int *)(param_1 + 0xb0) + 0x5c) = 1;
  }
  fn_8249B9D0(param_1,*(unsigned int *)(param_1 + 0x10));
  return;
}

