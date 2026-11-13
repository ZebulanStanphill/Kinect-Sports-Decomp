#define true 1
extern int fn_82A2C6F8();
extern int fn_82A2CE70();
extern int fn_82A2D260();
extern int fn_82A2DC18();
extern int fn_82A2E260();
extern int fn_82A2E6A8();
extern int fn_82A2FA30();
extern unsigned int iStack_68;
extern unsigned int uStack_64;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


unsigned __int64
fn_82A2FA90(int param_1,unsigned __int64 param_2,__int64 param_3,unsigned __int64 param_4,__int64 param_5)

{
  unsigned __int64 uVar1;
  int iVar2;
  __int64 lVar3;
  unsigned char *pbVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  int iStack_68;
  unsigned int uStack_64;
  unsigned char abStack_60 [96];
  
  do {
    uVar1 = fn_82A2E6A8(param_1,param_2,param_5,&uStack_64,&uStack_70,&iStack_68);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar8 = (unsigned __int64)uStack_64;
    if ((iStack_68 != 0) || (iVar2 = fn_82A2C6F8(param_1,uVar8), iVar2 == 0)) {
      fn_82A2FA30(param_1,uVar8,*(unsigned int *)(param_1 + 0x8c));
    }
    uVar5 = (0xaa - uVar8 % 0xaa & 0xfffff) << 0xc;
    uVar10 = (unsigned __int64)uStack_70;
    if (uVar5 < uStack_70) {
      uVar10 = uVar5;
    }
    if ((param_4 & 0xffffffff) < uVar10) {
      uVar10 = param_4;
    }
    if (0x10000 < (uVar10 & 0xffffffff)) {
      uVar10 = 0x10000;
    }
    if ((*(char *)(param_1 + 0xce) != '\0') &&
       (uVar1 = fn_82A2E260(param_1,uVar8,((uVar10 & 0xffffffff) >> 0xc) + uVar8 + -1),
       (int)uVar1 < 0)) {
      return uVar1;
    }
    uVar1 = fn_82A2DC18(param_1,uVar8,0,&uStack_6c);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar1 = fn_82A2CE70(param_1,param_3,uVar10,
                            ((*(unsigned int *)(param_1 + 0xac) + uVar8) * 0x1000 & 0xffffffff000) +
                            *(__int64 *)(param_1 + 0x20));
    uVar7 = uStack_6c;
    if ((int)uVar1 < 0) {
      uStack_6c = uStack_6c - *(int *)(param_1 + 0x34);
      iVar2 = (((int)uStack_6c >> 0xc) + (unsigned int)((int)uStack_6c < 0 && (uStack_6c & 0xfff) != 0)) * 8
              + *(int *)(param_1 + 0x30);
      *(char *)(iVar2 + 4) = *(char *)(iVar2 + 4) + -1;
      return uVar1;
    }
    param_4 = param_4 - uVar10;
    param_5 = uVar10 + param_5;
    lVar9 = (uVar8 % 0xaa) * 0x18 + (unsigned __int64)uStack_6c;
    do {
      XeCryptSha(param_3,0x1000,0,0,0,0,abStack_60,0x14);
      pbVar4 = abStack_60;
      lVar6 = lVar9;
      do {
        lVar3 = (unsigned __int64)*(unsigned char *)lVar6 - (unsigned __int64)*pbVar4;
        if (lVar3 != 0) break;
        lVar6 = lVar6 + 1;
        pbVar4 = pbVar4 + 1;
      } while ((int)lVar6 != (int)lVar9 + 0x14);
      if ((int)lVar3 != 0) {
        uVar7 = uVar7 - *(int *)(param_1 + 0x34);
        iVar2 = (((int)uVar7 >> 0xc) + (unsigned int)((int)uVar7 < 0 && (uVar7 & 0xfff) != 0)) * 8 +
                *(int *)(param_1 + 0x30);
        *(char *)(iVar2 + 4) = *(char *)(iVar2 + 4) + -1;
        fn_82A2D260(param_1,0xffffffffc0000032);
        return 0xffffffffc0000032;
      }
      uVar10 = uVar10 - 0x1000;
      lVar9 = lVar9 + 0x18;
      uStack_70 = (unsigned int)uVar10;
      param_3 = param_3 + 0x1000;
    } while (uVar10 != 0);
    uVar7 = uVar7 - *(int *)(param_1 + 0x34);
    iVar2 = (((int)uVar7 >> 0xc) + (unsigned int)((int)uVar7 < 0 && (uVar7 & 0xfff) != 0)) * 8 +
            *(int *)(param_1 + 0x30);
    *(char *)(iVar2 + 4) = *(char *)(iVar2 + 4) + -1;
    if ((param_4 & 0xffffffff) == 0) {
      return 0;
    }
  } while( true );
}

