typedef struct {
    char pad[0xe];
    unsigned short flag;
} State_82FEEC60;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);

extern int fn_82FEE7F8(void);
extern int fn_82FF4DD8(int a, void *b, void *c);
extern unsigned char fn_83023568(char *p);
extern unsigned char fn_830235F0(char *p);
extern int fn_83023618(char *p);
extern int fn_830236D8(char *p, void *s);
extern int fn_83023780(char *p, int n);
extern int fn_83023D40(int p);

extern int lbl_83264304;
extern char *lbl_832643B0;
extern int lbl_832643D4;
extern char lbl_832643E8[];
extern char lbl_832643EC[];
extern State_82FEEC60 lbl_83264428;

void fn_82FEEC60(void)
{
    lbl_83264428.flag = 0;
    fn_82FEE7F8();
    if (lbl_83264428.flag != 0) {
        RtlEnterCriticalSection(lbl_832643B0 + 8);
        fn_830236D8(lbl_832643B0, &lbl_83264428);
        RtlLeaveCriticalSection(lbl_832643B0 + 8);
        fn_83023D40(lbl_832643D4);
    } else {
        RtlEnterCriticalSection(lbl_832643B0 + 8);
        fn_83023780(lbl_832643B0, 0x400);
        RtlLeaveCriticalSection(lbl_832643B0 + 8);
    }
    RtlEnterCriticalSection(lbl_832643B0 + 8);
    if (fn_83023568(lbl_832643B0) != 0 && fn_830235F0(lbl_832643B0) != 0) {
        fn_83023618(lbl_832643B0);
    }
    RtlLeaveCriticalSection(lbl_832643B0 + 8);
    fn_82FF4DD8(lbl_83264304, lbl_832643EC, lbl_832643E8);
}
