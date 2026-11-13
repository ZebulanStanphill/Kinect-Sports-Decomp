extern unsigned int *auStack_60;
extern int fn_82F534D8();
extern int fn_8306ED70();
extern int fn_83075D30();
extern int fn_83075D80();
extern int fn_830760D0();
extern int fn_83076E58();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_83076F10(unsigned __int64 param_1,char param_2)

{
  unsigned int *puVar1;
  unsigned __int64 in_r0;
  unsigned __int64 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned char auStack_60 [96];
  
  uVar2 = 0;
  do {
    fn_83075D30(auStack_60,param_1,uVar2);
    uVar9 = in_vr1;
    uVar8 = in_register_00010018;
    uVar7 = in_register_00010014;
    uVar6 = in_register_00010010;
    fn_830760D0();
    puVar1 = (unsigned int *)((unsigned int)(auStack_60 + (int)in_r0) & 0xfffffff0);
    *puVar1 = in_register_00010010;
    puVar1[1] = in_register_00010014;
    puVar1[2] = in_register_00010018;
    puVar1[3] = in_vr1;
    in_vr1 = uVar9;
    in_register_00010018 = uVar8;
    in_register_00010014 = uVar7;
    in_register_00010010 = uVar6;
    fn_83075D80(param_1,uVar2);
    uVar2 = uVar2 + 1;
  } while ((uVar2 & 0xffffffff) < 0x14);
  if (param_2 != '\0') {
    uVar2 = 0;
    dVar3 = (double)lbl_821AAD20;
    dVar5 = (double)lbl_82002AE0;
    dVar4 = (double)lbl_8200133C;
    do {
      fn_83075D30(auStack_60,param_1,uVar2);
      fn_82F534D8(dVar4,dVar5,dVar5,dVar3);
      puVar1 = (unsigned int *)((unsigned int)(auStack_60 + (int)in_r0) & 0xfffffff0);
      uVar9 = *puVar1;
      uVar8 = puVar1[1];
      uVar7 = puVar1[2];
      uVar6 = puVar1[3];
      fn_8306ED70();
      puVar1 = (unsigned int *)((unsigned int)(auStack_60 + (int)in_r0) & 0xfffffff0);
      *puVar1 = uVar9;
      puVar1[1] = uVar8;
      puVar1[2] = uVar7;
      puVar1[3] = uVar6;
      fn_83075D80(param_1,uVar2);
      uVar2 = uVar2 + 1;
    } while ((uVar2 & 0xffffffff) < 0x14);
    fn_83076E58(param_1,8,4);
    fn_83076E58(param_1,9,5);
    fn_83076E58(param_1,10,6);
    fn_83076E58(param_1,0xb,7);
    fn_83076E58(param_1,0x10,0xc);
    fn_83076E58(param_1,0x11,0xd);
    fn_83076E58(param_1,0x12,0xe);
    fn_83076E58(param_1,0x13,0xf);
  }
  return;
}

