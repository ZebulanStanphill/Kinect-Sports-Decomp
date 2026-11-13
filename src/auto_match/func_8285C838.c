extern int fn_8285FD38();
extern int fn_828600E0();
extern int fn_828611B8();
extern int fn_82862308();
extern unsigned int lbl_8321157C;


void fn_8285C838(int param_1,unsigned __int64 param_2)

{
  if (param_1 != 0) {
    if ((param_2 & 0xffffffff) == 0) {
      fn_828600E0(param_1,lbl_8321157C);
    }
    else {
      if (*(int *)(param_1 + 0x44) != 0) {
        fn_82862308(*(int *)(param_1 + 0x44),lbl_8321157C,0xffffffff83211528);
      }
      fn_828611B8(param_2,0xffffffff83211380,0xf0,0xf0,0xffffffff83211408);
      fn_8285FD38(param_1,lbl_8321157C,0xffffffff83211408);
    }
  }
  return;
}

