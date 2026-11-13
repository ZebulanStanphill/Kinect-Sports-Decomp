extern int fn_82825290();
extern int fn_82F63CA0();
extern int fn_82F68CC0();


void fn_82824188(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,int *param_5)

{
  unsigned char bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned char *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = fn_82825290(param_5);
  *param_5 = iVar2;
  iVar2 = fn_82825290(param_5 + 1);
  param_5[1] = iVar2;
  iVar3 = fn_82825290(param_5 + 2);
  iVar2 = *param_5;
  param_5[2] = iVar3;
  iVar7 = 0;
  iVar8 = 0;
  iVar6 = 0;
  iVar3 = 0;
  pbVar5 = (unsigned char *)(param_5 + 3);
  if (0 < iVar2) {
    do {
      bVar1 = *pbVar5;
      iVar4 = fn_82825290(pbVar5 + 1);
      if (bVar1 == 0) {
        fn_82F63CA0(iVar8 + param_3,iVar7 + param_1,iVar4);
        iVar8 = iVar4 + iVar8;
LAB_82824250:
        iVar7 = iVar4 + iVar7;
      }
      else {
        if (bVar1 == 1) {
          iVar7 = iVar4 + iVar7;
        }
        else if (2 < bVar1) {
          if (bVar1 == 3) goto LAB_82824250;
          goto LAB_82824254;
        }
        fn_82F68CC0(iVar8 + param_3,(unsigned char *)((int)(param_5 + 3) + iVar6 + iVar2 * 5),iVar4);
        iVar8 = iVar4 + iVar8;
        iVar6 = iVar4 + iVar6;
      }
LAB_82824254:
      iVar3 = iVar3 + 1;
      pbVar5 = pbVar5 + 5;
    } while (iVar3 < *param_5);
  }
  return;
}

