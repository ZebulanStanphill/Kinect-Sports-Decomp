typedef struct Mgr_82460270 { char pad0[0x678]; int dirty; } Mgr_82460270;
typedef struct Sys_82460270 { char pad0[0x38]; Mgr_82460270 *mgr; } Sys_82460270;
typedef struct Cfg_82460270 { char pad0[0x308]; int value; } Cfg_82460270;
extern Sys_82460270 *lbl_832765BC;
extern Cfg_82460270 *lbl_832766D4;
void fn_82460270(int value)
{
    if (lbl_832765BC != 0) {
        Mgr_82460270 *m = lbl_832765BC->mgr;
        Cfg_82460270 *cfg = lbl_832766D4;
        m->dirty = 1;
        cfg->value = value;
    }
}
