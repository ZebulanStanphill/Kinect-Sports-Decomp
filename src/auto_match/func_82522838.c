extern unsigned int **ppuRam83297d04;
extern unsigned int **ppuRam83297d08;
extern int fn_825228E0();
extern int fn_8265C9E0();
extern int atexit();
extern unsigned int lbl_821C2D14;
extern unsigned int *lbl_832767CC;
extern unsigned int *lbl_832823E0;
extern unsigned int uRam83297cfc;
extern unsigned int uRam83297d00;
extern unsigned int uRam83297d0c;


void fn_82522838(void)

{
  if ((uRam83297d0c & 1) == 0) {
    uRam83297d0c = uRam83297d0c | 1;
    ppuRam83297d04 = &lbl_821C2D14;
    ppuRam83297d08 = &lbl_821C2D14;
    uRam83297cfc = 0;
    uRam83297d00 = 0;
    fn_825228E0(0xffffffff83297c04);
    atexit(0xffffffff8313f4f8);
  }
  lbl_832767CC = (unsigned int *)0x83297c04;
  lbl_832823E0 = (unsigned int *)fn_8265C9E0(4);
  if (lbl_832823E0 == (unsigned int *)0x0) {
    lbl_832823E0 = (unsigned int *)0x0;
  }
  else {
    *lbl_832823E0 = &lbl_821C2D14;
  }
  *lbl_832767CC = 1;
  return;
}
