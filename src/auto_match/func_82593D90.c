typedef struct Device_82593D90 {
    char pad0[0xd48];
    unsigned char *busy;
} Device_82593D90;

typedef struct Node_82593D90 {
    char pad0[4];
    Device_82593D90 *device;
} Node_82593D90;

typedef struct Globals_82593D90 {
    char pad0[0xec];
    Node_82593D90 *node;
} Globals_82593D90;

typedef struct State_82593D90 {
    unsigned int mode;
    int f4;
    int partial;
    int fc;
    int f10;
} State_82593D90;

extern Globals_82593D90 lbl_832960A0;
extern State_82593D90 lbl_8326C2AC;
extern void fn_82598D50(Device_82593D90 *device, void **a, void **b);

static __forceinline Device_82593D90 *GetDevice(void)
{
    return lbl_832960A0.node ? lbl_832960A0.node->device : 0;
}

int fn_82593D90(void)
{
    void *a;
    void *b;

    if (lbl_8326C2AC.mode == 1 && lbl_8326C2AC.f10 == 0 && GetDevice() != 0 && *GetDevice()->busy == 0) {
        fn_82598D50(GetDevice(), &a, &b);
        if (a != 0 && b != 0) {
            lbl_8326C2AC.partial = 0;
            return 1;
        }
        if (a != 0 || b != 0) {
            lbl_8326C2AC.partial = 1;
            return 1;
        }
    }
    return 0;
}
