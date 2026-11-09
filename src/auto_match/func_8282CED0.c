typedef struct {
    int a;
    int b;
    int c;
    int d;
    int e;
} Settings_8282CEB0;

extern Settings_8282CEB0 lbl_8320A784;

static __forceinline void setSettings_8282CED0(int a, int b, int c, int d, int e)
{
    lbl_8320A784.a = a;
    lbl_8320A784.b = b;
    lbl_8320A784.c = c;
    lbl_8320A784.d = d;
    lbl_8320A784.e = e;
}

void fn_8282CED0(void)
{
    setSettings_8282CED0(0, 0, 0, 0, 0);
}
