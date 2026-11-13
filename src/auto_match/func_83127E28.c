typedef struct Var_83127E28 { unsigned char type; char pad[7]; double value; } Var_83127E28;
extern Var_83127E28 lbl_831F12E8[2];
extern double fn_826BC950(void);
extern void fn_8313FE20(void);
extern int atexit(void (*f)(void));

void fn_83127E28(void)
{
    lbl_831F12E8[0].value = fn_826BC950();
    lbl_831F12E8[0].type = 3;
    lbl_831F12E8[1].value = fn_826BC950();
    lbl_831F12E8[1].type = 3;
    atexit(fn_8313FE20);
}
