extern unsigned int *auStack_60;
extern int fn_82A3FF60();
extern int fn_82A403E8();
extern int fn_82A484F8();
extern int fn_82A4F4E0();
extern int fn_82A50828();
extern int fn_82A50948();
extern int fn_82A511A0();
extern int fn_82A51260();
extern int fn_82A51860();


unsigned __int64 fn_82A51990(int *param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar5;
  unsigned int *puVar6;
  __int64 lVar4;
  unsigned int *puVar7;
  unsigned int uVar8;
  int iVar9;
  int *piVar10;
  unsigned __int64 uVar11;
  unsigned int auStack_60 [24];
  
  uVar11 = 0;
  uVar8 = 0;
  if (*param_2 != 0) {
    iVar9 = 0;
    do {
      if ((int)uVar11 < 0) goto LAB_82a51c48;
      iVar1 = *(int *)(iVar9 + param_2[1] + 4);
      piVar10 = (int *)(iVar1 + 4);
      iVar5 = (**(int (***)())(*param_1 + 0x54))(param_1);
      if (iVar5 == 3) {
        (**(int (***)())(*piVar10 + 0x54))(piVar10);
      }
      auStack_60[0] = 0;
      iVar5 = param_1[0x1f];
      uVar2 = *(unsigned int *)(*(int *)(iVar1 + 0x7c) + 4);
      if (iVar5 == 0) {
        if (param_1[0xd] == 0) {
          iVar5 = param_1[0x1e];
        }
        else {
          iVar5 = *(int *)(param_1[0xd] + 8);
        }
      }
      uVar11 = (unsigned __int64)(unsigned int)param_1[0x20];
      uVar3 = *(unsigned int *)(iVar5 + 4);
      if (uVar11 == 0) {
        if (param_1[0xd] == 0) {
          uVar11 = (unsigned __int64)(unsigned int)param_1[0x21];
          if (uVar11 == 0) {
            uVar11 = (**(int (***)())(*param_1 + 0x68))(param_1);
          }
        }
        else {
          uVar11 = (unsigned __int64)*(unsigned int *)(param_1[0xd] + 0xc);
        }
      }
      uVar11 = fn_82A50828(param_1,1,0,*(unsigned int *)(iVar9 + param_2[1]),uVar11,uVar3,uVar2,
                             auStack_60);
      if (-1 < (__int64)uVar11) {
        puVar6 = (unsigned int *)fn_82A3FF60(0xffffffff83219d50,0xc,0x20970002,0);
        if (puVar6 == (unsigned int *)0x0) {
          puVar6 = (unsigned int *)0x0;
        }
        else {
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6[2] = 0;
        }
        if (puVar6 == (unsigned int *)0x0) {
LAB_82a51b48:
          uVar11 = 0xffffffff8007000e;
        }
        else {
          if ((int *)param_1[0xd] == (int *)0x0) {
            iVar5 = param_1[0xf];
          }
          else {
            iVar5 = *(int *)param_1[0xd];
          }
          uVar11 = fn_82A511A0(puVar6,*(unsigned int *)(iVar9 + param_2[1]),piVar10,auStack_60[0],
                                 iVar5);
          if (-1 < (__int64)uVar11) {
            iVar5 = fn_82A484F8(param_1 + 2,puVar6);
            if (iVar5 == 0) goto LAB_82a51b48;
            if ((param_1[1] == 1) ||
               (uVar11 = (**(int (***)())**(unsigned int **)puVar6[2])
                                   (*(unsigned int **)puVar6[2],0x1337f001), -1 < (__int64)uVar11)) {
              lVar4 = fn_82A484F8(iVar1 + 0x54,param_1);
              uVar11 = -(unsigned __int64)(lVar4 == 0) & 0xffffffff8007000e;
              if (-1 < (__int64)uVar11) goto LAB_82a51bec;
            }
          }
        }
        if ((unsigned int *)param_1[9] == (unsigned int *)0x0) {
          puVar7 = (unsigned int *)0x0;
        }
        else {
          puVar7 = *(unsigned int **)param_1[9];
        }
        if (puVar7 == puVar6) {
          fn_82A50948(param_1 + 2);
        }
        if (puVar6 != (unsigned int *)0x0) {
          fn_82A51260(puVar6);
          fn_82A4F4E0(puVar6);
        }
        fn_82A403E8(param_1[0xc],auStack_60[0]);
      }
LAB_82a51bec:
      uVar8 = uVar8 + 1;
      iVar9 = iVar9 + 8;
    } while (uVar8 < *param_2);
    if ((int)uVar11 < 0) goto LAB_82a51c48;
  }
  if ((int *)param_1[0xd] == (int *)0x0) {
    iVar9 = param_1[0xf];
  }
  else {
    iVar9 = *(int *)param_1[0xd];
  }
  uVar11 = (**(int (***)())(*param_1 + 0x60))(param_1,iVar9,param_1[0x13],0x1337f001);
  if (-1 < (__int64)uVar11) {
    return uVar11;
  }
LAB_82a51c48:
  fn_82A51860(param_1);
  return uVar11;
}

