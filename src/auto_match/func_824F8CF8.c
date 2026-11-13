extern int fn_824F6818();
extern int fn_824F6C80();
extern int fn_824F7138();
extern int fn_824F7718();
extern int fn_824F7E38();
extern int fn_824F8890();
extern unsigned int lbl_831C3120;


void fn_824F8CF8(double param_1,int param_2)

{
  *(unsigned int *)(param_2 + 0x214) = *(unsigned int *)(param_2 + 0x218);
  if (lbl_831C3120 == 1) {
    fn_824F6818(param_2);
  }
  else if (lbl_831C3120 == 2) {
    fn_824F6C80(param_2);
  }
  else if (lbl_831C3120 == 3) {
    fn_824F7138(param_2);
  }
  else if (lbl_831C3120 == 4) {
    fn_824F7718(param_1,param_2);
  }
  else if (lbl_831C3120 == 5) {
    fn_824F8890(param_2);
  }
  else if (lbl_831C3120 == 6) {
    fn_824F7E38();
  }
  *(float *)(param_2 + 0x34) = (float)((double)*(float *)(param_2 + 0x34) + param_1);
  return;
}

