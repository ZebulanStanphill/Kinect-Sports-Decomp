extern int fn_82DBD940();
extern unsigned int lbl_821AAD20;


void fn_82DC0208(unsigned int *param_1,int *param_2,unsigned __int64 param_3)

{
  unsigned char *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  unsigned int uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  unsigned __int64 uVar8;
  unsigned int in_register_00010000;
  unsigned int in_ACC;
  unsigned int in_register_00010008;
  unsigned int uVar9;
  unsigned int in_vr0;
  unsigned int uVar10;
  unsigned int in_register_00010020;
  unsigned int in_register_00010024;
  unsigned int in_register_00010028;
  unsigned int in_vr2;
  unsigned int in_register_00010040;
  unsigned int in_register_00010044;
  unsigned int in_register_00010048;
  unsigned int in_vr4;
  unsigned int in_register_00010060;
  unsigned int in_register_00010064;
  unsigned int in_register_00010068;
  unsigned int in_vr6;
  unsigned int in_register_00010080;
  unsigned int in_register_00010084;
  unsigned int in_register_00010088;
  unsigned int in_vr8;
  unsigned int in_register_00010090;
  unsigned int in_register_00010094;
  unsigned int in_register_00010098;
  unsigned int in_vr9;
  unsigned int in_register_000100a0;
  unsigned int in_register_000100a4;
  unsigned int in_register_000100a8;
  unsigned int in_vr10;
  unsigned int in_register_000100b0;
  unsigned int in_register_000100b4;
  unsigned int in_register_000100b8;
  unsigned int in_vr11;
  unsigned int in_register_000100c0;
  unsigned int in_register_000100c4;
  unsigned int in_register_000100c8;
  unsigned int in_vr12;
  
  if ((int)param_3 != 0) {
    puVar1 = (unsigned char *)param_1[5];
    if (puVar1 == (unsigned char *)param_1[3]) {
      *puVar1 = 1;
      *(unsigned int *)(puVar1 + 8) = lbl_821AAD20;
      puVar2 = (unsigned int *)((unsigned int)(puVar1 + in_r0 + 0x30) & 0xfffffff0);
      *puVar2 = in_register_000100c0;
      puVar2[1] = in_register_000100c4;
      puVar2[2] = in_register_000100c8;
      puVar2[3] = in_vr12;
      puVar2 = (unsigned int *)((unsigned int)(puVar1 + in_r0 + 0x10) & 0xfffffff0);
      in_register_000100b0 = *puVar2;
      in_register_000100b4 = puVar2[1];
      in_register_000100b8 = puVar2[2];
      in_vr11 = puVar2[3];
      puVar2 = (unsigned int *)((unsigned int)(puVar1 + in_r0 + 0x10) & 0xfffffff0);
      *puVar2 = in_register_000100a0;
      puVar2[1] = in_register_000100a4;
      puVar2[2] = in_register_000100a8;
      puVar2[3] = in_vr10;
      puVar2 = (unsigned int *)((unsigned int)(puVar1 + in_r0 + 0x20) & 0xfffffff0);
      in_register_00010090 = *puVar2;
      in_register_00010094 = puVar2[1];
      in_register_00010098 = puVar2[2];
      in_vr9 = puVar2[3];
      puVar2 = (unsigned int *)((unsigned int)(puVar1 + in_r0 + 0x20) & 0xfffffff0);
      *puVar2 = in_register_00010080;
      puVar2[1] = in_register_00010084;
      puVar2[2] = in_register_00010088;
      puVar2[3] = in_vr8;
      puVar2 = (unsigned int *)((unsigned int)(puVar1 + in_r0 + 0x40) & 0xfffffff0);
      *puVar2 = in_register_00010060;
      puVar2[1] = in_register_00010064;
      puVar2[2] = in_register_00010068;
      puVar2[3] = in_vr6;
      puVar2 = (unsigned int *)((unsigned int)(puVar1 + in_r0 + 0x50) & 0xfffffff0);
      *puVar2 = in_register_00010000;
      puVar2[1] = in_ACC;
      puVar2[2] = in_register_00010008;
      puVar2[3] = in_vr0;
      puVar2 = (unsigned int *)((unsigned int)(puVar1 + 0x60) & 0xfffffff0);
      *puVar2 = in_register_00010000;
      puVar2[1] = in_ACC;
      puVar2[2] = in_register_00010008;
      puVar2[3] = in_vr0;
      puVar2 = (unsigned int *)((unsigned int)(puVar1 + 0x70) & 0xfffffff0);
      *puVar2 = in_register_00010000;
      puVar2[1] = in_ACC;
      puVar2[2] = in_register_00010008;
      puVar2[3] = in_vr0;
      param_1[5] = puVar1 + 0x80;
      iVar6 = param_1[6];
      puVar2 = (unsigned int *)(in_r0 + iVar6 + 0x10 & 0xfffffff0);
      *puVar2 = in_register_00010040;
      puVar2[1] = in_register_00010044;
      puVar2[2] = in_register_00010048;
      puVar2[3] = in_vr4;
      puVar2 = (unsigned int *)(in_r0 + iVar6 & 0xfffffff0);
      *puVar2 = in_register_00010020;
      puVar2[1] = in_register_00010024;
      puVar2[2] = in_register_00010028;
      puVar2[3] = in_vr2;
    }
    if ((param_3 & 0xffffffff) != 0) {
      iVar6 = 0;
      piVar5 = param_2 + -1;
      uVar8 = param_3;
      do {
        piVar5 = piVar5 + 1;
        iVar7 = iVar6 - param_1[3];
        iVar6 = iVar6 + 0x80;
        *(int *)(*piVar5 + 0xa4) = iVar7 + param_1[5];
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    iVar6 = param_1[5];
    iVar7 = (*(unsigned int *)(*param_2 + 0xa4) >> 2 & 0x3fffffe0) + param_1[6];
    uVar4 = fn_82DBD940(*param_1,param_2,param_3,0xe0,iVar6);
    param_1[5] = uVar4;
    if ((param_3 & 0xffffffff) != 0) {
      iVar6 = iVar6 + 0x50;
      do {
        puVar2 = (unsigned int *)(iVar6 - 0x10U & 0xfffffff0);
        uVar4 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        puVar3 = (unsigned int *)(in_r0 + iVar7 & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar4;
        puVar3[2] = uVar9;
        puVar3[3] = uVar10;
        puVar2 = (unsigned int *)(in_r0 + iVar6 & 0xfffffff0);
        uVar4 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        puVar3 = (unsigned int *)(iVar7 + 0x10U & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar4;
        puVar3[2] = uVar9;
        puVar3[3] = uVar10;
        iVar7 = iVar7 + 0x20;
        puVar2 = (unsigned int *)(iVar6 - 0x10U & 0xfffffff0);
        *puVar2 = in_register_000100b0;
        puVar2[1] = in_register_000100b4;
        puVar2[2] = in_register_000100b8;
        puVar2[3] = in_vr11;
        puVar2 = (unsigned int *)(in_r0 + iVar6 & 0xfffffff0);
        *puVar2 = in_register_00010090;
        puVar2[1] = in_register_00010094;
        puVar2[2] = in_register_00010098;
        puVar2[3] = in_vr9;
        iVar6 = iVar6 + 0x80;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
    *(unsigned char *)param_1[5] = 3;
  }
  return;
}

