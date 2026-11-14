typedef struct Slot_82FEFC50 {
    int f00;
    int f04;
    int f08;
    void *handle;
} Slot_82FEFC50;

typedef struct Obj_82FEFC50 {
    char pad0[0xe0];
    Slot_82FEFC50 slots[4];
    char pad120[8];
    unsigned int current;
    void *currentHandle;
} Obj_82FEFC50;

extern void *lbl_832642FC;
extern void fn_830182F0(void *mgr, void *handle, int a, int b, unsigned char *out);

void fn_82FEFC50(Obj_82FEFC50 *self, unsigned int id, int index, int a, int b)
{
    if (self->current == id) {
        fn_830182F0(lbl_832642FC, self->currentHandle, a, b, 0);
    } else {
        fn_830182F0(lbl_832642FC, self->slots[index].handle, a, b, 0);
    }
}
