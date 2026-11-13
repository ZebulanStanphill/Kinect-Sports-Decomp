extern double dRam83248e60;
extern double dRam83248e68;
extern double dRam83248e70;
extern double dRam83248e78;
extern double dRam83248e80;
extern int fn_82ED4B70();
extern int fn_82ED9AF0();
extern int fn_82F02E20();
extern int iRam83248e50;
extern unsigned int lbl_82017EF8;
extern unsigned int lbl_83248E44;
extern unsigned int lbl_83248E48;


void fn_82E8CB60(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  __int64 lVar3;
  __int64 lVar4;
  int iVar5;
  
  if ((lbl_83248E44 == 0) && (lbl_83248E48 == 0)) {
    return;
  }
  if ((*(int *)(param_1 + 0x64c) == 0) || (iVar1 = *(int *)(param_1 + 0x10), iVar1 == 0)) {
    fn_82ED4B70(param_1,*(unsigned int *)(param_1 + 0x4a94),*(unsigned int *)(param_1 + 0x4a98),
                      *(unsigned int *)(param_1 + 0x4a9c),(unsigned __int64)*(unsigned int *)(param_1 + 0x31c),
                      (unsigned __int64)*(unsigned int *)(param_1 + 800),
                      (unsigned __int64)*(unsigned int *)(param_1 + 0x31c) + 0x40,
                      (unsigned __int64)*(unsigned int *)(param_1 + 800) + 0x40);
    fn_82ED9AF0(param_1,*(unsigned int *)(param_1 + 0x4aa0),*(unsigned int *)(param_1 + 0x4ef8),
                      *(unsigned int *)(param_1 + 0x31c),*(unsigned int *)(param_1 + 800));
  }
  else {
    iVar5 = *(int *)(param_1 + 0x6b8);
    uVar2 = *(unsigned int *)(param_1 + 0x6a4);
    *(int *)(param_1 + 0x564) = iVar5;
    *(unsigned int *)(param_1 + 0x550) = *(unsigned int *)(param_1 + 0x6b0);
    *(unsigned int *)(param_1 + 0x55c) = *(unsigned int *)(param_1 + 0x6b4);
    *(unsigned int *)(param_1 + 0x548) = *(unsigned int *)(param_1 + 0x6a8);
    *(unsigned int *)(param_1 + 0x554) = *(unsigned int *)(param_1 + 0x6ac);
    *(int *)(param_1 + 0x568) = iVar5 >> 1;
    *(int *)(param_1 + 0x6a4) = iVar1;
    *(unsigned int *)(param_1 + 0x10) = 0;
    lVar4 = (__int64)iVar5 * (__int64)*(int *)(param_1 + 0x6bc);
    lVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x4ef8) + lVar4;
    fn_82F02E20(param_1,*(unsigned int *)(param_1 + 0x4a94),*(unsigned int *)(param_1 + 0x4a98),
                    *(unsigned int *)(param_1 + 0x4a9c),(unsigned __int64)*(unsigned int *)(param_1 + 0x4ef8),lVar3,
                    ((int)lVar4 >> 2) + lVar3);
    fn_82ED9AF0(param_1,*(unsigned int *)(param_1 + 0x4aa0),*(unsigned int *)(param_1 + 0x4ef8),
                      *(unsigned int *)(param_1 + 0x6b8),*(unsigned int *)(param_1 + 0x6bc));
    *(int *)(param_1 + 0x10) = iVar1;
    *(unsigned int *)(param_1 + 0x6a4) = uVar2;
    iVar5 = iVar1 * 0x58 + param_1;
    *(unsigned int *)(param_1 + 0x550) = *(unsigned int *)(iVar5 + 0x6b0);
    *(unsigned int *)(param_1 + 0x55c) = *(unsigned int *)(iVar5 + 0x6b4);
    *(unsigned int *)(param_1 + 0x548) = *(unsigned int *)(iVar5 + 0x6a8);
    *(unsigned int *)(param_1 + 0x554) = *(unsigned int *)(iVar5 + 0x6ac);
    *(unsigned int *)(param_1 + 0x564) = *(unsigned int *)((iVar1 + 0x14) * 0x58 + param_1);
    *(unsigned int *)(param_1 + 0x568) = *(unsigned int *)(iVar5 + 0x6e4);
  }
  if (lbl_83248E48 != 0) {
    *(int *)(param_1 + 0x1f08) =
         (int)((((0x27 - (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x1ebc) + 0x10) & 0xffffffff) >> 3)
                + (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x1ebc) + 4) & 0xffffffff) << 3);
  }
  if (*(int *)(param_1 + 0x525c) != 0) {
    dRam83248e80 = (double)(((0x27 - (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x1ebc) + 0x10) &
                             0xffffffff) >> 3) +
                            (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x1ebc) + 4) & 0xffffffff) *
                   lbl_82017EF8 + dRam83248e80;
    dRam83248e60 = *(double *)(param_1 + 0x4f00) + dRam83248e60;
    iRam83248e50 = iRam83248e50 + 1;
    dRam83248e68 = *(double *)(param_1 + 0x4f18) + dRam83248e68;
    dRam83248e70 = *(double *)(param_1 + 0x4f08) + dRam83248e70;
    dRam83248e78 = *(double *)(param_1 + 0x4f10) + dRam83248e78;
  }
  return;
}

