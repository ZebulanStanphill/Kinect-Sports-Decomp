extern int fn_82CAF338();
extern int fn_82CAF7F8();
extern int fn_82CB0760();
extern int fn_82CBD918();
extern unsigned int iStack_a8;
extern unsigned int iStack_b0;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack_ac;


void fn_82CB2F60(int param_1,unsigned int *param_2,__int64 param_3,unsigned int param_4,unsigned int param_5,
                  short *param_6,int param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  unsigned int uVar6;
  short sVar7;
  unsigned __int64 uVar5;
  int iVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  int iVar11;
  unsigned __int64 uVar12;
  int iVar13;
  unsigned __int64 uVar14;
  int iVar15;
  unsigned __int64 uVar16;
  short *psVar17;
  unsigned int uStack0000002c;
  unsigned int uStack00000034;
  int in_stack_00000054;
  int in_stack_0000005c;
  struct { int first; unsigned int second; } stack_pair_b0;

  int iStack_a8;
  
  if ((int)param_8 == 0) {
    iStack_a8 = 0;
LAB_82cb2fc4:
    uVar9 = 0;
  }
  else {
    if ((param_2[-6] & 0x20000) == 0) {
      iStack_a8 = 1;
      goto LAB_82cb2fc4;
    }
    uVar9 = 1;
    iStack_a8 = 0;
  }
  if (in_stack_00000054 == 0) {
    iVar8 = 0;
  }
  else {
    if ((param_2[*(int *)(param_1 + 0x88) * -6] & 0x20000) != 0) {
      iVar8 = 0;
      uVar12 = 1;
      goto LAB_82cb3014;
    }
    iVar8 = 1;
  }
  uVar12 = 0;
LAB_82cb3014:
  if (in_stack_0000005c == 0) {
    uVar10 = 0;
  }
  else if ((param_2[(*(int *)(param_1 + 0x88) + 1) * -6] & 0x20000) == 0) {
    uVar10 = 1;
  }
  else {
    uVar10 = 0;
  }
  if (*(int *)(param_1 + 0x18c) == 0) {
    iVar11 = param_1 + 0xb64;
    iVar13 = param_1 + 0xb70;
  }
  else {
    uVar6 = *param_2 >> 0x16 & 3;
    iVar13 = (uVar6 + 0x2e2) * 4 + param_1;
    iVar11 = (uVar6 + 0x2df) * 4 + param_1;
  }
  uStack0000002c = param_4;
  uStack00000034 = param_5;
  fn_82CBD918(param_1,&stack_pair_b0.first,*(unsigned int *)(param_1 + 0x830),0x77,
                    *(unsigned int *)(param_1 + 300));
  if (stack_pair_b0.first == 0) {
    stack_pair_b0.second = *(unsigned char *)(param_2 + 5) >> 1 & 1;
    psVar2 = (short *)fn_82CB0760(param_1,param_3,param_7,param_8,in_stack_00000054,
                                        in_stack_0000005c,uVar9,uVar12);
    sVar7 = *psVar2 + (short)**(unsigned int **)(param_1 + 0x6e4);
    *param_6 = sVar7;
    **(int **)(param_1 + 0x6e4) = (int)sVar7 * *(int *)(param_1 + 300);
    iVar3 = fn_82CAF338(param_1,iVar13,param_2,param_3,*(unsigned int *)(param_1 + 0xcc),0,
                              param_6,psVar2);
    if (iVar3 == 0) {
      param_3 = param_3 + 8;
      uVar16 = 1;
      psVar2 = param_6 + 0x10;
      iVar3 = param_7 + 0x18;
      do {
        iVar15 = iVar3;
        psVar17 = psVar2;
        stack_pair_b0.first = 0;
        fn_82CBD918(param_1,&stack_pair_b0.first,*(unsigned int *)(param_1 + 0x830),0x77,
                          *(unsigned int *)(param_1 + 300));
        if (stack_pair_b0.first != 0) {
          return;
        }
        uVar14 = uVar16 + 1;
        stack_pair_b0.second = (int)(1 << ((unsigned int)uVar14 & 0x3f) & (unsigned int)*(unsigned char *)(param_2 + 5)) >>
                    ((unsigned int)uVar14 & 0x3f);
        iVar3 = iStack_a8;
        if (stack_pair_b0.second != 0) {
          iVar3 = iVar8 + 2;
        }
        sVar7 = **(short **)(iVar3 * 4 + iVar15) + (short)**(unsigned int **)(param_1 + 0x6e4);
        *psVar17 = sVar7;
        **(int **)(param_1 + 0x6e4) = (int)sVar7 * *(int *)(param_1 + 300);
        stack_pair_b0.first = fn_82CAF338(param_1,iVar13,param_2,param_3,*(unsigned int *)(param_1 + 0xcc)
                                      ,uVar16,psVar17);
        if (stack_pair_b0.first != 0) {
          return;
        }
        uVar5 = 8;
        if ((uVar16 & 0xffffffff) == 1) {
          uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0xec);
        }
        param_3 = uVar5 + param_3;
        psVar2 = psVar17 + 0x10;
        uVar16 = uVar14;
        iVar3 = iVar15 + 0x18;
      } while ((uVar14 & 0xffffffff) < 3);
      fn_82CBD918(param_1,&stack_pair_b0.first,*(unsigned int *)(param_1 + 0x830),0x77,
                        *(unsigned int *)(param_1 + 300));
      if (stack_pair_b0.first == 0) {
        psVar4 = (short *)fn_82CAF7F8(param_1,iVar15 + 0x18,iStack_a8,iVar8,uVar10,&stack_pair_b0.second);
        sVar7 = *psVar4 + (short)**(unsigned int **)(param_1 + 0x6e4);
        *psVar2 = sVar7;
        **(int **)(param_1 + 0x6e4) = (int)sVar7 * *(int *)(param_1 + 300);
        stack_pair_b0.first = fn_82CAF338(param_1,iVar13,param_2,param_3,*(unsigned int *)(param_1 + 0xcc)
                                      ,3,psVar2,psVar4);
        if (stack_pair_b0.first == 0) {
          fn_82CBD918(param_1,&stack_pair_b0.first,*(unsigned int *)(param_1 + 0x834),0x77,
                            *(unsigned int *)(param_1 + 0x130));
          uVar1 = uStack0000002c;
          if (stack_pair_b0.first == 0) {
            stack_pair_b0.second = *(unsigned char *)(param_2 + 5) >> 5 & 1;
            psVar2 = (short *)fn_82CB0760(param_1,uStack0000002c,iVar15 + 0x30,param_8,
                                                in_stack_00000054,in_stack_0000005c,uVar9,uVar12);
            sVar7 = *psVar2 + (short)**(unsigned int **)(param_1 + 0x6e4);
            psVar17[0x20] = sVar7;
            **(int **)(param_1 + 0x6e4) = (int)sVar7 * *(int *)(param_1 + 0x130);
            stack_pair_b0.first = fn_82CAF338(param_1,iVar11,param_2,uVar1,
                                          *(unsigned int *)(param_1 + 0xd0),4,psVar17 + 0x20,psVar2);
            if (stack_pair_b0.first == 0) {
              fn_82CBD918(param_1,&stack_pair_b0.first,*(unsigned int *)(param_1 + 0x834),0x77,
                                *(unsigned int *)(param_1 + 0x130));
              uVar1 = uStack00000034;
              if (stack_pair_b0.first == 0) {
                stack_pair_b0.second = *(unsigned char *)(param_2 + 5) >> 6 & 1;
                psVar2 = (short *)fn_82CB0760(param_1,uStack00000034,iVar15 + 0x48,param_8,
                                                    in_stack_00000054,in_stack_0000005c,uVar9,uVar12
                                                   );
                sVar7 = *psVar2 + (short)**(unsigned int **)(param_1 + 0x6e4);
                psVar17[0x30] = sVar7;
                **(int **)(param_1 + 0x6e4) = (int)sVar7 * *(int *)(param_1 + 0x130);
                fn_82CAF338(param_1,iVar11,param_2,uVar1,*(unsigned int *)(param_1 + 0xd0),5,
                                  psVar17 + 0x30,psVar2);
              }
            }
          }
        }
      }
    }
  }
  return;
}

