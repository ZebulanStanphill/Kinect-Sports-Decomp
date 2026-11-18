typedef struct Handler_826B1B88 Handler_826B1B88;

typedef struct HandlerVtbl_826B1B88 {
    void *slot00;
    void *slot04;
    void *slot08;
    void (*Handle)(Handler_826B1B88 *self, void *owner, int event, int arg, unsigned char *handled);
    unsigned char (*Accepts)(Handler_826B1B88 *self, void *owner, int event, void *value);
} HandlerVtbl_826B1B88;

struct Handler_826B1B88 {
    HandlerVtbl_826B1B88 *vt; /* 0x00 */
};

typedef struct Entry_826B1B88 {
    unsigned char *object;    /* 0x00 */
    unsigned isSecondary : 1; /* 0x04 */
} Entry_826B1B88;

typedef struct EntryArray_826B1B88 {
    Entry_826B1B88 *data; /* 0x00 */
    int size;             /* 0x04 */
} EntryArray_826B1B88;

typedef struct Target_826B1B88 {
    unsigned char pad00[0x68];
    Handler_826B1B88 handler; /* 0x68 */
} Target_826B1B88;

typedef struct Owner_826B1B88 {
    unsigned char pad00[0x74];
    Target_826B1B88 *target; /* 0x74 */
} Owner_826B1B88;

typedef struct Value_826B1B88 {
    unsigned char type; /* 0x00 */
    unsigned char pad01[0xf];
} Value_826B1B88;

extern void fn_82696330(Value_826B1B88 *value);
extern void *fn_826B0F90(Owner_826B1B88 *owner, int event);
extern void fn_82695FA0(void *found, int arg);

void fn_826B1B88(Owner_826B1B88 *owner, int event, int arg, EntryArray_826B1B88 *entries)
{
    int i;
    unsigned char *object;
    Handler_826B1B88 *handler;
    Value_826B1B88 value;
    unsigned char handled;
    unsigned char handledDefault;
    void *found;

    if (entries != 0) {
        for (i = entries->size - 1; i >= 0; i--) {
            object = entries->data[i].object;
            if ((unsigned char)entries->data[i].isSecondary) {
                handler = object != 0 ? (Handler_826B1B88 *)(object + 0x10) : 0;
            } else {
                handler = object != 0 ? (Handler_826B1B88 *)(object + 0x68) : 0;
            }
            value.type = 0;
            if (handler != 0 && handler->vt->Accepts(handler, owner, event, &value)) {
                handled = 0;
                handler->vt->Handle(handler, owner, event, arg, &handled);
                fn_82696330(&value);
                return;
            }
            fn_82696330(&value);
        }
    }
    found = fn_826B0F90(owner, event);
    if (found != 0) {
        fn_82695FA0(found, arg);
    } else {
        handledDefault = 0;
        handler = &owner->target->handler;
        handler->vt->Handle(handler, owner, event, arg, &handledDefault);
    }
}
