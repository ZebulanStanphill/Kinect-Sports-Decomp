extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern int fn_82236140();
extern int fn_82237F60();
extern int fn_822395B8();
extern int fn_8232A988();
extern int fn_823B4900();
extern int fn_8265CA20();
extern int fn_828E9D28();
extern unsigned int iStack_38;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


int fn_822CB1E0(int param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  double dVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char auStack_70 [16];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  unsigned char auStack_50 [16];
  unsigned int uStack_40;
  unsigned int uStack_3c;
  int iStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  
  uVar3 = fn_82236140(param_2);
  uStack_40 = (unsigned int)uVar3;
  iStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_3c = 4;
  fn_828E9D28(auStack_50,uVar3,4);
  fn_82237F60(&fStack_60,auStack_50);
  uVar4 = fn_823B4900(auStack_50,9,0,0);
  fn_8232A988(auStack_70,uVar4 >> 6 & 7,0,3);
  fn_8232A988(auStack_70,uVar4 & 0x3f,3,6);
  dVar5 = (double)fn_822395B8(auStack_70);
  fStack_60 = (float)((double)fStack_60 * dVar5);
  puVar1 = (unsigned int *)((int)&fStack_60 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  fStack_5c = (float)((double)fStack_5c * dVar5);
  fStack_58 = (float)((double)fStack_58 * dVar5);
  puVar1 = (unsigned int *)((int)&fStack_60 + in_r0 & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar2 = (unsigned int *)(in_r0 + param_1 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  if (iStack_38 != 0) {
    fn_8265CA20();
  }
  return param_1;
}

