extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82672C20();


void fn_823DB6B8(double param_1,double param_2,int param_3,unsigned int *param_4,int param_5)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  char cVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int in_register_00010020;
  unsigned int in_register_00010024;
  unsigned int in_register_00010028;
  unsigned int in_vr2;
  
  if ((((*(int *)(param_3 + 0x80) != 0) && (param_5 == 0)) &&
      (iVar1 = *(int *)(param_3 + 0xa4), *(int *)(iVar1 + 0x34) != 0)) &&
     (*(int *)(iVar1 + 0x38) == 0)) {
    *(unsigned int *)(iVar1 + 0x38) = 1;
    fn_82672C20(*(unsigned int *)(iVar1 + 0x3c),0xffffffff821a8498,0,0);
  }
  *(float *)(param_3 + 0x84) = (float)param_1;
  *(float *)(param_3 + 0x88) = (float)param_2;
  *(int *)(param_3 + 0x80) = param_5;
  puVar3 = (unsigned int *)(param_3 + 0x60U & 0xfffffff0);
  *puVar3 = in_register_00010010;
  puVar3[1] = in_register_00010014;
  puVar3[2] = in_register_00010018;
  puVar3[3] = in_vr1;
  puVar3 = (unsigned int *)(param_3 + 0x70U & 0xfffffff0);
  *puVar3 = in_register_00010020;
  puVar3[1] = in_register_00010024;
  puVar3[2] = in_register_00010028;
  puVar3[3] = in_vr2;
  iVar1 = param_4[1];
  uVar2 = *param_4;
  uVar5 = 0;
  iVar6 = 0;
  if ((iVar1 != 0) && (cVar4 = fn_8223AAC0(iVar1), cVar4 != '\0')) {
    uVar5 = uVar2;
    iVar6 = iVar1;
  }
  iVar1 = *(int *)(param_3 + 0xa0);
  *(int *)(param_3 + 0xa0) = iVar6;
  *(unsigned int *)(param_3 + 0x9c) = uVar5;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  return;
}

