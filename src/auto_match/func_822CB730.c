extern unsigned int *auStack_40;
extern int fn_822393D0();
extern int fn_823B4900();
extern int fn_8287C410();
extern int __u64tod();
extern unsigned int lbl_82195520;
extern float lbl_82195658;
extern unsigned int lbl_82195740;


void fn_822CB730(unsigned __int64 param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  double dVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned char auStack_40 [16];
  
  fn_823B4900(param_1,8,0,0);
  dVar3 = (double)__u64tod();
  dVar3 = (dVar3 + lbl_82195520) * lbl_82195658 * lbl_82195740;
  fn_822393D0(auStack_40,param_1);
  fn_8287C410((double)(float)dVar3,auStack_40);
  puVar1 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar2 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  return;
}

