typedef struct S {
    char pad[0x90];
    unsigned int count;
} S;

extern char lbl_8326434C[];
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern unsigned int fn_82FEBF78(void);
extern void fn_82FEED68(void);
extern void fn_82FF3468(void);
extern void fn_82FF5BF8(unsigned int a, unsigned int b);
extern void fn_8300D840(unsigned int a);
extern void fn_8300FB78(S *p);
extern void fn_830121C0(S *p);
extern void fn_8301B5E0(unsigned int a, unsigned int b);
extern unsigned int lbl_832642F4;
extern unsigned int lbl_832642F8;
extern void (*lbl_83264330)(void);
extern unsigned int lbl_832645D0;

void fn_830131C8(S *p)
{
    unsigned int n;
    unsigned int c;

    RtlEnterCriticalSection(lbl_8326434C);
    fn_830121C0(p);
    n = fn_82FEBF78();
    while (n != 0) {
        fn_8300FB78(p);
        if (lbl_83264330)
            lbl_83264330();
        c = p->count + 1;
        fn_82FF5BF8(lbl_832642F4, c);
        fn_8301B5E0(lbl_832642F8, c);
        RtlLeaveCriticalSection(lbl_8326434C);
        fn_82FEED68();
        RtlEnterCriticalSection(lbl_8326434C);
        fn_82FF3468();
        p->count++;
        n--;
    }
    if (lbl_832645D0)
        fn_8300D840(lbl_832645D0);
    RtlLeaveCriticalSection(lbl_8326434C);
}
