extern unsigned int *auStack_40;
extern int fn_82F152D0();
extern int fn_82F44D68();
extern int memset();
extern int iRam8325edb8;


void fn_82F15360(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int *piVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int auStack_40;
  
  iRam8325edb8 = (int)((param_2 & 0xffffffff) >> 0x1f) + (unsigned int)(param_2 < 6);
  if (0 < (int)param_3) {
    auStack_40 = 0;
    fn_82F152D0(param_1,param_3,&auStack_40,param_4,0xffffffff83260000,5 - param_2);
  }
  iVar3 = 0;
  *param_1 = 1;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[0x16] = param_1[0x15];
  if (0 < (int)param_1[3]) {
    puVar2 = param_1 + 9;
    do {
      puVar2 = puVar2 + 1;
      piVar1 = (int *)*puVar2;
      piVar1[0xd] = 0;
      memset(piVar1[0xc],0,*piVar1 << 2);
      fn_82F44D68(piVar1,param_2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[3]);
  }
  return;
}

