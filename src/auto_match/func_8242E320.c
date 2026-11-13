extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern int fn_82579288();
extern int fn_825795A8();
extern int fn_82A1DD38();
extern unsigned int uStack_8d;


unsigned __int64 fn_8242E320(int param_1,int param_2,unsigned char *param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  int *piVar3;
  int iVar4;
  unsigned __int64 uVar5;
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
  unsigned char auStack_d0 [16];
  unsigned char auStack_c0 [16];
  unsigned char auStack_b0 [35];
  unsigned char uStack_8d;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x174) + 0x9c);
  puVar1 = (unsigned int *)((unsigned int)(auStack_c0 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010020;
  puVar1[1] = in_register_00010024;
  puVar1[2] = in_register_00010028;
  puVar1[3] = in_vr2;
  puVar1 = (unsigned int *)((unsigned int)(auStack_d0 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  piVar3 = (int *)fn_82579288(*(unsigned int *)(iVar4 + 0x6d0));
  uVar5 = 0;
  iVar4 = fn_825795A8(piVar3,auStack_d0,auStack_c0,0xffffffffffffffff);
  if (iVar4 == 1) {
    fn_82A1DD38(auStack_b0,*(unsigned int *)(piVar3[4] + 4),0x80);
    if (param_3 != (unsigned char *)0x0) {
      *param_3 = uStack_8d;
    }
    if (param_2 != 0) {
      puVar1 = (unsigned int *)((unsigned int)(auStack_b0 + in_r0) & 0xfffffff0);
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar2 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
    }
    uVar5 = 1;
  }
  *(unsigned short *)(piVar3 + 0x67) = 0;
  piVar3[100] = piVar3[99];
  *(unsigned char *)(piVar3[0x62] + *piVar3 + 0x754) = 0;
  return uVar5;
}

