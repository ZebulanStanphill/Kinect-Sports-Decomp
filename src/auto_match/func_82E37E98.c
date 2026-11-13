extern int fn_82C2C0F0();
extern int fn_82C2C240();
extern int fn_82F691F0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002AE0;


void fn_82E37E98(void)

{
  int iVar1;
  int *piVar3;
  unsigned __int64 uVar2;
  int iVar4;
  int iVar5;
  __int64 lVar6;
  int *piVar7;
  
  piVar3 = (int *)fn_82F6A548();
  iVar5 = *piVar3;
  lVar6 = (__int64)(int)(*(int *)(iVar5 + 0x58) * (unsigned int)*(unsigned short *)(iVar5 + 0x22)) *
          (__int64)*(int *)(iVar5 + 0x100);
  uVar2 = fn_82C2C240(iVar5);
  if ((-1 < (int)uVar2) && (uVar2 = fn_82C2C0F0(iVar5,piVar3[0x4237]), -1 < (int)uVar2)) {
    piVar3[0x1dd1] = piVar3[0x1dd2];
    piVar3[0x1d7c] = lbl_82002AE0;
    piVar3[0x422a] = 0;
    piVar3[0x422b] = 0;
    piVar3[0x422c] = 0;
    piVar3[0x422d] = 0;
    piVar3[0x422e] = 0;
    piVar3[0x422f] = 0;
    piVar3[0x42cc] = 0;
    piVar3[0x42cd] = 0;
    piVar3[0x42ce] = 0;
    piVar3[0x42cf] = 0;
    if ((unsigned __int64)*(unsigned short *)(piVar3 + 0x4234) == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(piVar3[0x1db3],0,lVar6);
    }
    piVar7 = piVar3 + 0x4235;
    *(unsigned int *)(*piVar7 + 0x1c4) = 0;
    *(unsigned short *)(*piVar7 + 0x1c8) = 0;
    *(__int64 *)(*piVar7 + 0x1e8) = (__int64)-*(int *)(iVar5 + 0x100);
    *(unsigned int *)(*piVar7 + 0x204) = 0;
    *(unsigned int *)(*piVar7 + 0x208) = 0;
    *(unsigned int *)(*piVar7 + 0x20c) = 0;
    *(unsigned int *)(*piVar7 + 0x210) = 0;
    uVar2 = fn_82C2C0F0(iVar5,*(unsigned int *)(*piVar7 + 0x214));
    if (-1 < (int)uVar2) {
      iVar5 = 0;
      if (0 < piVar3[0x4236]) {
        iVar4 = 0;
        do {
          iVar5 = iVar5 + 1;
          iVar1 = *(int *)(*piVar7 + 0x10) + iVar4;
          iVar4 = iVar4 + 0x40;
          *(unsigned int *)(iVar1 + 0x30) = 0;
        } while (iVar5 < piVar3[0x4236]);
      }
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(*(unsigned int *)(*piVar7 + 500),0,lVar6);
    }
  }
  fn_82F6A594(uVar2);
  return;
}

