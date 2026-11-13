extern int fn_82561E40();
extern int fn_82566E58();
extern int fn_82567CC0();


void fn_82570738(unsigned __int64 param_1,int *param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 *puVar5;
  unsigned __int64 *puVar6;
  int iVar7;
  int iVar8;
  __int64 lVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  
  iVar8 = param_2[2];
  if (iVar8 != param_2[3]) {
    do {
      uVar10 = *(unsigned int *)(iVar8 + 4);
      iVar4 = fn_82567CC0(param_1,uVar10,param_2 + 8);
      if (iVar4 == 0) {
        puVar1 = (unsigned int *)((unsigned int)(param_2 + 0xc) & 0xfffffff0);
        uVar10 = puVar1[1];
        uVar11 = puVar1[2];
        uVar12 = puVar1[3];
        puVar2 = (unsigned int *)(iVar8 + 0x10U & 0xfffffff0);
        *puVar2 = *puVar1;
        puVar2[1] = uVar10;
        puVar2[2] = uVar11;
        puVar2[3] = uVar12;
        fn_82561E40(param_2 + 8);
        puVar1 = (unsigned int *)(iVar8 + 0x20U & 0xfffffff0);
        *puVar1 = in_register_00010010;
        puVar1[1] = in_register_00010014;
        puVar1[2] = in_register_00010018;
        puVar1[3] = in_vr1;
        iVar8 = iVar8 + 0x30;
      }
      else {
        fn_82566E58(uVar10,*(unsigned int *)(*param_2 + 0x844));
        iVar4 = param_2[3];
        iVar7 = iVar8;
        iVar3 = iVar8;
        while (iVar3 + 0x30 != iVar4) {
          puVar6 = (unsigned __int64 *)(iVar3 + 0x28);
          puVar5 = (unsigned __int64 *)(iVar7 + -8);
          lVar9 = 6;
          do {
            puVar6 = puVar6 + 1;
            puVar5 = puVar5 + 1;
            *puVar5 = *puVar6;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
          iVar7 = iVar7 + 0x30;
          iVar3 = iVar3 + 0x30;
        }
        iVar7 = param_2[3] + -0x30;
        for (iVar4 = iVar7; iVar4 != param_2[3]; iVar4 = iVar4 + 0x30) {
        }
        param_2[3] = iVar7;
      }
    } while (iVar8 != param_2[3]);
  }
  return;
}

