typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int fStack_4c;
extern unsigned int fStack_5c;
extern int fn_82F534D8();
extern int fn_8306E7D8();
extern int fn_8306ECD8();
extern int fn_8306ED70();
extern int fn_8306EE38();
extern int fn_83075D30();
extern int fn_83075D80();
extern int fn_830760D0();
extern int fn_83076CB0();
extern unsigned int lbl_82196080;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000020;
extern unsigned int stack0x00000030;


double fn_8306D898(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  bool bVar2;
  unsigned __int64 in_r0;
  unsigned char *puVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  double dVar6;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int in_register_00010020;
  unsigned int in_register_00010024;
  unsigned int in_register_00010028;
  unsigned int in_vr2;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  float in_stack_00000020;
  float in_stack_00000024;
  float in_stack_00000028;
  float in_stack_0000002c;
  unsigned char auStack_60 [4];
  float fStack_5c;
  unsigned char auStack_50 [4];
  float fStack_4c;
  
  puVar1 = (unsigned int *)((int)&stack0x00000020 + (int)in_r0 & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  puVar1 = (unsigned int *)((unsigned int)(&stack0x00000030 + (int)in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010020;
  puVar1[1] = in_register_00010024;
  puVar1[2] = in_register_00010028;
  puVar1[3] = in_vr2;
  dVar6 = (double)fn_8306EE38();
  if (dVar6 <= (double)lbl_82196080) {
    bVar2 = false;
    dVar6 = (double)fn_8306EE38();
    if (dVar6 <= (double)lbl_82196080) {
      fn_8306ECD8();
      puVar3 = auStack_60;
      puVar1 = (unsigned int *)((unsigned int)(auStack_60 + (int)in_r0) & 0xfffffff0);
      *puVar1 = in_register_00010020;
      puVar1[1] = in_register_00010024;
      puVar1[2] = in_register_00010028;
      puVar1[3] = in_vr2;
    }
    else {
      puVar3 = &stack0x00000030;
    }
    puVar1 = (unsigned int *)((unsigned int)(puVar3 + (int)in_r0) & 0xfffffff0);
    in_register_00010010 = *puVar1;
    in_register_00010014 = puVar1[1];
    in_register_00010018 = puVar1[2];
    in_vr1 = puVar1[3];
  }
  else {
    bVar2 = true;
    fn_82F534D8((double)in_stack_00000020,(double)in_stack_00000024,(double)in_stack_00000028,
                 (double)lbl_821AAD20);
  }
  fn_8306ED70();
  fn_8306ECD8();
  fn_83076CB0();
  uVar4 = 0;
  do {
    fn_83075D30(auStack_60,param_2,uVar4);
    uVar10 = in_vr1;
    uVar9 = in_register_00010018;
    uVar8 = in_register_00010014;
    uVar7 = in_register_00010010;
    fn_830760D0();
    puVar1 = (unsigned int *)((unsigned int)(auStack_60 + (int)in_r0) & 0xfffffff0);
    *puVar1 = in_register_00010010;
    puVar1[1] = in_register_00010014;
    puVar1[2] = in_register_00010018;
    puVar1[3] = in_vr1;
    in_vr1 = uVar10;
    in_register_00010018 = uVar9;
    in_register_00010014 = uVar8;
    in_register_00010010 = uVar7;
    fn_83075D80(param_2,uVar4);
    uVar4 = uVar4 + 1;
  } while ((uVar4 & 0xffffffff) < 0x14);
  if (bVar2) {
    dVar6 = -(double)in_stack_0000002c;
  }
  else {
    fn_83075D30(auStack_50,param_2,0xf);
    fn_83075D30(auStack_60,param_2,0x13);
    dVar6 = (double)fn_8306E7D8((double)fStack_4c,(double)fStack_5c);
  }
  lVar5 = 0;
  do {
    fn_83075D30(auStack_60,param_2,lVar5);
    fStack_5c = (float)((double)fStack_5c - dVar6);
    fn_83075D80(param_2,lVar5);
    lVar5 = lVar5 + 1;
  } while ((int)lVar5 < 0x14);
  return dVar6;
}

