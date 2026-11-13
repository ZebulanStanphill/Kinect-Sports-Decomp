extern int fn_82A403E8();
extern int fn_82A42E20();
extern int fn_82A42FF8();
extern int fn_82A507C0();
extern unsigned int lbl_82002AE0;
extern unsigned int uStack_44;
extern unsigned int uStack_48;


__int64 fn_82A50EE0(int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  int *piVar6;
  __int64 lVar7;
  int *piStack_50;
  int *piStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  
  lVar7 = 0;
  if ((param_2 & 0xffffffff) == (unsigned __int64)(unsigned int)param_1[0x10]) {
    if (param_1[0x20] != 0) {
      fn_82A403E8(param_1[0xc]);
      param_1[0x20] = 0;
      param_1[0x1f] = 0;
    }
    goto LAB_82a5112c;
  }
  if ((param_1[0x1f] == 0) || ((unsigned __int64)(unsigned int)param_1[0x11] != (param_2 & 0xffffffff))) {
    if (param_1[0xd] == 0) {
      uVar5 = (**(int (***)())(*param_1 + 0x6c))(param_1);
    }
    else {
      uVar5 = (unsigned __int64)*(unsigned int *)(param_1[0xd] + 4);
    }
    if ((int *)param_1[0xd] == (int *)0x0) {
      iVar4 = param_1[0xf];
    }
    else {
      iVar4 = *(int *)param_1[0xd];
    }
    iVar4 = fn_82A42E20((unsigned __int64)(unsigned int)param_1[0xc] + 0x250,0,iVar4,uVar5,param_2);
    param_1[0x1f] = iVar4;
    if (iVar4 != 0) goto LAB_82a50fb0;
    lVar7 = -0x7ff8fff2;
  }
  else {
LAB_82a50fb0:
    piVar6 = param_1 + 0x20;
    if (param_1[0x20] != 0) {
      fn_82A403E8(param_1[0xc]);
      *piVar6 = 0;
    }
    piStack_50 = (int *)0x0;
    lVar7 = fn_82A42FF8(&piStack_50);
    if (-1 < lVar7) {
      uStack_48 = lbl_82002AE0;
      uStack_44 = lbl_82002AE0;
      (**(int (***)())*piStack_50)(piStack_50,0xffffffff82089748,&piStack_4c);
      (**(int (***)())(*piStack_4c + 0x18))(piStack_4c,&uStack_48,8);
      (**(int (***)())(*piStack_4c + 8))();
      iVar4 = param_1[0xd];
      uVar1 = *(unsigned int *)(param_1[0x1f] + 4);
      if (iVar4 == 0) {
        iVar2 = param_1[0x1e];
      }
      else {
        iVar2 = *(int *)(iVar4 + 8);
      }
      uVar3 = *(unsigned int *)(iVar2 + 4);
      if (iVar4 == 0) {
        uVar5 = (unsigned __int64)(unsigned int)param_1[0x21];
        if (uVar5 == 0) {
          uVar5 = (**(int (***)())(*param_1 + 0x68))(param_1);
        }
      }
      else {
        uVar5 = (unsigned __int64)*(unsigned int *)(iVar4 + 0xc);
      }
      lVar7 = fn_82A507C0(param_1,piStack_50,uVar5,uVar3,uVar1,piVar6);
      (**(int (***)())(*piStack_50 + 8))(piStack_50);
      if (-1 < (int)lVar7) {
        if (param_1[1] != 1) {
          lVar7 = (*(int (**)())**(unsigned int **)*piVar6)((unsigned int *)*piVar6,0x1337f001);
        }
        if (-1 < (int)lVar7) goto LAB_82a5112c;
      }
    }
  }
  if (param_1[0x20] != 0) {
    fn_82A403E8(param_1[0xc]);
    param_1[0x20] = 0;
  }
  param_1[0x1f] = 0;
  if ((int)lVar7 < 0) {
    return lVar7;
  }
LAB_82a5112c:
  param_1[0x11] = (int)param_2;
  return lVar7;
}

