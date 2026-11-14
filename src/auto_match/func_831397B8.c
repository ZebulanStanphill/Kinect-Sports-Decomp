typedef struct Entry_831397B8 {
    void *ptr;
    int a;
    int b;
} Entry_831397B8;

extern Entry_831397B8 lbl_83264438[24];
extern void fn_83141D88(void);
extern int atexit(void (*func)(void));

void fn_831397B8(void)
{
    int i;
    for (i = 0; i < 24; i++) {
        lbl_83264438[i].ptr = 0;
    }
    atexit(fn_83141D88);
}
