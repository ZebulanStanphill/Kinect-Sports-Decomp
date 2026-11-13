extern int fn_82F5CAA0();
extern int fn_82F5CCB0();
extern int fn_82F5CD68();
extern int fn_82F5CEA0();
extern int fn_82F5CF30();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83263180;


unsigned __int64
fn_82F5D068(unsigned __int64 param_1,int param_2,int *param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             unsigned int *param_6)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int in_r0;
  int iVar4;
  unsigned __int64 uVar3;
  int *piVar5;
  unsigned __int64 uVar6;
  unsigned int in_register_00010000;
  unsigned int in_ACC;
  unsigned int in_register_00010008;
  unsigned int in_vr0;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  
  uVar6 = 0;
  if ((param_3 == (int *)0x0) || (*param_3 != 2)) {
    *(unsigned int *)(param_2 + 0x30) = 0;
    *(unsigned int *)(param_2 + 0x34) = 0;
    *(unsigned int *)(param_2 + 0x14) = 1;
    *(unsigned int *)(param_2 + 0x1c) = 0;
    uVar7 = lbl_821AAD20;
    *(unsigned int *)(param_2 + 0x10) = lbl_821AAD20;
    *(unsigned int *)(param_2 + 0x20) = uVar7;
    *(unsigned int *)(param_2 + 0x24) = uVar7;
    *(unsigned int *)(param_2 + 0x2c) = uVar7;
    puVar1 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
    *puVar1 = in_register_00010000;
    puVar1[1] = in_ACC;
    puVar1[2] = in_register_00010008;
    puVar1[3] = in_vr0;
  }
  else {
    if ((int)param_4 == 0) {
      piVar5 = param_3 + 0x24;
    }
    else {
      piVar5 = param_3 + 0x34;
    }
    puVar1 = (unsigned int *)(in_r0 + (int)piVar5 & 0xfffffff0);
    uVar7 = *puVar1;
    uVar8 = puVar1[1];
    uVar9 = puVar1[2];
    uVar10 = puVar1[3];
    if (*(int *)(param_2 + 0x1c) == 0) {
      *(unsigned int *)(param_2 + 0x1c) = 1;
    }
    else {
      fn_82F5CF30(param_1,param_2);
      iVar4 = fn_82F5CCB0(param_1,param_2);
      if ((iVar4 != 0) && (iVar4 = fn_82F5CD68(param_2), iVar4 != 0)) {
        *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + 1;
        uVar3 = fn_82F5CEA0(param_2);
        iVar4 = fn_82F5CAA0(uVar3,param_3,param_4);
        uVar2 = lbl_821AAD20;
        if (iVar4 == 0) {
          *(unsigned int *)(param_2 + 0x10) = lbl_821AAD20;
          *(unsigned int *)(param_2 + 0x30) = 0;
          *(unsigned int *)(param_2 + 0x20) = uVar2;
          *(unsigned int *)(param_2 + 0x14) = 1;
          *(unsigned int *)(param_2 + 0x24) = uVar2;
          *(unsigned int *)(param_2 + 0x2c) = uVar2;
        }
        if (lbl_83263180 <= *(int *)(param_2 + 0x30)) {
          *(unsigned int *)(param_2 + 0x3c) = uVar2;
          uVar6 = 1;
          *(unsigned int *)(param_2 + 0x38) = 0;
          if (*(int *)(param_2 + 0x40) != 0) {
            *(unsigned int *)(param_2 + 0x10) = uVar2;
            *(unsigned int *)(param_2 + 0x30) = 0;
            *(unsigned int *)(param_2 + 0x20) = uVar2;
            *(unsigned int *)(param_2 + 0x14) = 1;
            *(unsigned int *)(param_2 + 0x24) = uVar2;
            *(unsigned int *)(param_2 + 0x2c) = uVar2;
          }
        }
      }
    }
    puVar1 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
  }
  if (param_6 != (unsigned int *)0x0) {
    *param_6 = (unsigned int)(*(int *)(param_2 + 0x30) != 0);
  }
  return uVar6;
}

