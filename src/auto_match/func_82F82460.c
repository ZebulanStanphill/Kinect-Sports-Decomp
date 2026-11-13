extern int fn_82F63C78();
extern int fn_82F68240();
extern int fn_82F82D58();
extern int fn_82F82DA8();
extern int fn_82F82DF8();
extern int fn_82F835B8();
extern int fn_82F83658();
extern unsigned int iStack_64;
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int iStack_78;
extern unsigned int iStack_7c;
extern unsigned int iStack_80;
extern unsigned int iStack_8c;
extern unsigned int iStack_90;


__int64 fn_82F82460(__int64 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                      int param_7)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  int iStack_90;
  int iStack_8c;
  int aiStack_88;
  struct { int first; int second; } stack_pair_80;

  int iStack_78;
  int iStack_70;
  int iStack_6c;
  int iStack_64;
  
  uVar7 = param_1 - 0x76c;
  iStack_8c = 0;
  aiStack_88 = 0;
  iStack_90 = 0;
  iVar2 = (int)uVar7;
  if ((((((0x45 < iVar2) && (iVar2 < 0x44d)) && (0 < param_2)) &&
       (((param_2 < 0xd && (-1 < param_4)) &&
        ((param_4 < 0x18 && ((-1 < param_5 && (param_5 < 0x3c)))))))) && (-1 < param_6)) &&
     ((param_6 < 0x3c && (0 < param_3)))) {
    iVar6 = *(int *)(param_2 * 4 + -0x7ce43a34);
    iVar4 = (int)param_1;
    if ((param_3 <= *(int *)(param_2 * 4 + -0x7ce43a30) - iVar6) ||
       ((((uVar7 == ((__int64)(iVar2 >> 2) + (unsigned __int64)(iVar2 < 0 && (uVar7 & 3) != 0) &
                    0x3fffffff) << 2 && (uVar7 != (__int64)(iVar2 / 100) * 100)) ||
         (param_1 == (__int64)(iVar4 / 400) * 400)) && ((param_2 == 2 && (param_3 < 0x1e)))))) {
      iVar6 = iVar6 + param_3;
      if ((((uVar7 == ((__int64)(iVar2 >> 2) + (unsigned __int64)(iVar2 < 0 && (uVar7 & 3) != 0) &
                      0x3fffffff) << 2) && (uVar7 != (__int64)(iVar2 / 100) * 100)) ||
          (param_1 == (__int64)(iVar4 / 400) * 400)) && (2 < param_2)) {
        iVar6 = iVar6 + 1;
      }
      fn_82F835B8();
      iVar1 = fn_82F82D58(&iStack_8c);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63C78(0,0,0,0,0);
      }
      iVar1 = fn_82F82DA8(&aiStack_88);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63C78(0,0,0,0,0);
      }
      iVar1 = fn_82F82DF8(&iStack_90);
      if (iVar1 == 0) {
        uVar5 = iVar4 - 0x76d;
        iStack_70 = param_2 + -1;
        lVar8 = ((((__int64)
                   (int)(((iVar4 + -0x641) / 400 - (int)uVar5 / 100) +
                         ((int)uVar5 >> 2) + (unsigned int)((int)uVar5 < 0 && (uVar5 & 3) != 0) + -0x11) +
                   ((__int64)iVar2 + -0x46) * 0x16d + (__int64)iVar6) * 0x18 + (__int64)param_4)
                 * 0x3c + (__int64)param_5) * 0x3c + (__int64)iStack_90 + (__int64)param_6;
        if (param_7 != 1) {
          if (param_7 != -1) {
            return lVar8;
          }
          if (iStack_8c == 0) {
            return lVar8;
          }
          stack_pair_80.first = param_6;
          stack_pair_80.second = param_5;
          iStack_78 = param_4;
          iStack_6c = iVar2;
          iStack_64 = iVar6;
          iVar2 = fn_82F83658(&stack_pair_80.first);
          if (iVar2 == 0) {
            return lVar8;
          }
        }
        return aiStack_88 + lVar8;
      }
                    /* WARNING: Subroutine does not return */
      fn_82F63C78(0,0,0,0,0);
    }
  }
  puVar3 = (unsigned int *)fn_82F68240();
  *puVar3 = 0x16;
  return -1;
}

