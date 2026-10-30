extern void fn_82465548();
extern unsigned char fn_82534820(int);
extern int fn_82535298(int *, int, void *, void *);
extern int fn_828647D8();
extern void fn_82864898(void *);
extern void fn_82864988(void *, const char *);
extern char lbl_83296BC0[];
extern char lbl_83296BD0[];
extern float lbl_821CC160;
void fn_824651F0(int param_1, int *param_2)
{
  char auStack_40[40];
  int auStack_50[4];

  fn_82465548();
  if (*(unsigned int *)(param_1 + 0x24) == 0) {
    if (fn_82534820(*param_2) != 0) {
      int v;
      fn_82864988(auStack_40, "THE_LOST_AND_THE_DAMMED");
      v = fn_828647D8();
      auStack_50[0] = *param_2;
      *(int *)(param_1 + 0x24) = fn_82535298(auStack_50, v, lbl_83296BC0, lbl_83296BD0);
      fn_82864898(auStack_40);
    }
  }
  *(float *)(param_1 + 0x3c) = lbl_821CC160;
}
