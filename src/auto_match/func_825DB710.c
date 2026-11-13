extern unsigned int *auStack_70;
extern int fn_8255CFD0();
extern int fn_825DBA60();
extern int fn_8261DCB8();
extern int fn_8261E158();
extern int fn_8261E600();
extern int fn_8261FD18();
extern int fn_82620218();
extern unsigned int lbl_8218E0C8;
extern unsigned int lbl_821915FC;
extern unsigned int lbl_82192488;
extern unsigned int ltcg_pool_0_0f;


void fn_825DB710(unsigned __int64 param_1,int param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6,unsigned __int64 param_7)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  int iVar4;
  double dVar5;
  double dVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char auStack_70 [112];
  
  fn_8261E600(param_3,0xffffffff831bf528);
  fn_8255CFD0(param_7,param_3 + 0x240);
  dVar6 = (double)ltcg_pool_0_0f;
  if ((((param_4 & 0xffffffff) != 0) && (dVar5 = (double)fn_8261FD18(param_4), dVar5 != dVar6)
      ) && (*(int *)(param_2 + 0x60) != 0)) {
    *(unsigned int *)(param_2 + 0x60) = 0;
    *(unsigned int *)(param_2 + 0x5c) = 1;
  }
  iVar4 = param_3 + 0x3f0;
  fn_825DBA60(param_1,param_2,param_3,param_4);
  if ((*(int *)(param_3 + 0x1c0) == 0) &&
     ((((*(unsigned int *)(param_3 + 0x310) & 0x100) == 0 && (*(int *)(param_3 + 0x220) != 2)) ||
      (*(int *)(param_3 + 0x228) == 0)))) {
    puVar2 = (unsigned int *)((unsigned int)(auStack_70 + in_r0) & 0xfffffff0);
    *puVar2 = in_register_000104d0;
    puVar2[1] = in_register_000104d4;
    puVar2[2] = in_register_000104d8;
    puVar2[3] = in_vr77;
    fn_82620218(param_1,param_3 + 0x460,iVar4,auStack_70,param_6,param_7);
  }
  else {
    puVar2 = (unsigned int *)(in_r0 + iVar4 & 0xfffffff0);
    uVar7 = *puVar2;
    uVar8 = puVar2[1];
    uVar9 = puVar2[2];
    uVar10 = puVar2[3];
    puVar2 = (unsigned int *)(param_3 + 0x400U & 0xfffffff0);
    *puVar2 = in_register_000104d0;
    puVar2[1] = in_register_000104d4;
    puVar2[2] = in_register_000104d8;
    puVar2[3] = in_vr77;
    puVar2 = (unsigned int *)(param_3 + 0x430U & 0xfffffff0);
    *puVar2 = in_register_000104d0;
    puVar2[1] = in_register_000104d4;
    puVar2[2] = in_register_000104d8;
    puVar2[3] = in_vr77;
    fn_8261DCB8();
    puVar2 = (unsigned int *)(param_3 + 0x410U & 0xfffffff0);
    *puVar2 = uVar7;
    puVar2[1] = uVar8;
    puVar2[2] = uVar9;
    puVar2[3] = uVar10;
  }
  uVar1 = *(unsigned int *)(param_3 + 0x310);
  if ((((uVar1 & 0x100) != 0) || (*(int *)(param_3 + 0x220) == 2)) &&
     ((*(int *)(param_3 + 0x330) != 0 && ((uVar1 & 0x40) == 0)))) {
    puVar2 = (unsigned int *)(param_3 + 0x290U & 0xfffffff0);
    uVar7 = puVar2[1];
    uVar8 = puVar2[2];
    uVar9 = puVar2[3];
    puVar3 = (unsigned int *)(in_r0 + iVar4 & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    puVar3[2] = uVar8;
    puVar3[3] = uVar9;
    if ((uVar1 & 0x20) != 0) {
      dVar6 = (double)lbl_821915FC;
    }
    fn_8261E158(param_1,dVar6,(double)lbl_82192488,(double)lbl_8218E0C8,param_3,
                      param_3 + 0x44c,param_3 + 0x448,uVar1 & 0x20,param_4);
    puVar2 = (unsigned int *)(param_3 + 0x2a0U & 0xfffffff0);
    uVar7 = puVar2[1];
    uVar8 = puVar2[2];
    uVar9 = puVar2[3];
    puVar3 = (unsigned int *)(param_3 + 0x410U & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    puVar3[2] = uVar8;
    puVar3[3] = uVar9;
  }
  return;
}

