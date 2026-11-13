#define true 1
extern unsigned int *auStack_54;
extern unsigned int *auStack_58;
extern int fn_82E826C8();
extern int fn_82E8E7A8();
extern int fn_82E8ECF8();
extern int fn_82E8EF60();
extern int fn_82E8FE90();
extern int fn_82EFE758();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;


void fn_82E90960(int param_1,unsigned __int64 param_2,int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  __int64 lVar5;
  int iStack_60;
  int iStack_5c;
  unsigned char auStack_58 [4];
  unsigned char auStack_54 [84];
  
  if (*(int *)(param_1 + 0x1a64) == 0) {
    *(unsigned int *)(param_1 + 0x2a4) = *(unsigned int *)(param_1 + 0x1d94);
    *(unsigned int *)(param_1 + 0x2a0) = *(unsigned int *)(param_1 + 0x1d94);
  }
  iStack_60 = 0;
  lVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x890) - (unsigned __int64)*(unsigned int *)(param_1 + 0x898);
  *(int *)(param_1 + 0x890) = (int)lVar5;
  if (lVar5 < 0) {
    *(unsigned int *)(param_1 + 0x890) = 0;
  }
  uVar1 = *(unsigned int *)(param_1 + 0x2a4);
  uVar2 = *(unsigned int *)(param_1 + 0x590);
  if (*(int *)(param_1 + 0xaf0) == 2) {
    fn_82EFE758(param_1);
  }
  while( true ) {
    *(unsigned int *)(param_1 + 0x1a50) = 1;
    if (*(int *)(param_1 + 0x7b38) == 0) {
      if ((((*(int *)(param_1 + 0x76c8) != 0) || (*(int *)(param_1 + 0x844) != 0)) ||
          (*(int *)(param_1 + 0x7808) != 0)) &&
         ((*(int *)(param_1 + 0x7800) != 0 || (*(int *)(param_1 + 0x7804) != 0)))) {
        fn_82E826C8(param_1,*(unsigned int *)(param_1 + 0xaf0),*(unsigned int *)(param_1 + 0x2a0))
        ;
      }
      fn_82E8E7A8(param_1,*(unsigned int *)(param_1 + 0xaf0),*(unsigned int *)(param_1 + 0x2a4),
                    *(unsigned int *)(param_1 + 0x590),param_2,&iStack_5c,&iStack_60,auStack_58);
    }
    else {
      iVar3 = *(int *)(param_1 + 0xaf4);
      iStack_60 = 0;
      iStack_5c = 0;
      if (((iVar3 == 0) || (iVar3 == 1)) ||
         ((*(int *)(param_1 + 0xaf8) == 0 || (*(int *)(param_1 + 0xaf8) == 1)))) {
        *(unsigned int *)(param_1 + 0x6e08) = *(unsigned int *)(param_1 + 0x84c);
      }
      *(int *)(param_1 + 0xaf0) = iVar3;
      *(unsigned int *)(param_1 + 0x4f24) = *(unsigned int *)(param_1 + 0x4f28);
      if ((((*(int *)(param_1 + 0x76c8) != 0) || (*(int *)(param_1 + 0x844) != 0)) ||
          (*(int *)(param_1 + 0x7808) != 0)) &&
         ((*(int *)(param_1 + 0x7800) != 0 || (*(int *)(param_1 + 0x7804) != 0)))) {
        fn_82E826C8(param_1,iVar3,*(unsigned int *)(param_1 + 0x2a4));
      }
      fn_82E8ECF8(param_1,*(unsigned int *)(param_1 + 0xaf0),*(unsigned int *)(param_1 + 0x2a4),
                    *(unsigned int *)(param_1 + 0x590),1,auStack_54,&iStack_60,auStack_58);
      *(unsigned int *)(param_1 + 0xaf0) = *(unsigned int *)(param_1 + 0xaf8);
      *(unsigned int *)(param_1 + 0x4f24) = *(unsigned int *)(param_1 + 0xaf4);
      fn_82E8ECF8(param_1,*(unsigned int *)(param_1 + 0xaf8),*(unsigned int *)(param_1 + 0x2a4),
                    *(unsigned int *)(param_1 + 0x590),1,auStack_54,&iStack_5c,auStack_58);
      if (((0 < *(int *)(param_1 + 0x84c)) && (*(int *)(param_1 + 0xaf0) != 2)) &&
         (*(int *)(param_1 + 0xaf0) != 4)) {
        fn_82F68CC0(*(unsigned int *)(param_1 + 0x990),*(unsigned int *)(param_1 + 0x1ea8),
                     ((__int64)(*(int *)(param_1 + 0x2d4) + 2) *
                      (__int64)*(int *)(param_1 + 0x2d0) & 0xfffffffU) << 4);
      }
      if ((iStack_60 == 0) && (iStack_5c == 0)) {
        iStack_60 = 0;
      }
      else {
        iStack_60 = 1;
      }
    }
    if (((*(int *)(param_1 + 0x1a50) != 0) || (0x1d < *(int *)(param_1 + 0x2a0))) ||
       (0x1d < *(int *)(param_1 + 0x2a4))) break;
    fn_82E8FE90(param_1);
    if (((*(int *)(param_1 + 0x1a50) != 0) || (0x1d < *(int *)(param_1 + 0x2a0))) ||
       (0x1d < *(int *)(param_1 + 0x2a4))) {
      if ((*(int *)(param_1 + 0xaf0) == 2) || (*(int *)(param_1 + 0xaf0) == 4)) {
        *(unsigned int *)(param_1 + 0x2a4) = uVar1;
        *(unsigned int *)(param_1 + 0x590) = uVar2;
      }
      *param_3 = iStack_60;
      if (*(int *)(*(int *)(param_1 + 0x1ebc) + 0x38) == 0) {
        fn_82E8EF60(param_1,0);
        *(unsigned int *)(param_1 + 0x1fec) = 0;
      }
      else {
        *(unsigned int *)(param_1 + 0x202c) = 1;
        fn_82E8EF60(param_1,1);
        *(unsigned int *)(param_1 + 0x1fec) = 1;
      }
      uVar4 = *(unsigned int *)(*(int *)(param_1 + 0x1ebc) + 0x10);
      iVar3 = *(int *)(*(int *)(param_1 + 0x1ebc) + 4);
      *(unsigned int *)(param_1 + 0x1f58) = 0;
      iVar3 = (int)((0x27 - (unsigned __int64)uVar4 & 0xffffffff) >> 3) + (*(int *)(param_1 + 0x1ec8) >> 3)
              + iVar3;
      *(int *)(param_1 + 0x1e00) = *(int *)(param_1 + 0x1e00) + iVar3;
      if (*(int *)(param_1 + 0x1dac) == 2) {
        *(int *)(param_1 + 0x890) = *(int *)(param_1 + 0x890) + iVar3;
        *(int *)(param_1 + 0x1dd0) = *(int *)(param_1 + 0x1dd0) + 1;
      }
      else {
        if (*(int *)(param_1 + 0x1dac) == 3) {
          *(__int64 *)(param_1 + 0x1bf8) = (__int64)iVar3 + *(__int64 *)(param_1 + 0x1bf8);
          *(unsigned int *)(param_1 + 0x1ae0) =
               ((unsigned int)LZCOUNT(*(int *)(param_1 + 0xaf0)) >> 5) + *(int *)(param_1 + 0x1ae0);
          if ((*(int *)(param_1 + 0x1c10) == 0) && (*(int *)(param_1 + 0xaf0) == 0)) {
            *(unsigned int *)(param_1 + 0x1c10) = *(unsigned int *)(param_1 + 0x1dcc);
          }
        }
        *(int *)(param_1 + 0x1dd0) = *(int *)(param_1 + 0x1dd0) + 1;
      }
      return;
    }
  }
  if ((*(int *)(param_1 + 0x1a68) != 0) && (*(int *)(param_1 + 0x1a6c) != 0)) {
    *(unsigned int *)(param_1 + 0x1a64) = 0;
  }
  *(unsigned int *)(param_1 + 0x1a6c) = 1;
  *(unsigned int *)(param_1 + 0x1a60) = 0;
  *(unsigned int *)(param_1 + 0x1a58) = 0;
  *(unsigned int *)(param_1 + 0x1a68) = 1;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(*(unsigned int *)(param_1 + 0x1a5c),0,*(int *)(param_1 + 0x2d4) << 2);
}

