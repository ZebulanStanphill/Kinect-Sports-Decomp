extern int fn_82A42FF8();
extern int fn_82A431A8();
extern int fn_82A43238();
extern int fn_82A48BD8();
extern int fn_82A49AC8();
extern int fn_82A49C98();
extern int fn_82A51C60();
extern int fn_82A772B8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_820143E0;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


__int64 fn_82A447A0(double param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                      short *param_5,int *param_6,unsigned __int64 param_7)

{
  unsigned short uVar1;
  int *piVar2;
  unsigned int uVar4;
  unsigned short uVar5;
  __int64 lVar3;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  int iVar8;
  unsigned int *puStack_80;
  unsigned int *puStack_7c;
  int *piStack_78;
  int *piStack_74;
  struct { unsigned int first; unsigned int second; } stack_pair_70;

  unsigned int uStack_68;
  
  if (param_6 == (int *)0x0) {
    param_6 = (int *)(*(int *)(param_2 + 0x34) + 0x248);
  }
  if ((param_3 & 4) != 0) {
    param_3 = param_3 | 2;
  }
  *(float *)(param_2 + 200) = (float)param_1;
  uVar4 = fn_82A49C98(param_5,1);
  *(unsigned int *)(param_2 + 0xd0) = uVar4;
  *(unsigned int *)(param_2 + 0xd4) = *(unsigned int *)(param_5 + 2);
  uVar5 = fn_82A49AC8(param_5);
  *(unsigned short *)(param_2 + 0xd8) = uVar5;
  *(unsigned int *)(param_2 + 0xcc) = (unsigned int)(unsigned short)param_5[6];
  if (*param_6 == 0) {
    uVar7 = *(unsigned int *)(param_2 + 0x44);
  }
  else {
    uVar7 = *(unsigned int *)(*(int *)(param_6[1] + 4) + 0x44);
  }
  if (uVar7 == 0) {
    uVar7 = *(unsigned int *)(param_2 + 0xd4);
    uVar6 = (unsigned __int64)uVar7 % 0x177;
    if (uVar6 != 0) {
      uVar6 = uVar7 - uVar6;
      uVar7 = (unsigned int)uVar6;
      if ((uVar6 & 0xffffffff) < 32000) {
        uVar7 = uVar7 + 0x177;
      }
    }
  }
  uVar1 = param_5[1];
  *(unsigned int *)(param_2 + 0x48) = uVar7;
  *(unsigned int *)(param_2 + 0x44) = uVar7;
  *(unsigned int *)(param_2 + 0x40) = (unsigned int)uVar1;
  lVar3 = fn_82A51C60(param_2 + 4,param_3,param_6,param_7);
  puStack_80 = (unsigned int *)0x0;
  puStack_7c = (unsigned int *)0x0;
  if (-1 < lVar3) {
    if (*param_5 == 2) {
      lVar3 = fn_82A43238(&puStack_80);
    }
    if (-1 < (int)lVar3) {
      if (((param_3 & 2) == 0) || (*(unsigned int *)(param_2 + 0xd4) != uVar7)) {
        lVar3 = fn_82A42FF8(&puStack_7c);
        if (lVar3 < 0) goto LAB_82a44ac0;
        stack_pair_70.first = lbl_82002AE0;
        stack_pair_70.second = lbl_82002AE0;
        if ((param_3 & 2) == 0) {
          stack_pair_70.second = *(unsigned int *)(param_2 + 200);
          stack_pair_70.first = lbl_820143E0;
        }
        piStack_78 = (int *)0x0;
        (**(int (***)())*puStack_7c)(puStack_7c,0xffffffff82089748,&piStack_78);
        (**(int (***)())(*piStack_78 + 0x18))(piStack_78,&stack_pair_70.first,8);
        (**(int (***)())(*piStack_78 + 8))();
        *(unsigned int *)(param_2 + 0xdc) = 1;
      }
      if ((puStack_80 == (unsigned int *)0x0) && (puStack_7c == (unsigned int *)0x0)) {
        lVar3 = fn_82A431A8(&puStack_80);
        if (lVar3 < 0) goto LAB_82a44ac0;
        stack_pair_70.first = 1;
        stack_pair_70.second = 1;
        uStack_68 = 0;
        piStack_74 = (int *)0x0;
        (**(int (***)())*puStack_80)(puStack_80,0xffffffff82089748,&piStack_74);
        (**(int (***)())(*piStack_74 + 0x18))(piStack_74,&stack_pair_70.first,0xc);
        (**(int (***)())(*piStack_74 + 8))();
        *(unsigned int *)(param_2 + 0xe0) = 1;
      }
      piVar2 = *(int **)(*(int *)(param_2 + 0x34) + 0xb0);
      lVar3 = (**(int (***)())(*piVar2 + 0x2c))
                        (piVar2,param_5,0x40,puStack_80,puStack_7c,0,
                         *(unsigned int *)(*(int *)(param_2 + 0x7c) + 4),param_2 + 0x8c);
      if ((((lVar3 != 0) && (iVar8 = (int)lVar3, iVar8 != -0x7ff8fff2)) && (iVar8 != -0x7fffbfff))
         && ((iVar8 >> 0x10 & 0x1fffU) != 0x896)) {
        uVar6 = lVar3 + 0x7787ff88;
        if (((uVar6 == 0) || ((uVar6 & 0xffffffff) == 0x1e)) || ((uVar6 & 0xffffffff) == 0xfff89)) {
          lVar3 = -0x7769fffc;
        }
        else if ((uVar6 & 0xffffffff) == 0x1eff89) {
          lVar3 = -0x7769fffd;
        }
      }
    }
  }
LAB_82a44ac0:
  fn_82A772B8(&puStack_80);
  fn_82A772B8(&puStack_7c);
  if (-1 < (int)lVar3) {
    if (*(int *)(param_2 + 0xe0) != 0) {
      lVar3 = (**(int (***)())(**(int **)(param_2 + 0x90) + 0x14))
                        (*(int **)(param_2 + 0x90),0,0x1337f001);
    }
    if ((-1 < (int)lVar3) &&
       (piVar2 = *(int **)(*(int *)(param_2 + 0x34) + 0xb0),
       lVar3 = (**(int (***)())(*piVar2 + 0x48))(piVar2,0x1337f001), -1 < lVar3)) {
      lVar3 = fn_82A48BD8(param_2 + 0xbc,8);
    }
  }
  return lVar3;
}

