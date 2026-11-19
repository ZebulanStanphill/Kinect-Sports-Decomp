typedef struct Device_82593FC8 {
    char pad0[0x820];
    float speed; // 0x820
    char pad824[0x14];
    float pauseTime; // 0x838
} Device_82593FC8;

typedef struct Node_82593FC8 {
    char pad0[4];
    Device_82593FC8 *device; // 0x4
} Node_82593FC8;

typedef struct Globals_82593FC8 {
    char pad0[0xec];
    Node_82593FC8 *node; // 0xec
} Globals_82593FC8;

typedef struct Entry_82593FC8 {
    char pad0[0x28];
    void *handle; // 0x28
    float time;   // 0x2c
    char pad30[0x14];
    unsigned int index; // 0x44
    char pad48[8];
} Entry_82593FC8;

typedef struct List_82593FC8 {
    char pad0[4];
    Entry_82593FC8 *begin; // 0x4
    Entry_82593FC8 *end;   // 0x8
} List_82593FC8;

typedef struct State_82593FC8 {
    List_82593FC8 *list; // 0x0
    char pad4[0xcc];
    int disabled; // 0xd0
    char padd4[0xc];
} State_82593FC8;

extern Globals_82593FC8 lbl_832960A0;
extern State_82593FC8 lbl_8326C2C0;
extern float lbl_8327F880[8];
extern int fn_82594470(Entry_82593FC8 *entry, float delta);
extern void fn_8251FA58(void *handle);
extern void fn_825A24C0(List_82593FC8 *list, Entry_82593FC8 *entry);
extern void fn_825946B8(Entry_82593FC8 *entry, unsigned char index);

static __forceinline Device_82593FC8 *GetDevice(void)
{
    return lbl_832960A0.node ? lbl_832960A0.node->device : 0;
}

void fn_82593FC8(void)
{
    float delta;
    Entry_82593FC8 *entry;
    Entry_82593FC8 *end;
    int i;
    Device_82593FC8 *device;

    if (lbl_8326C2C0.disabled == 0 && lbl_8326C2C0.list != 0) {
        delta = 0.0f;
        if (GetDevice() != 0) {
            device = GetDevice();
            if (device->pauseTime <= 0.0f) {
                delta = device->speed * lbl_8327F880[5];
            }
        }
        for (entry = lbl_8326C2C0.list->begin, end = lbl_8326C2C0.list->end; entry < end; entry++) {
            if (entry->handle != 0) {
                entry->time += delta;
                if (fn_82594470(entry, delta) != 0) {
                    fn_8251FA58(entry->handle);
                    fn_825A24C0(lbl_8326C2C0.list, entry);
                    entry--;
                    end--;
                } else if (entry->index >= 4) {
                    for (i = 0; i < 4; i++) {
                        fn_825946B8(entry, (unsigned char)i);
                    }
                } else {
                    fn_825946B8(entry, (unsigned char)entry->index);
                }
            }
        }
    }
}
