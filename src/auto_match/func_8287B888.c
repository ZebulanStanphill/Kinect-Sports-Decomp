extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_82868378();
extern int fn_8286DA10();
extern int fn_82FE6898();


unsigned __int64
fn_8287B888(int param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4,
             unsigned int *param_5)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned char auStack_60 [32];
  unsigned char auStack_40 [40];
  
  *(unsigned int *)(param_1 + 0x30) = *param_3;
  *(unsigned int *)(param_1 + 0x34) = param_3[1];
  *(float *)(param_1 + 0x38) = -(float)param_3[2];
  *(unsigned int *)(param_1 + 0x3c) = *param_4;
  *(unsigned int *)(param_1 + 0x40) = param_4[1];
  *(float *)(param_1 + 0x44) = -(float)param_4[2];
  *(unsigned int *)(param_1 + 0x48) = *param_2;
  *(unsigned int *)(param_1 + 0x4c) = param_2[1];
  *(float *)(param_1 + 0x50) = -(float)param_2[2];
  *(unsigned int *)(param_1 + 0x54) = *param_5;
  *(unsigned int *)(param_1 + 0x58) = param_5[1];
  *(unsigned int *)(param_1 + 0x5c) = param_5[2];
  uVar1 = fn_82FE6898(param_1 + 0x30,*(unsigned int *)(param_1 + 0x2c));
  if ((int)uVar1 == 1) {
    uVar1 = 0x20250000;
  }
  else {
    fn_82230110(auStack_60,0xffffffff82022da8);
    uVar2 = fn_8223B688(auStack_40,auStack_60);
    uVar3 = fn_82868378();
    fn_8286DA10(uVar3,uVar2,uVar1);
    fn_82230300(auStack_60,1,0);
    uVar1 = 0xffffffffa0250000;
  }
  return uVar1;
}

