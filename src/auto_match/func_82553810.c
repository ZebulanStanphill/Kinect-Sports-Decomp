extern unsigned int lbl_821954E8;


__int64 fn_82553810(double param_1,double param_2,int param_3,unsigned __int64 param_4,
                      unsigned __int64 param_5,unsigned int param_6)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  int *piVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int in_register_00010020;
  unsigned int in_register_00010024;
  unsigned int in_register_00010028;
  unsigned int in_vr2;
  unsigned int in_register_00010450;
  unsigned int in_register_00010454;
  unsigned int in_register_00010458;
  unsigned int in_vr69;
  
  if (*(int *)(param_3 + 0x4660) < 0x50) {
    puVar1 = (unsigned int *)(*(int *)(param_3 + 0x4660) * 0xd0 + param_3 + 0x420U & 0xfffffff0);
    *puVar1 = in_register_00010010;
    puVar1[1] = in_register_00010014;
    puVar1[2] = in_register_00010018;
    puVar1[3] = in_vr1;
    puVar1 = (unsigned int *)(*(int *)(param_3 + 0x4660) * 0xd0 + param_3 + 0x430U & 0xfffffff0);
    *puVar1 = in_register_00010020;
    puVar1[1] = in_register_00010024;
    puVar1[2] = in_register_00010028;
    puVar1[3] = in_vr2;
    uVar6 = lbl_821954E8;
    lVar3 = 0;
    *(float *)(*(int *)(param_3 + 0x4660) * 0xd0 + param_3 + 0x4b4) = (float)param_1;
    piVar4 = (int *)(param_3 + 0x4520);
    *(float *)(*(int *)(param_3 + 0x4660) * 0xd0 + param_3 + 0x4b0) = (float)param_2;
    puVar1 = (unsigned int *)(*(int *)(param_3 + 0x4660) * 0xd0 + param_3 + 0x450U & 0xfffffff0);
    *puVar1 = in_register_00010010;
    puVar1[1] = in_register_00010014;
    puVar1[2] = in_register_00010018;
    puVar1[3] = in_vr1;
    *(unsigned int *)(*(int *)(param_3 + 0x4660) * 0xd0 + param_3 + 0x4bc) = 0xffffffff;
    puVar1 = (unsigned int *)(*(int *)(param_3 + 0x4660) * 0xd0 + param_3 + 0x470U & 0xfffffff0);
    *puVar1 = in_register_00010020;
    puVar1[1] = in_register_00010024;
    puVar1[2] = in_register_00010028;
    puVar1[3] = in_vr2;
    *(unsigned int *)(*(int *)(param_3 + 0x4660) * 0xd0 + param_3 + 0x4c8) = param_6;
    *(unsigned int *)(*(int *)(param_3 + 0x4660) * 0xd0 + param_3 + 0x4cc) = (unsigned int)LZCOUNT(param_6) >> 5;
    *(unsigned int *)(*(int *)(param_3 + 0x4660) * 0xd0 + param_3 + 0x4b8) = uVar6;
    puVar1 = (unsigned int *)(*(int *)(param_3 + 0x4660) * 0xd0 + param_3 + 0x440U & 0xfffffff0);
    *puVar1 = in_register_00010450;
    puVar1[1] = in_register_00010454;
    puVar1[2] = in_register_00010458;
    puVar1[3] = in_vr69;
    iVar5 = *(int *)(param_3 + 0x4660) * 0xd0 + param_3;
    puVar1 = (unsigned int *)(iVar5 + 0x440U & 0xfffffff0);
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    puVar2 = (unsigned int *)(iVar5 + 0x460U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    *(unsigned int *)(*(int *)(param_3 + 0x4660) * 0xd0 + param_3 + 0x4c0) = 0;
    *(unsigned int *)((*(int *)(param_3 + 0x4660) + 6) * 0xd0 + param_3) = 1;
    iVar5 = *(int *)(param_3 + 0x4520);
    while (iVar5 != *(int *)(param_3 + 0x4660)) {
      piVar4 = piVar4 + 1;
      lVar3 = lVar3 + 1;
      iVar5 = *piVar4;
    }
    *(int *)(param_3 + 0x4660) = *(int *)(param_3 + 0x4660) + 1;
  }
  else {
    lVar3 = -1;
  }
  return lVar3;
}

