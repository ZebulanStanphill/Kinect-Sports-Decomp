typedef struct Mgr_82BE8C38 {
    char pad0[0x58];
    int state;                              /* 0x58 */
    int dirty;                              /* 0x5c */
    unsigned short changeCount;             /* 0x60 */
} Mgr_82BE8C38;

typedef void (*Callback_82BE8C38)(void);

extern Mgr_82BE8C38 *lbl_8322B224;
int fn_82BED230(Mgr_82BE8C38 *mgr, unsigned int id, Callback_82BE8C38 callback, int flags);

int fn_82BE8C38(unsigned int id, Callback_82BE8C38 callback)
{
    Mgr_82BE8C38 *mgr;
    if (lbl_8322B224 == 0) {
        return 0;
    }
    mgr = lbl_8322B224;
    if (mgr->state == 0) {
        return 0;
    }
    mgr->dirty = 1;
    mgr->changeCount++;
    return fn_82BED230(lbl_8322B224, id, callback, 0);
}
