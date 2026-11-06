extern void fn_82F24850(void);
extern void fn_82F2C030(void);
extern unsigned short lbl_8325F468[];
extern unsigned short lbl_83256DB0[];
void fn_82F24A08(void)
{
  int i;
  fn_82F24850();
  fn_82F2C030();
  for (i = 0; i < 0x200; i++)
    lbl_8325F468[i] = lbl_83256DB0[i * 0x20];
}
