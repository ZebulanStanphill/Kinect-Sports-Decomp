typedef struct {
    unsigned char pad[0x28];
    unsigned char f0 : 1;
    unsigned char active : 1;
    unsigned char rest : 6;
} item_82574268;

typedef struct {
    unsigned char pad[0x14];
    item_82574268 *item;
    unsigned char pad2[0x8];
} slot_82574268;

typedef struct {
    unsigned char pad[0x1c];
    int count;
} hdr_82574268;

typedef struct {
    unsigned char pad[0x48];
    hdr_82574268 **hdr;
    int pad2;
    slot_82574268 *slots;
} mgr_82574268;

typedef struct {
    unsigned char pad[0x10];
    mgr_82574268 *mgr;
} obj_82574268;

extern int fn_82569B10(void);
extern void fn_82549610(int *out, int v);
extern void fn_8256B398(item_82574268 *item);
extern void fn_8256B658(item_82574268 *item);
extern void fn_82A1BB18(void);
extern void fn_8259C738(int v);

void fn_82574268(obj_82574268 *param_1, int param_2)
{
    mgr_82574268 *mgr = param_1->mgr;
    hdr_82574268 **hdr = mgr->hdr;
    int i;
    int lock;

    for (i = 0; i < (*hdr)->count; i++) {
        item_82574268 *item = mgr->slots[i].item;
        if (item != 0) {
            fn_82549610(&lock, fn_82569B10());
            if (!item->active && param_2 != 0) {
                item->active = param_2;
                fn_8256B398(item);
            } else if (item->active && param_2 == 0) {
                item->active = 0;
                fn_8256B658(item);
            }
            item->active = param_2;
            fn_82A1BB18();
            fn_8259C738(lock);
        }
    }
}
