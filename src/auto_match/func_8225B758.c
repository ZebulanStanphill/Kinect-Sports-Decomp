extern unsigned int lbl_83265A38;
extern unsigned int lbl_83265A40;
extern unsigned int lbl_83265A48;
extern unsigned int lbl_832760AC;
extern unsigned int lbl_832767BC;


unsigned __int64 fn_8225B758(unsigned int param_1,unsigned int *param_2,int *param_3)

{
  *param_2 = param_1;
  *param_3 = (lbl_83265A48 + 7U >> 3) + (lbl_83265A40 + 7U >> 3) + (lbl_83265A38 + 7U >> 3) +
             (lbl_832760AC + 7U >> 3) + (lbl_832767BC + 7) * 4;
  return 1;
}

