extern unsigned int *auStack_120;
extern unsigned int *auStack_140;
extern unsigned int *auStack_160;
extern unsigned int *auStack_170;
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern int fn_82230110();
extern int fn_82230218();
extern int fn_82230300();
extern int fn_822402F8();
extern int fn_825346D0();
extern int fn_82536D88();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_828648F0();
extern unsigned int lbl_8327F878;


unsigned __int64 fn_82534350(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar4;
  unsigned __int64 uVar3;
  unsigned int uVar5;
  int iVar6;
  unsigned char auStack_170;
  unsigned char auStack_160 [32];
  unsigned char auStack_140 [32];
  unsigned char auStack_120 [48];
  unsigned char auStack_f0 [32];
  unsigned char auStack_d0 [32];
  unsigned char auStack_b0 [32];
  unsigned char auStack_90 [32];
  unsigned char auStack_70 [32];
  unsigned char auStack_50 [80];
  
  uVar1 = lbl_8327F878;
  uVar5 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar6 = 0;
    auStack_170 = 0x2e;
    do {
      fn_82230110(auStack_160,*(unsigned int *)(iVar6 + *(int *)(param_1 + 0xc)));
      uVar2 = fn_82536D88(auStack_160,&auStack_170,0xffffffffffffffff,1);
      if ((int)uVar2 != -1) {
        fn_82230300(auStack_140,0,0);
        fn_82230218(auStack_140,auStack_160,0,uVar2);
        fn_822402F8(auStack_160,auStack_140);
        fn_82230300(auStack_140,1,0);
      }
      fn_828648F0(auStack_120,auStack_160);
      fn_828647D8(auStack_120);
      iVar4 = fn_825346D0(uVar1,0,auStack_160);
      if (iVar4 < 0) {
        fn_82864898(auStack_120);
        fn_82230300(auStack_160,1,0);
        return 0xffffffff80004005;
      }
      fn_82864898(auStack_120);
      fn_82230300(auStack_160,1,0);
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (uVar5 < *(unsigned int *)(param_1 + 8));
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar6 = 0;
    do {
      fn_82230110(auStack_50,*(unsigned int *)(*(int *)(param_1 + 0x14) + iVar6));
      uVar3 = fn_825346D0(uVar1,1,auStack_50);
      fn_82230300(auStack_50,1,0);
      if ((uVar3 & 0xffffffff) >> 0x1f != 0) {
        return 0xffffffff80004005;
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 8;
    } while (uVar5 < *(unsigned int *)(param_1 + 0x10));
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar6 = 0;
    do {
      fn_82230110(auStack_f0,*(unsigned int *)(*(int *)(param_1 + 0x1c) + iVar6));
      uVar3 = fn_825346D0(uVar1,2,auStack_f0);
      fn_82230300(auStack_f0,1,0);
      if ((uVar3 & 0xffffffff) >> 0x1f != 0) {
        return 0xffffffff80004005;
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 8;
    } while (uVar5 < *(unsigned int *)(param_1 + 0x18));
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar6 = 0;
    do {
      fn_82230110(auStack_b0,*(unsigned int *)(*(int *)(param_1 + 0x24) + iVar6));
      uVar3 = fn_825346D0(uVar1,3,auStack_b0);
      fn_82230300(auStack_b0,1,0);
      if ((uVar3 & 0xffffffff) >> 0x1f != 0) {
        return 0xffffffff80004005;
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 8;
    } while (uVar5 < *(unsigned int *)(param_1 + 0x20));
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar6 = 0;
    do {
      fn_82230110(auStack_70,*(unsigned int *)(*(int *)(param_1 + 0x2c) + iVar6));
      uVar3 = fn_825346D0(uVar1,4,auStack_70);
      fn_82230300(auStack_70,1,0);
      if ((uVar3 & 0xffffffff) >> 0x1f != 0) {
        return 0xffffffff80004005;
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 8;
    } while (uVar5 < *(unsigned int *)(param_1 + 0x28));
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar6 = 0;
    do {
      fn_82230110(auStack_d0,*(unsigned int *)(*(int *)(param_1 + 0x34) + iVar6));
      uVar3 = fn_825346D0(uVar1,5,auStack_d0);
      fn_82230300(auStack_d0,1,0);
      if ((uVar3 & 0xffffffff) >> 0x1f != 0) {
        return 0xffffffff80004005;
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 8;
    } while (uVar5 < *(unsigned int *)(param_1 + 0x30));
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 0x38) != 0) {
    iVar6 = 0;
    do {
      fn_82230110(auStack_90,*(unsigned int *)(*(int *)(param_1 + 0x3c) + iVar6));
      uVar3 = fn_825346D0(uVar1,6,auStack_90);
      fn_82230300(auStack_90,1,0);
      if ((uVar3 & 0xffffffff) >> 0x1f != 0) {
        return 0xffffffff80004005;
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 8;
    } while (uVar5 < *(unsigned int *)(param_1 + 0x38));
  }
  return 0;
}

