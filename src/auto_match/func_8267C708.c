typedef void (*code)(void *);
extern void fn_8267C268(void);
extern void fn_8267C418(void);
extern void fn_8267DEF0(void);
extern unsigned int lbl_831E7E64;
extern int *lbl_831E7E68;

void fn_8267C708(void)
{
  if (lbl_831E7E68 != 0) {
    fn_8267DEF0();
    fn_8267C418();
    lbl_831E7E64 = 0;
    fn_8267C268();
    (*(code *)(*lbl_831E7E68 + 0x34))(lbl_831E7E68);
    lbl_831E7E68 = 0;
  }
}
