extern int fn_82C10968();
extern int fn_82C10BA8();
extern int fn_82C2A300();
extern int fn_82C2A438();
extern int fn_82C2AD08();
extern int fn_82C2AD88();
extern int fn_82C2AE10();
extern int fn_82C2AE18();
extern int fn_82C2AEC0();
extern int fn_82C2B028();
extern int fn_82C2B100();
extern int fn_82C2B108();
extern int fn_82C2B248();
extern unsigned int lbl_83175B68;
extern unsigned int lbl_83175B70;


unsigned __int64 fn_82C2B368(unsigned __int64 param_1,unsigned __int64 param_2,int *param_3,unsigned int *param_4)

{
  unsigned __int64 uVar1;
  int aiStack_40;
  
  uVar1 = fn_82C10BA8(param_1,lbl_83175B68,&aiStack_40);
  if (-1 < (int)uVar1) {
    if ((aiStack_40 == 0) ||
       (uVar1 = fn_82C10968(aiStack_40,lbl_83175B70), (int)uVar1 != 0)) {
      uVar1 = 0xffffffff80500003;
    }
    else {
      param_4[0xb] = 0;
      *param_4 = fn_82C2A300;
      param_4[1] = fn_82C2AD08;
      param_4[2] = fn_82C2AE10;
      param_4[3] = fn_82C2B100;
      param_4[4] = fn_82C2B108;
      param_4[5] = fn_82C2B248;
      param_4[6] = fn_82C2AE18;
      param_4[7] = fn_82C2AEC0;
      param_4[8] = fn_82C2A438;
      param_4[9] = fn_82C2B028;
      param_4[10] = fn_82C2AD88;
      if (*param_3 == 1) {
        uVar1 = 0x500000;
      }
    }
  }
  return uVar1;
}

