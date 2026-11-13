typedef struct Iface_83082610 Iface_83082610;
typedef struct Vtbl_83082610 {
    void *slot[4];
    int (*Method10)(Iface_83082610 *self, int p);
} Vtbl_83082610;
struct Iface_83082610 { Vtbl_83082610 *vt; };

extern Iface_83082610 *lbl_832654EC;

int fn_83082610(int *slot)
{
    int p = *slot;
    if (p != 0) {
        return lbl_832654EC->vt->Method10(lbl_832654EC, p);
    }
    return 0;
}
