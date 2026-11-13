typedef struct Slot_8249F840 {
    void *sound;
    float time;
} Slot_8249F840;

typedef struct Obj_8249F840 {
    int pad[2];
    Slot_8249F840 slots[2];
} Obj_8249F840;

extern void *fn_82F4EC30(unsigned int index);
extern void fn_82F52C20(void *device, void *sound, int flag);

void fn_8249F840(Obj_8249F840 *self)
{
    unsigned int i;
    for (i = 0; i < 2; i++) {
        if (self->slots[i].sound != 0) {
            void *dev = fn_82F4EC30(i);
            fn_82F52C20(dev, self->slots[i].sound, 1);
            self->slots[i].sound = 0;
        }
        self->slots[i].time = 0.0f;
    }
}
