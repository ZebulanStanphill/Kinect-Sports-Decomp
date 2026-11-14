typedef struct Slot_822473D0 {
    char data[0x54];
} Slot_822473D0;

struct SlotArray_822473D0 {
    Slot_822473D0 items[15];
    Slot_822473D0 &operator[](unsigned int i) { return items[i]; }
};

typedef struct Data_822473D0 {
    char pad0[0x240];
    char extra[0x54];               /* 0x240 */
    SlotArray_822473D0 first;       /* 0x294 */
    SlotArray_822473D0 second;      /* 0x780 */
} Data_822473D0;


struct Self_822473D0;
typedef struct SelfVtbl_822473D0 {
    void *pad0[2];
    Data_822473D0 *(*getData)(Self_822473D0 *self);
} SelfVtbl_822473D0;
struct Self_822473D0 {
    SelfVtbl_822473D0 *vtbl;
};

extern "C" bool fn_8289AB78(void *slot);

extern "C" void fn_822473D0(Self_822473D0 *self)
{
    bool ok = true;
    unsigned int i = 0;
    do {
        ok = ok ? fn_8289AB78(&self->vtbl->getData(self)->first[i]) : false;
        ok = ok ? fn_8289AB78(&self->vtbl->getData(self)->second[i]) : false;
        ok = ok ? fn_8289AB78(self->vtbl->getData(self)->extra) : false;
    } while (ok && ++i < 15);
}
