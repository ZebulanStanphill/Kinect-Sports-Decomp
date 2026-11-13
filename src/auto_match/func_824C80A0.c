extern int fn_824C6280();
extern int fn_824C83B8();
extern int fn_824C84E8();
extern unsigned int lbl_8218E1AC;


void fn_824C80A0(unsigned __int64 param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned __int64 in_r0;
  int iVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  fn_824C83B8();
  iVar3 = (int)in_r0;
  puVar1 = (unsigned int *)param_2[1];
  for (puVar4 = (unsigned int *)*param_2; puVar4 != puVar1; puVar4 = puVar4 + 2) {
    fn_824C84E8((double)lbl_8218E1AC,param_2,puVar4);
    fn_824C6280(param_1,*puVar4);
    iVar3 = (int)in_r0;
  }
  uVar2 = param_2[0x10];
  param_2[0x10] = 0;
  puVar4 = (unsigned int *)((int)param_2 + iVar3 + 0x20 & 0xfffffff0);
  uVar5 = *puVar4;
  uVar6 = puVar4[1];
  uVar7 = puVar4[2];
  uVar8 = puVar4[3];
  param_2[0x11] = uVar2;
  puVar4 = (unsigned int *)((unsigned int)(param_2 + 0xc) & 0xfffffff0);
  *puVar4 = uVar5;
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  puVar4 = (unsigned int *)((int)param_2 + iVar3 + 0x20 & 0xfffffff0);
  *puVar4 = in_register_000104d0;
  puVar4[1] = in_register_000104d4;
  puVar4[2] = in_register_000104d8;
  puVar4[3] = in_vr77;
  return;
}

