extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_82230218();
extern int fn_825089A0();
extern int fn_82880A10();
extern int fn_8289EBC0();
extern int fn_8289EE00();
extern int fn_828A0AD0();
extern unsigned int lbl_82023C48;


unsigned int *
fn_8289FC80(unsigned int *param_1,__int64 param_2,unsigned int param_3,unsigned int param_4,
             unsigned int param_5,unsigned int param_6,unsigned __int64 param_7,unsigned char param_8)

{
  unsigned int uVar1;
  int iVar2;
  int *piVar3;
  double dVar4;
  unsigned char auStack_40 [8];
  unsigned char auStack_38 [8];
  
  param_1[2] = param_4;
  param_1[10] = param_3;
  param_1[3] = param_5;
  param_1[4] = param_6;
  *(unsigned char *)((int)param_1 + 0x26) = param_8;
  *param_1 = &lbl_82023C48;
  param_1[1] = 0;
  *(unsigned char *)(param_1 + 9) = 0;
  *(unsigned char *)((int)param_1 + 0x25) = 0;
  param_1[0x10] = 0xf;
  param_1[0xf] = 0;
  *(unsigned char *)(param_1 + 0xb) = 0;
  fn_82230218(param_1 + 0xb,param_7,0,0xffffffffffffffff);
  param_1[0x14] = (int)param_2;
  param_1[0x13] = 0;
  fn_8289EBC0(param_1 + 0x15,auStack_40,auStack_40);
  uVar1 = param_1[3];
  iVar2 = fn_8289EE00(param_2 + 0x21c);
  if ((unsigned int *)(iVar2 + 0xc) != (unsigned int *)0x0) {
    *(unsigned int *)(iVar2 + 0xc) = uVar1;
    *(unsigned int **)(iVar2 + 0x10) = param_1;
  }
  fn_82880A10(auStack_38,param_2 + 0x21c,iVar2,0);
  if (param_1[10] != -1) {
    fn_828A0AD0(param_1[10],param_2);
  }
  piVar3 = (int *)fn_825089A0();
  dVar4 = (double)(**(int (***)())(*piVar3 + 8))();
  param_1[6] = (float)dVar4;
  param_1[7] = (float)dVar4;
  param_1[5] = (float)dVar4;
  param_1[8] = (float)dVar4;
  return param_1;
}

