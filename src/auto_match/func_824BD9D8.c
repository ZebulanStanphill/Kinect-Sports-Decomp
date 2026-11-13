extern unsigned int *auStack_210;
extern int fn_82292450();
extern int fn_82299948();
extern int fn_82299AC8();
extern int fn_824BD858();
extern int fn_82528BF8();
extern int fn_8265C9E0();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8327672C;


unsigned __int64 fn_824BD9D8(int *param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned char auStack_210 [512];
  
  if ((*(int *)(*param_1 + 4) == 0) || (*(int *)(*param_1 + 8) != 0)) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    if (param_1[0x142] != 0) {
      fn_82292450(param_1[0x142],1);
      param_1[0x142] = 0;
    }
    uVar2 = fn_8265C9E0(0x1230);
    if ((uVar2 & 0xffffffff) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = fn_82299948(uVar2,9,0);
    }
    param_1[0x142] = iVar3;
    fn_82528BF8(lbl_8327672C,0xffffffff821c05dc,auStack_210,0x100,0,1);
    fn_82299AC8(param_1[0x142],auStack_210);
    uVar1 = fn_824BD858((double)lbl_821CA460,(double)ltcg_pool_0_0f,param_1);
  }
  return uVar1;
}

