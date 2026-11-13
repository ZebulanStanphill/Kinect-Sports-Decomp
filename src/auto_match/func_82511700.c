extern int fn_82511928();
extern int fn_82513BC8();
extern int fn_8288A320();
extern int fn_8288A340();
extern int fn_8288B060();
extern int fn_828A5328();
extern int fn_828AD798();
extern int fn_828C0080();
extern unsigned int lbl_821912A4;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_832659CC;
extern unsigned int lbl_8327F894;
extern unsigned int lbl_83297810;


void fn_82511700(int param_1)

{
  double dVar1;
  
  *(unsigned char *)(param_1 + 10) = 1;
  dVar1 = (double)lbl_8327F894;
  if (*(char *)(param_1 + 8) != '\0') {
    fn_828A5328();
    if (lbl_83297810 == 0) {
      fn_82511928();
    }
    fn_82513BC8(dVar1);
    lbl_832659CC = 0;
  }
  fn_828C0080((double)lbl_821CA460);
  if (*(int *)(param_1 + 4) != 0) {
    fn_8288A340((double)lbl_821912A4);
    fn_828AD798(*(unsigned int *)(param_1 + 4),0);
    fn_8288A320(*(unsigned int *)(param_1 + 4),0);
    fn_8288B060(*(unsigned int *)(param_1 + 4),0);
  }
  *(unsigned char *)(param_1 + 10) = 0;
  return;
}

