typedef struct Obj_82512610 {
    char pad0[0xd8];
    unsigned char kind; /* 0xd8 */
} Obj_82512610;

typedef struct Globals_82512610 {
    Obj_82512610 *active[4]; /* 0x00 */
    unsigned char kinds[4];  /* 0x10 */
    Obj_82512610 *last[4];   /* 0x14 */
    int countA;              /* 0x24 */
    int countB;              /* 0x28 */
    int pad2C[4];            /* 0x2c */
    int result;              /* 0x3c */
    int pad40;               /* 0x40 */
    unsigned char released;  /* 0x44 */
    unsigned char changed;   /* 0x45 */
} Globals_82512610;

typedef struct Globals2_82512610 {
    char pad[0x110];
    void *f110; /* 0x110 */
} Globals2_82512610;

extern Globals_82512610 lbl_83265988;
extern Globals2_82512610 lbl_8327F680;
extern void *lbl_832767C8;
extern void fn_825126F0(int slot, unsigned char quiet);
extern void fn_82521A10(void *manager, Obj_82512610 *object, int flag);
extern int fn_823AB478(Obj_82512610 *object);
extern void fn_825269D0(int event, int value);

void fn_82512610(Obj_82512610 *object, int slot, unsigned char notify, unsigned char quiet)
{
    int replaced = 0;

    if (lbl_83265988.active[slot] != object) {
        if (lbl_83265988.active[slot] != 0) {
            fn_825126F0(slot, quiet);
        }
        lbl_83265988.active[slot] = object;
        replaced = 1;
        lbl_83265988.kinds[slot] = object->kind;
        lbl_83265988.countA++;
        lbl_83265988.countB++;
    }
    lbl_83265988.changed = 1;
    if (quiet == 0) {
        if (notify != 0) {
            fn_82521A10(lbl_832767C8, object, 1);
        }
        if (replaced != 0) {
            lbl_83265988.result = fn_823AB478(object);
            if (lbl_8327F680.f110 != 0) {
                fn_825269D0(0x44, 0);
            }
        }
    }
}
