extern unsigned int *auStack_80;
extern unsigned int *auStack_c0;
extern int fn_824FECB8();
extern int fn_824FFFC0();
extern unsigned int lbl_8218E210;
extern unsigned int uStack_a0;


int fn_82368E38(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned char auStack_c0 [32];
  unsigned int uStack_a0;
  unsigned char auStack_80 [112];
  
  uVar3 = fn_824FECB8(*(unsigned int *)(param_2 + 0xe10),auStack_80);
  uStack_a0 = 0;
  fn_824FFFC0(uVar3,(double)lbl_8218E210,auStack_80);
  puVar1 = (unsigned int *)((unsigned int)(auStack_c0 + in_r0) & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar2 = (unsigned int *)(in_r0 + param_1 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  return param_1;
}

