typedef struct Entry_82FF3870 {
    int a;
    int b;
    int c;
    float value;
} Entry_82FF3870;

extern char lbl_831BC7B4[];
extern char lbl_8326434C[];
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern void fn_82FF3468(void);
extern Entry_82FF3870 *fn_83031220(void *list);

void fn_82FF3870(int a, int b, int c, float value)
{
    Entry_82FF3870 *e = fn_83031220(lbl_831BC7B4);

    if (e == 0) {
        RtlEnterCriticalSection(lbl_8326434C);
        fn_82FF3468();
        RtlLeaveCriticalSection(lbl_8326434C);
        e = fn_83031220(lbl_831BC7B4);
    }
    e->value = value;
    e->a = a;
    e->b = b;
    e->c = c;
}
