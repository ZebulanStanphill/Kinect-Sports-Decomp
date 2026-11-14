typedef struct String_8311CC98 {
    int data[7];
} String_8311CC98;

typedef struct Entry_8311CC98 {
    int kind;
    int a;
    int b;
    char buffer[1000];
    __int64 time;
    String_8311CC98 name;
    unsigned char flag;
} Entry_8311CC98;

extern void fn_82230110(String_8311CC98 *s, const char *text);
extern void XMemSet(void *dst, int value, unsigned int size);
extern int atexit(void (*)(void));
extern void fn_8313DFD0(void);
extern char lbl_8328E788[];
extern char lbl_82196582[];

void fn_8311CC98(void)
{
    Entry_8311CC98 *e;
    int i;

    e = (Entry_8311CC98 *)(lbl_8328E788 + 0x838);
    for (i = 3; i >= 0; i--) {
        e->a = 0;
        e->b = 0;
        e->kind = 4;
        e->time = 0;
        fn_82230110(&e->name, lbl_82196582);
        e->flag = 0;
        XMemSet(e->buffer, 0, 1000);
        e++;
    }
    atexit(fn_8313DFD0);
}
