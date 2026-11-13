extern unsigned int *auStack_70;
extern int fn_82E842C8();
extern int fn_82E84AB0();
extern int fn_82E85248();
extern int fn_82E8D3A8();
extern int fn_82E8D470();
extern int fn_82E8D828();
extern int fn_82E99CD0();
extern int fn_82E99D70();
extern int fn_82E99EA0();
extern int fn_82ED3BC8();
extern int fn_82ED57E0();
extern int fn_82F00468();
extern int fn_82F01F10();
extern int fn_82F02390();
extern int fn_82F023B0();
extern int fn_82F03058();
extern int fn_82F03C10();
extern int fn_82F174E0();
extern int fn_82F65350();
extern int fn_82F68CC0();
extern unsigned int lbl_82005730;
extern unsigned int lbl_8215F708;


unsigned __int64 fn_82E8F418(int param_1,unsigned __int64 param_2,int param_3,__int64 param_4,
                       unsigned __int64 param_5,int param_6,unsigned int *param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned short uVar4;
  double dVar5;
  double dVar6;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned __int64 uVar7;
  __int64 lVar10;
  unsigned __int64 uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  int iVar14;
  __int64 lVar15;
  int in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned int in_stack_00000064;
  unsigned int in_stack_0000006c;
  unsigned int auStack_70;
  
  if (((*(int *)(param_1 + 0x4aa8) == 0) && (param_3 != 0)) ||
     ((*(int *)(param_1 + 0x4afc) == 0 && ((param_5 & 0xffffffff) != 0)))) {
    fn_82ED57E0(param_1,param_3,param_3,param_5);
  }
  fn_82F023B0(*(unsigned int *)(param_1 + 0x1ebc));
  fn_82F02390(*(unsigned int *)(param_1 + 0x1ebc),param_2,0,*(int *)(param_1 + 4) == 8);
  fn_82E8D3A8(param_1);
  *(unsigned int *)(param_1 + 0x6d40) = in_stack_0000005c;
  if (*(int *)(param_1 + 0x4f30) == 1) {
    in_stack_00000064 = *(unsigned int *)(param_1 + 0x4f3c);
  }
  *(unsigned int *)(param_1 + 0x6f50) = in_stack_00000064;
  *(unsigned int *)(param_1 + 0x6f54) = in_stack_0000006c;
  if ((*(int *)(param_1 + 0x1a74) != 0) && (*(int *)(param_1 + 0x4f30) != 1)) {
    uVar8 = fn_82F65350();
    *(unsigned int *)(param_1 + 0x6f50) = uVar8 & 1;
  }
  if ((*(int *)(param_1 + 0xaf0) == 1) && (*(int *)(param_1 + 0x67c) != 0)) {
    uVar8 = *(unsigned int *)(param_1 + 0x664);
    uVar13 = *(unsigned int *)(param_1 + 0x660);
    trapWord(6,(unsigned __int64)uVar13,0);
    trapWord(5,(unsigned __int64)uVar13 &
               ~((((unsigned __int64)uVar8 & 0x7fffffff) << 1 | (unsigned __int64)(uVar8 >> 0x1f)) - 1),0xffff);
    if ((unsigned __int64)uVar8 == (__int64)((int)uVar8 / (int)uVar13) * (__int64)(int)uVar13) {
      *(unsigned int *)(param_1 + 0x678) = 0;
      *(unsigned int *)(param_1 + 0x664) = 1;
    }
    else {
      *(unsigned int *)(param_1 + 0x678) = 1;
      *(unsigned int *)(param_1 + 0x664) = uVar8 + 1;
    }
  }
  if (*(int *)(param_1 + 0x7984) != 0) {
    *(unsigned int *)(param_1 + 0x798c) = 0;
  }
  if (*(int *)(param_1 + 0x6f90) != 0) {
    if (*(int *)(param_1 + 0x598) == 0) {
      uVar12 = 0x83188f28;
    }
    else if (*(int *)(param_1 + 0x594) == 0) {
      uVar12 = 0x83188e30;
    }
    else {
      uVar12 = 0x83188d38;
    }
    *(unsigned int *)(param_1 + 0x75fc) = uVar12;
  }
  if (*(int *)(param_1 + 4) == 8) {
    if (*(int *)(param_1 + 0x4f34) != 0) {
      in_stack_00000054 = 1;
      param_8 = 1;
    }
    *(int *)(param_1 + 0x6d54) = (int)param_8;
    if ((int)param_8 == 0) {
      *(unsigned int *)(param_1 + 0x4f2c) = 0;
      *(unsigned int *)(param_1 + 0x7b38) = 0;
      *(unsigned int *)(param_1 + 0x6de8) = 0;
      *(unsigned int *)(param_1 + 0x6de4) = 0;
      *(unsigned int *)(param_1 + 0x1b90) = *(unsigned int *)(param_1 + 0x1b94);
    }
    else {
      *(int *)(param_1 + 0x7b38) = in_stack_00000054;
      if (in_stack_00000054 == 0) {
        *(unsigned int *)(param_1 + 0x4f2c) = 2;
        *(unsigned int *)(param_1 + 0x1b90) = *(unsigned int *)(param_1 + 0x1b9c);
      }
      else {
        iVar14 = *(int *)(param_1 + 0x7964);
        *(unsigned int *)(param_1 + 0x4f2c) = 1;
        *(unsigned int *)(param_1 + 0x1b90) = *(unsigned int *)(param_1 + 0x1b98);
        if (iVar14 != -1) {
          if (iVar14 == 0) {
            *(unsigned int *)(param_1 + 0x6d6c) = 1;
          }
          else {
            *(unsigned int *)(param_1 + 0x6d6c) = 0;
            if (((iVar14 == 1) || (*(__int64 *)(param_1 + 0x2e0) < 2)) ||
               (*(int *)(param_1 + 0x4f34) != 0)) {
              *(unsigned int *)(param_1 + 28000) = 1;
            }
            else {
              *(unsigned int *)(param_1 + 28000) = 0;
            }
          }
        }
        if (*(int *)(param_1 + 0x1a74) != 0) {
          uVar8 = fn_82F65350();
          *(unsigned int *)(param_1 + 0x6d6c) = uVar8 & 1;
          if (((uVar8 & 1) == 0) && (1 < *(__int64 *)(param_1 + 0x2e0))) {
            uVar8 = fn_82F65350();
            *(unsigned int *)(param_1 + 0x526c) = 0;
            *(unsigned int *)(param_1 + 28000) = uVar8 & 1;
            goto LAB_82e8f6b8;
          }
        }
      }
      *(unsigned int *)(param_1 + 0x526c) = 0;
    }
LAB_82e8f6b8:
    if (*(int *)(param_1 + 0xa08) != 0) {
      if (*(int *)(param_1 + 0x1a74) != 0) {
        uVar8 = fn_82F65350();
        *(unsigned int *)(param_1 + 0xa10) = uVar8 & 3;
      }
      *(unsigned int *)(param_1 + 0xa14) = *(unsigned int *)(param_1 + 0xa10) & 1;
      *(unsigned int *)(param_1 + 0xa18) = (int)*(unsigned int *)(param_1 + 0xa10) >> 1 & 1;
    }
    fn_82E842C8(param_1,*(int *)(param_1 + 0x6d54) == 0);
  }
  fn_82E8D470(param_1);
  if (*(int *)(param_1 + 0x648) == 0) {
    uVar12 = *(unsigned int *)(param_1 + 0x2028);
    uVar1 = *(unsigned int *)(param_1 + 0x2024);
  }
  else {
    uVar12 = *(unsigned int *)(param_1 + 0x2020);
    uVar1 = *(unsigned int *)(param_1 + 0x201c);
  }
  *(unsigned int *)(param_1 + 0x2018) = uVar12;
  *(unsigned int *)(param_1 + 0x2014) = uVar1;
  if (*(int *)(param_1 + 0x978) == 0) {
    fn_82E85248(param_1);
  }
  if (*(int *)(param_1 + 4) == 8) {
    fn_82E84AB0(param_1);
  }
  if ((*(int *)(param_1 + 0x4b10) == 0) ||
     (((*(int *)(param_1 + 0xaf0) == 0 && (*(int *)(param_1 + 0x76c8) != 0)) &&
      ((*(int *)(param_1 + 0x77a4) != 0 && (*(int *)(param_1 + 0x77e8) != 0)))))) {
    if ((param_7 != (unsigned int *)0x0) &&
       (((__int64)((unsigned __int64)param_7[2] - (unsigned __int64)*param_7) < 1 ||
        ((__int64)((unsigned __int64)param_7[3] - (unsigned __int64)param_7[1]) < 1)))) {
      return 0xfffffffffffffffe;
    }
    if ((*(int *)(param_3 + 0x10) == 0x56555949) || (*(int *)(param_3 + 0x10) == 0x30323449)) {
      *(unsigned int *)(param_1 + 0x4ef0) = 0;
      iVar14 = param_3;
    }
    else {
      auStack_70 = 1;
      *(unsigned int *)(param_1 + 0x1fc4) = 0x28;
      iVar14 = param_1 + 0x1fc4;
      *(unsigned int *)(param_1 + 0x1fc8) = *(unsigned int *)(param_3 + 4);
      uVar12 = *(unsigned int *)(param_3 + 8);
      *(unsigned int *)(param_1 + 0x1fd4) = 0x30323449;
      *(unsigned int *)(param_1 + 0x1fcc) = uVar12;
      *(unsigned short *)(param_1 + 0x1fd0) = 1;
      *(unsigned short *)(param_1 + 0x1fd2) = 0xc;
      iVar2 = *(int *)(param_3 + 8);
      iVar3 = *(int *)(param_3 + 4);
      *(unsigned int *)(param_1 + 0x4ef0) = 1;
      uVar8 = iVar2 * iVar3 * 3;
      *(unsigned int *)(param_1 + 0x1fd8) = ((int)uVar8 >> 1) + (unsigned int)((int)uVar8 < 0 && (uVar8 & 1) != 0);
      if (*(int *)(param_1 + 0x4eec) != 0) {
        fn_82F174E0();
      }
      uVar8 = *(unsigned int *)(param_1 + 0x7980);
      if ((int)uVar8 < 1) {
        if ((*(int *)(param_1 + 4) != 8) || (uVar11 = 2, *(int *)(param_1 + 0x6d40) != 0)) {
          uVar11 = 0;
        }
        uVar12 = fn_82E99D70(&auStack_70,param_3,iVar14,0,uVar11);
        *(unsigned int *)(param_1 + 0x4eec) = uVar12;
      }
      else {
        uVar4 = *(unsigned short *)(param_3 + 0xe) >> 3;
        uVar12 = *(unsigned int *)(param_3 + 4);
        uVar1 = *(unsigned int *)(param_3 + 0x14);
        *(int *)(param_3 + 4) = (int)uVar8 / (int)(unsigned int)uVar4;
        uVar13 = ((int)uVar8 / (int)(unsigned int)uVar4) * (unsigned int)*(unsigned short *)(param_3 + 0xe) *
                 *(int *)(param_3 + 8);
        trapWord(6,(unsigned __int64)uVar4,0);
        trapWord(5,(unsigned __int64)uVar4 &
                   ~((((unsigned __int64)uVar8 & 0x7fffffff) << 1 | (unsigned __int64)(uVar8 >> 0x1f)) - 1),0xffff
                );
        *(unsigned int *)(param_3 + 0x14) =
             ((int)uVar13 >> 3) + (unsigned int)((int)uVar13 < 0 && (uVar13 & 7) != 0);
        uVar9 = fn_82E99EA0(&auStack_70,param_3,iVar14,0,0,0,0,uVar12);
        *(unsigned int *)(param_1 + 0x4eec) = uVar9;
        *(unsigned int *)(param_3 + 4) = uVar12;
        *(unsigned int *)(param_3 + 0x14) = uVar1;
      }
      if (auStack_70 != 0) {
        if (auStack_70 == 3) {
          return 0xfffffffffffffffe;
        }
        if (auStack_70 == 4) {
          return 0xfffffffffffffffe;
        }
        if (auStack_70 == 5) {
          return 0xfffffffffffffffe;
        }
        if (auStack_70 != 2) {
          return 0xffffffffffffff9c;
        }
        return 0xfffffffffffffffd;
      }
    }
    fn_82E8D828(param_1,param_1 + 0x1d84,iVar14,param_7);
    *(unsigned int *)(param_1 + 0x4b10) = 1;
  }
  if (*(int *)(param_1 + 0x64c) == 0) {
    iVar14 = *(int *)(param_1 + 800);
    iVar2 = *(int *)(param_1 + 0x31c);
  }
  else {
    iVar14 = *(int *)(param_1 + 0x6bc);
    iVar2 = *(int *)(param_1 + 0x6b8);
  }
  lVar15 = (__int64)iVar14 * (__int64)iVar2;
  iVar14 = (int)lVar15;
  if (*(int *)(param_1 + 0x4ef0) == 0) {
    *(int *)(param_1 + 0x4aa0) = (int)param_4;
    if (*(int *)(param_1 + 0x5254) == 0) {
      if (*(int *)(param_1 + 0xafc) == 0) goto LAB_82e8fa98;
      uVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 0x4ee4);
      lVar10 = (iVar14 >> 1) + lVar15;
    }
    else {
      fn_82F00468(param_1,param_4,*(unsigned int *)(param_1 + 0x4ee4),lVar15);
      lVar10 = (__int64)(iVar14 >> 1);
      param_4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x4aa0) + lVar15;
      uVar7 = lVar15 + (unsigned __int64)*(unsigned int *)(param_1 + 0x4ee4);
    }
    fn_82F68CC0(uVar7,param_4,lVar10);
    *(unsigned int *)(param_1 + 0x4aa0) = *(unsigned int *)(param_1 + 0x4ee4);
  }
  else {
    if ((*(int *)(param_1 + 4) != 8) || (uVar11 = 2, *(int *)(param_1 + 0x6d40) != 0)) {
      uVar11 = 0;
    }
    fn_82E99CD0(*(unsigned int *)(param_1 + 0x4eec),param_4,*(unsigned int *)(param_1 + 0x4ee4),
                    uVar11,1);
    uVar12 = *(unsigned int *)(param_1 + 0x4ee4);
    *(unsigned int *)(param_1 + 0x4aa0) = uVar12;
    if (*(int *)(param_1 + 0x5254) != 0) {
      fn_82F00468(param_1,uVar12,uVar12,lVar15);
    }
  }
LAB_82e8fa98:
  iVar2 = *(int *)(param_1 + 0x4aa0) + iVar14;
  *(int *)(param_1 + 0x1ac0) = iVar2;
  *(int *)(param_1 + 0x1abc) = *(int *)(param_1 + 0x4aa0);
  *(int *)(param_1 + 0x1ac4) = (iVar14 >> 2) + iVar2;
  if ((*(int *)(param_1 + 0x7b2c) != 0) ||
     ((*(int *)(param_1 + 4) == 8 &&
      ((*(char *)(param_1 + 0x7b30) == '\x01' || (*(int *)(param_1 + 0x6d8c) == 2)))))) {
    (**(int (***)())**(unsigned int **)(param_1 + 0x7b40))();
  }
  if ((*(int *)(param_1 + 4) == 8) && (*(int *)(param_1 + 0x7b34) != 0)) {
    fn_82ED3BC8(*(unsigned int *)(param_1 + 0x7b40),*(unsigned int *)(param_1 + 0x1abc),
                      *(unsigned int *)(param_1 + 0x1ac0),*(unsigned int *)(param_1 + 0x1ac4));
  }
  if ((*(int *)(param_1 + 0x760c) != 0) || (*(int *)(param_1 + 0x7610) != 0)) {
    fn_82F01F10(param_1,*(unsigned int *)(param_1 + 0x1abc),*(unsigned int *)(param_1 + 0x1ac0),
                      *(unsigned int *)(param_1 + 0x1ac4),*(unsigned int *)(param_1 + 0x6b8),
                      *(unsigned int *)(param_1 + 0x6bc),param_8);
  }
  if (((*(int *)(param_1 + 0x64c) != 0) && (*(int *)(param_1 + 0x1c30) != 0)) ||
     ((*(int *)(param_1 + 0xaf0) == 0 &&
      (((*(int *)(param_1 + 0x76c8) != 0 && (*(int *)(param_1 + 0x77a4) != 0)) &&
       (*(int *)(param_1 + 0x77e8) != 0)))))) {
    *(unsigned int *)(param_1 + 0x1c30) = 0;
    fn_82F03058(param_1,param_3,&auStack_70);
    if (auStack_70 != 0) {
      return (unsigned __int64)auStack_70;
    }
    iVar14 = param_1 + 0x1fc4;
    if (*(int *)(param_1 + 0x4ef0) == 0) {
      iVar14 = param_3;
    }
    fn_82F03C10(param_1,iVar14,&auStack_70);
    dVar6 = lbl_8215F708;
    if (auStack_70 != 0) {
      return (unsigned __int64)auStack_70;
    }
    if ((*(int *)(param_1 + 0x64c) != 0) && (*(int *)(param_1 + 0x1c30) != 0)) {
      *(int *)(param_1 + 0x1d4c) = *(int *)(param_1 + 0x1d94);
      dVar5 = lbl_82005730;
      iVar14 = (int)((double)(__int64)*(int *)(param_1 + 0x1d94) * dVar6 + lbl_82005730);
      if (iVar14 < 3) {
        iVar14 = 2;
      }
      *(int *)(param_1 + 0x1d50) = iVar14;
      iVar14 = (int)((double)(__int64)iVar14 * dVar6 + dVar5);
      if (iVar14 < 3) {
        iVar14 = 2;
      }
      *(int *)(param_1 + 0x1d54) = iVar14;
    }
  }
  if ((param_6 != 0) && (*(int *)(param_1 + 0x4aa4) = param_6, (param_5 & 0xffffffff) != 0)) {
    *(int *)(param_1 + 0x4afc) = (int)param_5;
  }
  return 0;
}

