extern int fn_8280AC48();
extern int fn_8280CB70();
extern int fn_82810360();
extern int fn_8285A808();
extern int fn_8285A830();
extern int fn_8285CF40();
extern int fn_82861370();
extern int fn_82F68CC0();
extern int fn_8306BA08();
extern int iRam832115a8;
extern unsigned int lbl_83211400;
extern unsigned int lbl_83211404;
extern unsigned int lbl_8321157C;
extern unsigned int lbl_83211580;
extern unsigned int lbl_83211584;
extern unsigned int lbl_8321158C;
extern unsigned int lbl_83211590;
extern unsigned int lbl_83211594;
extern unsigned int lbl_83211598;
extern unsigned int lbl_8321159C;
extern unsigned int lbl_832115A0;
extern unsigned int lbl_832115A4;
extern unsigned int lbl_832115A5;
extern unsigned int lbl_832115A6;


void fn_8285D080(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_8285A808();
  iVar2 = fn_8285A830(param_1,param_2);
  fn_82810360(iVar2 + 4,0xffffffff83211528);
  lbl_8321157C = (unsigned int)param_2;
  lbl_83211580 = *(unsigned int *)(param_1 + 0x2c);
  lbl_83211584 = *(unsigned int *)(param_1 + 0x30);
  lbl_8321158C = *(unsigned int *)(iVar1 + 0x9c);
  lbl_83211590 = *(unsigned int *)(iVar1 + 0xa0);
  lbl_83211594 = *(unsigned int *)(iVar1 + 0xa4);
  lbl_83211598 = *(unsigned int *)(iVar1 + 0xa8);
  lbl_8321159C = *(unsigned int *)(iVar1 + 0xac);
  lbl_832115A0 = *(unsigned int *)(iVar2 + 0x2c);
  lbl_832115A5 = 1;
  lbl_832115A6 = 0;
  lbl_83211400 = 0;
  lbl_83211404 = 0;
  fn_8280AC48(param_5,0xffffffff83211340);
  fn_8280AC48(param_4,0xffffffff83211380);
  if (*(int *)(iVar1 + 0x94) == 0) {
    fn_82F68CC0(0xffffffff83211408,param_8,0xa8);
  }
  else {
    lbl_83211400 = *(int *)(iVar1 + 0x94);
    lbl_83211404 = iVar1 + 0x10;
    fn_8280CB70(0xffffffff83211340,*(unsigned int *)(iVar1 + 0x94),0xffffffff83211340);
    fn_8280CB70(iVar1 + 0x10,0xffffffff83211380,0xffffffff83211380);
    fn_82861370(param_7,0xffffffff83211380,0xffffffff83211408);
  }
  fn_8280AC48(param_6,0xffffffff832113c0);
  fn_8306BA08(0xffffffff83211408,0xffffffff832114c8);
  fn_8285CF40(param_3,param_7,0xffffffff8321154c,0xffffffff83211554,0xffffffff8321156c);
  lbl_832115A4 = 1;
  iRam832115a8 = param_1 + 0x6c;
  return;
}

