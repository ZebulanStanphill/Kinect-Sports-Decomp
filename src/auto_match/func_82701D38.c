typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_826BD928();
extern int fn_826FD908();
extern int fn_826FD968();
extern int fn_826FE888();
extern unsigned int iStack_7c;
extern unsigned int iStack_80;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;


void fn_82701D38(int *param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  bool bVar3;
  unsigned int uVar4;
  int iVar5;
  int *piVar6;
  __int64 lVar7;
  int iVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  int iVar12;
  int iVar13;
  int aiStack_90;
  struct { int first; int second; } stack_pair_80;

  unsigned int uStack_78;
  unsigned int uStack_74;
  struct { unsigned int first; unsigned int second; } stack_pair_70;

  unsigned int uStack_68;
  unsigned int uStack_64;

  iVar5 = (**(int (***)())(*(int *)(param_2 + 0x68) + 8))(param_2 + 0x68);
  if ((iVar5 != 2) || (iVar5 = fn_826BD928(param_2 + 0x68), *(int *)(iVar5 + 0x1a8) < 0)) {
    uVar10 = 0;
    if (param_1[0x2a4] != 0) {
      stack_pair_70.first = 0;
      stack_pair_70.second = 0;
      uStack_68 = 0;
      uStack_64 = (**(int (***)())(*param_1 + 0xd8))(param_1);
      stack_pair_80.second = 0;
      stack_pair_80.first = 0;
      uStack_78 = 0;
      uStack_74 = (**(int (***)())(*param_1 + 0xd8))(param_1);
      iVar5 = param_2;
      do {
        iVar13 = iVar5;
        aiStack_90 = iVar13;
        fn_826FD968(&stack_pair_70.first,&aiStack_90);
        uVar4 = stack_pair_70.first;
        iVar5 = *(int *)(iVar13 + 0x20);
      } while (*(int *)(iVar13 + 0x20) != 0);
      uVar1 = param_1[0x2a4];
      uVar11 = (unsigned __int64)stack_pair_70.first;
      iVar5 = 0;
      if (uVar1 != 0) {
        iVar12 = 0;
        do {
          if (*(int *)(iVar12 + param_1[0x2a3]) == param_2) {
            fn_8267BE38(iVar5);
            fn_8267BE38(uVar11);
            return;
          }
          fn_826FD908(&stack_pair_80.first,0);
          iVar5 = *(int *)(iVar12 + param_1[0x2a3]);
          iVar8 = 0;
          while (iVar2 = iVar5, iVar2 != 0) {
            aiStack_90 = iVar2;
            fn_826FD968(&stack_pair_80.first,&aiStack_90);
            iVar8 = iVar2;
            iVar5 = *(int *)(iVar2 + 0x20);
          }
          iVar5 = stack_pair_80.first;
          if (iVar8 == iVar13) {
            bVar3 = false;
            uVar9 = (unsigned __int64)stack_pair_70.second - 1;
            iVar8 = stack_pair_80.second + -1;
            if (-1 < (__int64)uVar9) {
              lVar7 = (uVar9 & 0x3fffffff) * 4 + uVar11;
              piVar6 = (int *)(iVar8 * 4 + stack_pair_80.first);
              while (-1 < iVar8) {
                if (*(int *)lVar7 != *piVar6) {
                  if (*(int *)(*(int *)((int)((uVar9 & 0xffffffff) << 2) + uVar4) + 0x14) <
                      *(int *)(*(int *)(iVar8 * 4 + stack_pair_80.first) + 0x14)) {
                    bVar3 = true;
                  }
                  break;
                }
                uVar9 = uVar9 - 1;
                lVar7 = lVar7 + -4;
                iVar8 = iVar8 + -1;
                piVar6 = piVar6 + -1;
                if ((__int64)uVar9 < 0) break;
              }
            }
            if (bVar3) break;
          }
          else if (*(int *)(iVar13 + 0x1a8) < *(int *)(iVar8 + 0x1a8)) break;
          uVar10 = uVar10 + 1;
          iVar12 = iVar12 + 4;
        } while ((uVar10 & 0xffffffff) < (unsigned __int64)uVar1);
      }
      fn_8267BE38(iVar5);
      fn_8267BE38(uVar11);
    }
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    aiStack_90 = param_2;
    fn_826FE888(param_1 + 0x2a3,uVar10,&aiStack_90);
    fn_8267C498(param_2);
  }
  return;
}
