extern unsigned int *auStack_40;
extern int fn_825089A0();
extern int fn_8265C9E0();
extern int fn_82899700();
extern int memset();
extern unsigned int lbl_82023BA4;
extern unsigned int lbl_82197140;


unsigned int * fn_8289D7E8(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned char auStack_40 [32];

  *param_1 = &lbl_82023BA4;
  param_1[1] = &lbl_82197140;
  param_1[2] = 7;
  param_1[3] = 0;
  param_1[4] = (int)param_2;
  if ((param_2 & 0xffffffff) < 5) {
    param_1[3] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    *(unsigned char *)(param_1 + 9) = 0;
    param_1[10] = 0;
    *(unsigned char *)(param_1 + 0xb) = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xf] = 0;
    piVar2 = (int *)fn_825089A0();
    uVar3 = (**(int (***)())(*piVar2 + 0x24))(piVar2,0x20,1);
    param_1[0xe] = uVar3;
    *(unsigned int *)uVar3 = uVar3;
    *(unsigned int *)(param_1[0xe] + 4) = param_1[0xe];
    fn_82899700(param_1 + 0x11,auStack_40,auStack_40[0]);
    return param_1;
  }
  uVar1 = fn_8265C9E0(param_2);
                    /* WARNING: Subroutine does not return */
  memset(uVar1,0,param_2);
}
