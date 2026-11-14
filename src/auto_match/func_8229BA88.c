typedef struct Mgr_8229BA88 { char pad[0x110]; void *list; } Mgr_8229BA88;
typedef struct Slot_8229BA88 { unsigned handle; unsigned pad; } Slot_8229BA88;
typedef struct Obj_8229BA88 {
    char pad0[0x40];
    Slot_8229BA88 slots[2];
    int id50;
    int id54;
} Obj_8229BA88;

extern Mgr_8229BA88 *fn_8249ABC0(void);
extern void fn_8249D980(void *, int);
extern void fn_8249DA08(void *, int);
extern int fn_82F4EC30(unsigned);
extern void fn_82F52C20(int, unsigned, int);

void fn_8229BA88(Obj_8229BA88 *self)
{
    unsigned i;
    void *list;

    for (i = 0; i < 2; i++) {
        if (self->slots[i].handle != 0) {
            int port = fn_82F4EC30(i);
            fn_82F52C20(port, self->slots[i].handle, 1);
            self->slots[i].handle = 0;
        }
    }
    list = fn_8249ABC0()->list;
    if (self->id50 != -1) {
        fn_8249D980(list, self->id50);
        self->id50 = -1;
    }
    if (self->id54 != -1) {
        fn_8249DA08(list, self->id54);
        self->id54 = -1;
    }
}
