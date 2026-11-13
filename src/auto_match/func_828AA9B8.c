extern int fn_8224E9D8();
extern int fn_822CB340();
extern int fn_823AB478();
extern int fn_82895048();
extern int fn_828AA838();
extern int fn_828AAF70();
extern int fn_828AB150();
extern int fn_828B8F40();
extern int fn_828EA600();
extern int fn_828EA610();
extern int fn_828EA840();
extern int fn_82E1DAA0();
extern unsigned int lbl_820244C8;


unsigned int *
fn_828AA9B8(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned char uVar3;
  
  fn_82895048(param_1,param_2,1);
  param_1[0x1a] = (int)param_3;
  *param_1 = &lbl_820244C8;
  uVar1 = param_1[0xd];
  uVar2 = fn_828B8F40(param_3);
  fn_822CB340((unsigned int)uVar1 + 0x48,uVar2);
  uVar1 = param_1[0xd];
  uVar2 = fn_82E1DAA0(param_3);
  fn_8224E9D8((unsigned int)uVar1 + 0x9c,uVar2);
  uVar1 = param_1[0xd];
  uVar3 = fn_823AB478(param_3);
  fn_828AB150((unsigned int)uVar1 + 0xf0,uVar3);
  fn_828AAF70((unsigned int)(unsigned int)param_1[0xd] + 0x198,param_4);
  uVar1 = param_1[0xd];
  uVar2 = fn_828EA600(param_3);
  fn_828AAF70((unsigned int)uVar1 + 0x1ec,uVar2);
  uVar1 = param_1[0xd];
  uVar2 = fn_828EA840(param_3);
  fn_828AAF70((unsigned int)uVar1 + 0x240,uVar2);
  uVar1 = param_1[0xd];
  uVar2 = fn_828EA610(param_3);
  fn_828AAF70((unsigned int)uVar1 + 0x294,uVar2);
  fn_828AA838(param_1);
  return param_1;
}

