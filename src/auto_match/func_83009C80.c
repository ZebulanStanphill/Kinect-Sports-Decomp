typedef struct Slot_83009C80 { int id; int a; int b; } Slot_83009C80;
typedef struct SlotSet_83009C80 { int hdr[3]; Slot_83009C80 slots[4]; } SlotSet_83009C80;
typedef struct Obj_83009C80 {
    char pad0[0x28];
    SlotSet_83009C80 *set;
} Obj_83009C80;

extern Obj_83009C80 *lbl_832645A8;
extern void *fn_82FFF478(Obj_83009C80 *o);

static __forceinline unsigned char AnyActive(Obj_83009C80 *o)
{
    unsigned int i;

    if (o->set != 0) {
        for (i = 0; i < 4; i++) {
            if (o->set->slots[i].id != -1) {
                return 1;
            }
        }
    }
    return 0;
}

void *fn_83009C80(Obj_83009C80 *o)
{
    if (AnyActive(o) && o != lbl_832645A8) {
        return o;
    }
    return fn_82FFF478(o);
}
