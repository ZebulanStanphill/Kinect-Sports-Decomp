extern unsigned int *auStack_4c;
extern int fn_82C939D8();
extern int fn_82CB9388();
extern int fn_82CB9450();
extern int fn_82CBA280();
extern int fn_82CBA370();
extern int fn_82CBA440();
extern int fn_82F691F0();
extern unsigned int uStack_50;


void fn_82C93B58(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6)

{
  int iVar1;
  __int64 lVar2;
  unsigned int uStack_50;
  unsigned int auStack_4c;
  
  if ((*(int *)(param_1 + 0x120) != 2) || (*(int *)(param_1 + 0x50cc) != 0)) {
    if ((**(unsigned int **)(param_1 + 0x164) & 4) != 4) {
      iVar1 = (int)((((__int64)(int)param_6 * (__int64)*(int *)(param_1 + 0x88) & 0x7fffffffU) * 2
                     + param_5 & 0x7fffffff) << 2);
      auStack_4c = (unsigned int)*(short *)(*(int *)(param_1 + 0x6f0) + iVar1);
      uStack_50 = (unsigned int)*(short *)(*(int *)(param_1 + 0x6f4) + iVar1);
      if (*(int *)(param_1 + 0x3cb0) == 7) {
        fn_82CB9450();
      }
      else {
        fn_82CB9388(param_1,&auStack_4c,&uStack_50,param_5,param_6);
      }
      iVar1 = *(int *)(param_1 + 0xcc);
      fn_82C939D8(param_1,(__int64)(((int)uStack_50 >> 2) + (int)((param_6 & 0xffffffff) << 4)) *
                            (__int64)iVar1 + (unsigned __int64)*(unsigned int *)(param_1 + 0xee4) +
                            (__int64)((int)auStack_4c >> 2) + (param_5 & 0xfffffff) * 0x10,iVar1
                    ,param_2,iVar1,auStack_4c & 3,uStack_50 & 3,*(unsigned int *)(param_1 + 0x1cc))
      ;
      iVar1 = (int)(((__int64)(int)param_6 * (__int64)*(int *)(param_1 + 0x88) + param_5 &
                    0xffffffff) << 1);
      auStack_4c = (unsigned int)*(short *)(*(int *)(param_1 + 0x6f8) + iVar1);
      uStack_50 = (unsigned int)*(short *)(*(int *)(param_1 + 0x6fc) + iVar1);
      if (*(int *)(param_1 + 0x3cb0) == 7) {
        if (*(int *)(param_1 + 0x56a8) == 0) {
          fn_82CBA370(param_1,param_5,param_6,&auStack_4c,&uStack_50);
        }
        else {
          fn_82CBA280();
        }
      }
      iVar1 = *(int *)(param_1 + 0xd0);
      lVar2 = (__int64)
              (int)(((int)uStack_50 >> 2) + (int)((param_6 & 0xffffffff) << 3) +
                   *(unsigned int *)(param_1 + 0x4fb4)) * (__int64)iVar1 +
              (__int64)((int)auStack_4c >> 2) + (param_5 & 0x1fffffff) * 8 +
              (unsigned __int64)*(unsigned int *)(param_1 + 0x4fb4);
      fn_82CBA440(param_1,(unsigned __int64)*(unsigned int *)(param_1 + 0xed0) + lVar2,iVar1,param_3,iVar1,
                        auStack_4c & 3,uStack_50 & 3,0);
      fn_82CBA440(param_1,(unsigned __int64)*(unsigned int *)(param_1 + 0xed4) + lVar2,
                        *(unsigned int *)(param_1 + 0xd0),param_4,*(unsigned int *)(param_1 + 0xd0),
                        auStack_4c & 3,uStack_50 & 3,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_2,0x80,0x10);
}

