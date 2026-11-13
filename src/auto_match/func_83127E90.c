typedef struct Var_83127E90 { unsigned char type; char pad[7]; double value; } Var_83127E90;
extern Var_83127E90 lbl_831F1308[4];
extern double fn_826BC950(void);
extern void fn_8313FEC0(void);
extern int atexit(void (*f)(void));

void fn_83127E90(void)
{
    lbl_831F1308[0].value = fn_826BC950();
    lbl_831F1308[0].type = 3;
    lbl_831F1308[1].value = fn_826BC950();
    lbl_831F1308[1].type = 3;
    lbl_831F1308[2].value = fn_826BC950();
    lbl_831F1308[2].type = 3;
    lbl_831F1308[3].value = fn_826BC950();
    lbl_831F1308[3].type = 3;
    atexit(fn_8313FEC0);
}
