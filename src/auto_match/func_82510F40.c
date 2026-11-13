extern unsigned int *auStack_30;
extern int fn_8255E0B0();
extern int fn_82574340();
extern int fn_825932A8();


int fn_82510F40(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned char auStack_30 [24];
  
  if ((param_3 & 0xffff) == 0) {
    if ((short)param_4 < 0) {
      puVar2 = (unsigned int *)(*(int *)(param_2 + 8) + 0x50U & 0xfffffff0);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      uVar6 = puVar2[2];
      uVar7 = puVar2[3];
      goto LAB_82510fe4;
    }
    fn_8255E0B0(*(unsigned int *)(param_2 + 8),param_4,auStack_30);
  }
  else {
    uVar3 = fn_825932A8(*(unsigned int *)(param_2 + 8),param_3);
    iVar1 = *(int *)(param_2 + 8);
    if ((*(int *)(iVar1 + 0x4c) == 0) || (*(int *)(iVar1 + 0x8c0) == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(unsigned int *)
               ((*(int *)(*(int *)(iVar1 + 0x4c) + 0x44) + 0x20) * 4 + *(int *)(iVar1 + 0x8c0));
    }
    fn_82574340(uVar3,iVar1 + 0xf0,uVar4,auStack_30);
  }
  puVar2 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
  uVar4 = *puVar2;
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
LAB_82510fe4:
  puVar2 = (unsigned int *)(in_r0 + param_1 & 0xfffffff0);
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  return param_1;
}

