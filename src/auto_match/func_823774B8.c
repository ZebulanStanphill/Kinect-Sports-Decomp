extern unsigned int *auStack_70;
extern unsigned int fStack_6c;
extern int fn_822315A0();
extern int fn_822ABA88();
extern int fn_823730C0();
extern int fn_82379A60();
extern int fn_8237AFE8();
extern int fn_825275B0();
extern unsigned int iStack_7c;
extern unsigned int lbl_8218E8E8;


void fn_823774B8(double param_1,double param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,int param_6,unsigned __int64 param_7)

{
  int *piVar1;
  int in_r0;
  unsigned int uVar2;
  unsigned int *puVar3;
  double dVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int in_register_00010020;
  unsigned int in_register_00010024;
  unsigned int in_register_00010028;
  unsigned int in_vr2;
  unsigned int in_register_00010030;
  unsigned int in_register_00010034;
  unsigned int in_register_00010038;
  unsigned int in_vr3;
  unsigned int *puStack_80;
  int iStack_7c;
  unsigned char auStack_70 [4];
  float fStack_6c;
  
  piVar1 = *(int **)(**(int **)((int)param_3 + 8) + param_6 * 4);
  uVar2 = fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1),param_7);
  fn_823730C0(&puStack_80,param_3);
  if (puStack_80[0x27] != 0) {
    fn_825275B0(*puStack_80);
    puStack_80[0x27] = 0;
  }
  puVar3 = puStack_80 + 0xc9;
  if ((double)lbl_8218E8E8 <= param_2) {
    puVar3 = puStack_80 + 0xf2;
  }
  puStack_80[0x49] = *puVar3;
  fn_8237AFE8(puStack_80);
  puVar3 = (unsigned int *)((int)puStack_80 + in_r0 + 0x30 & 0xfffffff0);
  *puVar3 = in_register_00010020;
  puVar3[1] = in_register_00010024;
  puVar3[2] = in_register_00010028;
  puVar3[3] = in_vr2;
  puStack_80[0x46] = (float)param_1;
  puStack_80[0x47] = (float)param_1;
  puVar3 = (unsigned int *)((unsigned int)(puStack_80 + 100) & 0xfffffff0);
  *puVar3 = in_register_00010030;
  puVar3[1] = in_register_00010034;
  puVar3[2] = in_register_00010038;
  puVar3[3] = in_vr3;
  puStack_80[0x84c] = uVar2;
  puStack_80[0x84d] = 0;
  puVar3 = (unsigned int *)((int)puStack_80 + in_r0 + 0x30 & 0xfffffff0);
  uVar2 = *puVar3;
  uVar5 = puVar3[1];
  uVar6 = puVar3[2];
  uVar7 = puVar3[3];
  puStack_80[0x84e] = 0;
  puVar3 = (unsigned int *)((unsigned int)(auStack_70 + in_r0) & 0xfffffff0);
  *puVar3 = uVar2;
  puVar3[1] = uVar5;
  puVar3[2] = uVar6;
  puVar3[3] = uVar7;
  puStack_80[0x852] = 1;
  puStack_80[0x37] = 1;
  dVar4 = (double)fn_82379A60(puStack_80);
  puStack_80[0x48] = (float)(-(double)fStack_6c / dVar4);
  puStack_80[0x33] = 0;
  puStack_80[0x34] = 0;
  puStack_80[0x32] = 0;
  puStack_80[0x30] = 0;
  if (iStack_7c != 0) {
    fn_822315A0();
  }
  return;
}

