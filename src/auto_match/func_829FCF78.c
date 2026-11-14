extern unsigned int fStack00000010;
extern unsigned int fStack00000014;
extern unsigned int fStack00000018;
extern int tan();
extern unsigned int lbl_82015B38;
extern unsigned int lbl_8207F260;
extern unsigned int lbl_820885C8;
extern unsigned int lbl_83218DD0;
extern unsigned int lbl_83218DD4;


void fn_829FCF78(int *param_1,int *param_2)

{
  float fVar1;
  double dVar2;
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  float fStack00000010;
  float fStack00000014;
  float fStack00000018;
  
  fStack00000010 = in_register_00010010;
  fStack00000014 = in_register_00010014;
  fStack00000018 = in_register_00010018;
  if ((lbl_83218DD4 & 1) == 0) {
    lbl_83218DD4 = lbl_83218DD4 | 1;
    dVar2 = (double)tan(lbl_8207F260);
    lbl_83218DD0 = lbl_820885C8 / (float)dVar2;
  }
  fVar1 = lbl_82015B38;
  *param_1 = (int)((lbl_83218DD0 * fStack00000010) / fStack00000018 + lbl_820885C8);
  *param_2 = (int)(fVar1 - (lbl_83218DD0 * fStack00000014) / fStack00000018);
  return;
}

