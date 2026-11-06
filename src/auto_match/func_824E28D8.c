extern void fn_824E29A8(void);
extern void fn_824E2BD0(void);
extern void fn_824E3940(void);
extern void fn_824E2870(void);
extern int lbl_831C08DC[3];
extern char lbl_83265A58[];

void fn_824E28D8(void)
{
    fn_824E29A8();
    fn_824E2BD0();
    fn_824E3940();
    lbl_831C08DC[0] = 1000;
    lbl_831C08DC[1] = 1000;
    lbl_831C08DC[2] = 1000;
    *(void (**)(void))(lbl_83265A58 + 0x67c) = fn_824E2870;
}
