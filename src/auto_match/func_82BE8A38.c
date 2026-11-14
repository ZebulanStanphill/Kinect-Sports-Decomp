typedef struct Mgr_82BE8A38 {
    char pad[0x58];
    int state;
} Mgr_82BE8A38;

extern Mgr_82BE8A38 *lbl_8322B224;
extern int fn_82BED938(Mgr_82BE8A38 *mgr, void *item);

int fn_82BE8A38(char *obj)
{
    if (lbl_8322B224 == 0) {
        return 0;
    }
    if (lbl_8322B224->state != 2) {
        return 0;
    }
    return fn_82BED938(lbl_8322B224, obj != 0 ? obj + 0x2c : 0);
}
