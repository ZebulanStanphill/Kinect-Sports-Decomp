typedef struct Mgr_8285C838 {
    char pad0[0x40];
    char a40[0x88];
    char c8[0x120];
    char e8[0x54];
    int table;
} Mgr_8285C838;

typedef struct Obj_8285C838 {
    char pad0[0x44];
    void *impl;
} Obj_8285C838;

extern Mgr_8285C838 lbl_83211340;

extern void fn_82862308(void *impl, int table, void *p);
extern void fn_828611B8(void *src, void *a, int w, int h, void *out);
extern void fn_8285FD38(Obj_8285C838 *obj, int table, void *p);
extern void fn_828600E0(Obj_8285C838 *obj, int table);

void fn_8285C838(Obj_8285C838 *obj, void *src)
{
    if (obj != 0) {
        if (src != 0) {
            if (obj->impl != 0)
                fn_82862308(obj->impl, lbl_83211340.table, lbl_83211340.e8);
            fn_828611B8(src, lbl_83211340.a40, 0xf0, 0xf0, lbl_83211340.c8);
            fn_8285FD38(obj, lbl_83211340.table, lbl_83211340.c8);
        } else {
            fn_828600E0(obj, lbl_83211340.table);
        }
    }
}
