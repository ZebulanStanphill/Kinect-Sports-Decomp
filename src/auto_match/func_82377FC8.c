extern unsigned int *auStack_70;
extern unsigned int fStack_6c;
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_823730C0();
extern int fn_82379498();
extern int fn_82379A60();
extern int fn_8237AFE8();
extern unsigned int iStack_7c;
extern unsigned int iStack_80;


void fn_82377FC8(double param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  char param_5)

{
  unsigned int *puVar1;
  int in_r0;
  unsigned int *puVar2;
  double dVar3;
  unsigned int uVar4;
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
  int iStack_80;
  int iStack_7c;
  unsigned char auStack_70 [4];
  float fStack_6c;
  
  fn_823730C0(&iStack_80,param_2);
  fn_8237AFE8(iStack_80);
  puVar1 = (unsigned int *)(in_r0 + iStack_80 + 0x30 & 0xfffffff0);
  *puVar1 = in_register_00010020;
  puVar1[1] = in_register_00010024;
  puVar1[2] = in_register_00010028;
  puVar1[3] = in_vr2;
  *(float *)(iStack_80 + 0x118) = (float)param_1;
  *(float *)(iStack_80 + 0x11c) = (float)param_1;
  puVar1 = (unsigned int *)(iStack_80 + 400U & 0xfffffff0);
  *puVar1 = in_register_00010030;
  puVar1[1] = in_register_00010034;
  puVar1[2] = in_register_00010038;
  puVar1[3] = in_vr3;
  *(unsigned int *)(iStack_80 + 0x2130) = 0;
  *(unsigned int *)(iStack_80 + 0x2134) = 0;
  puVar1 = (unsigned int *)(in_r0 + iStack_80 + 0x30 & 0xfffffff0);
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  *(unsigned int *)(iStack_80 + 0x2138) = 0;
  puVar1 = (unsigned int *)((unsigned int)(auStack_70 + in_r0) & 0xfffffff0);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  *(unsigned int *)(iStack_80 + 0x2148) = 0x18;
  *(unsigned int *)(iStack_80 + 0xdc) = 0;
  dVar3 = (double)fn_82379A60(iStack_80);
  *(float *)(iStack_80 + 0x120) = (float)(-(double)fStack_6c / dVar3);
  puVar2 = (unsigned int *)fn_82365BD8(auStack_70,&iStack_80);
  if (*(int *)(*puVar2 + 0xa4) == 0) {
    *(unsigned int *)(*puVar2 + 0xa4) = 1;
    fn_82379498((unsigned __int64)*puVar2,(unsigned __int64)*puVar2 + 0xec);
  }
  if (puVar2[1] != 0) {
    fn_822315A0();
  }
  if (param_5 != '\0') {
    *(unsigned int *)(iStack_80 + 0xc0) = 1;
  }
  if (iStack_7c != 0) {
    fn_822315A0();
  }
  return;
}

