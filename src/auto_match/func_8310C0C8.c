extern void *memset(void *dst, int c, unsigned int n);
extern int atexit(void (*f)(void));
extern void fn_8313BA08(void);
typedef struct Func_8310C0C8 { char buf[0x10]; void *impl; int pad14; } Func_8310C0C8;
typedef struct Tail_8310C0C8 { unsigned __int64 a[3]; } Tail_8310C0C8;
typedef struct Glob_8310C0C8 {
    char pad[0x14];
    char data[0x3c];
    Func_8310C0C8 f50;
    Func_8310C0C8 f68;
    Tail_8310C0C8 t80;
    char pad98[4];
} Glob_8310C0C8;
extern Glob_8310C0C8 lbl_831D1298;

void fn_8310C0C8(void)
{
    memset(lbl_831D1298.data, 0, 0x3c);
    lbl_831D1298.f50.impl = 0;
    lbl_831D1298.f68.impl = 0;
    { int i; for (i = 0; i < 3; i++) lbl_831D1298.t80.a[i] = 0; }
    atexit(fn_8313BA08);
}
