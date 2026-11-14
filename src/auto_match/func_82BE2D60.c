typedef struct Manager_82BE2D60 {
    char pad0[0x10];
    int state;                          /* 0x010 */
    char pad14[0xe0 - 0x14];
    char clock[0x11c - 0xe0];           /* 0x0e0 */
    unsigned short flags;               /* 0x11c */
    char pad11e[0x188 - 0x11e];
    unsigned __int64 shutdownTimeout;   /* 0x188 */
} Manager_82BE2D60;

extern Manager_82BE2D60 *lbl_8322B130;
extern char lbl_8322B13C[];
extern unsigned __int64 lbl_8322B1C8;

extern void fn_82BEA1F8(void *lock, const char *name);
extern void fn_82BEA230(void *lock, const char *name);
extern unsigned __int64 fn_82BEB678(void *clock);
extern unsigned int fn_82BE3A18(int a, int b);
extern void fn_82A1E108(unsigned int ms);
extern void fn_82BE5240(Manager_82BE2D60 *self, int line, const char *format, ...);
extern int fn_82BE1A20(void);

int fn_82BE2D60(void)
{
    Manager_82BE2D60 *mgr;
    unsigned __int64 start;
    unsigned __int64 timeout;
    unsigned __int64 elapsed;

    fn_82BEA1F8(lbl_8322B13C, "ShutdownTick");
    mgr = lbl_8322B130;
    if (mgr == 0) {
        fn_82BEA230(lbl_8322B13C, "ShutdownTick");
        return 0;
    }
    start = fn_82BEB678(mgr->clock);
    timeout = mgr->shutdownTimeout;
    while (lbl_8322B1C8 != 0) {
        if (fn_82BE3A18(0, 0) != 0)
            break;
        if (mgr->state != 4)
            break;
        if ((mgr->flags & 0x800) != 0)
            break;
        fn_82A1E108(20);
        elapsed = fn_82BEB678(mgr->clock) - start;
        if ((timeout > 0 && elapsed > timeout) || elapsed > 10000) {
            fn_82BE5240(mgr, 0xd6, "Shutdown Time out at: %d ms", elapsed);
            break;
        }
    }
    fn_82BEA230(lbl_8322B13C, "ShutdownTick");
    return fn_82BE1A20();
}
