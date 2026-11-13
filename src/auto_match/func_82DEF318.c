extern int fn_82CE5410();
extern int fn_82CED628();
extern int fn_82DEF8C8();
extern int fn_82DF0A60();
extern unsigned int lbl_82002C2C;
extern unsigned int lbl_8207F25C;
extern unsigned int lbl_820885C8;
extern unsigned int lbl_82145644;


unsigned int * fn_82DEF318(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int in_r0;
  int iVar4;
  unsigned int *puVar5;
  unsigned int in_register_000100d0;
  unsigned int in_register_000100d4;
  unsigned int in_register_000100d8;
  unsigned int in_vr13;
  
  fn_82DF0A60();
  param_1[0xc] = (int)param_2;
  uVar3 = lbl_820885C8;
  uVar2 = lbl_8207F25C;
  uVar1 = lbl_82002C2C;
  *param_1 = &lbl_82145644;
  param_1[8] = uVar1;
  param_1[9] = uVar3;
  param_1[10] = uVar2;
  param_1[0xb] = uVar2;
  puVar5 = (unsigned int *)((int)param_1 + in_r0 + 0x40 & 0xfffffff0);
  *puVar5 = in_register_000100d0;
  puVar5[1] = in_register_000100d4;
  puVar5[2] = in_register_000100d8;
  puVar5[3] = in_vr13;
  *(unsigned char *)(param_1 + 2) = 1;
  fn_82CED628(param_1 + 3,0xffffffff82145668);
  iVar4 = fn_82CE5410();
  puVar5 = (unsigned int *)(**(int (***)())(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0x14);
  if (puVar5 == (unsigned int *)0x0) {
    puVar5 = (unsigned int *)0x0;
  }
  else {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
  }
  param_1[0x14] = puVar5;
  fn_82DEF8C8(puVar5,param_2);
  return param_1;
}

