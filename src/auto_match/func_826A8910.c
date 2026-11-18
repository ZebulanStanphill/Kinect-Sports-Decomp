typedef struct Handler_826A8910 Handler_826A8910;
typedef struct Context_826A8910 Context_826A8910;

typedef struct HandlerVtbl_826A8910 {
    void *slot00;
    void *slot04;
    int (*GetType)(Handler_826A8910 *self); /* 0x08 */
    void *slot0c[6];
    unsigned char (*Accepts)(Handler_826A8910 *self, Context_826A8910 **context, int event,
                             int flags); /* 0x24 */
} HandlerVtbl_826A8910;

struct Handler_826A8910 {
    HandlerVtbl_826A8910 *vt; /* 0x00 */
};

typedef struct Entry_826A8910 {
    unsigned char *object;    /* 0x00 */
    unsigned isSecondary : 1; /* 0x04 */
} Entry_826A8910;

typedef struct EntryArray_826A8910 {
    Entry_826A8910 *data; /* 0x00 */
    int size;             /* 0x04 */
} EntryArray_826A8910;

typedef struct Target_826A8910 {
    unsigned char pad00[0x68];
    Handler_826A8910 handler; /* 0x68 */
} Target_826A8910;

typedef struct Fallback_826A8910 {
    unsigned char pad00[0x10];
    Handler_826A8910 handler; /* 0x10 */
} Fallback_826A8910;

struct Context_826A8910 {
    unsigned char pad000[0x2a0];
    Fallback_826A8910 *fallback; /* 0x2a0 */
};

typedef struct Owner_826A8910 {
    unsigned char pad00[0x74];
    Target_826A8910 *target;   /* 0x74 */
    Context_826A8910 *context; /* 0x78 */
} Owner_826A8910;

extern void fn_82696480(void *out, void *object);
extern void fn_82696BC8(void *out, void *object);

int fn_826A8910(Owner_826A8910 *owner, int event, void *out, EntryArray_826A8910 *entries)
{
    int i;
    unsigned char *object;
    Handler_826A8910 *handler;
    Fallback_826A8910 *fallback;
    int type;
    unsigned char isTarget;

    if (out != 0) {
        if (entries != 0) {
            for (i = entries->size - 1; i >= 0; i--) {
                if ((unsigned char)entries->data[i].isSecondary) {
                    object = entries->data[i].object;
                    handler = object != 0 ? (Handler_826A8910 *)(object + 0x10) : 0;
                } else {
                    object = entries->data[i].object;
                    handler = object != 0 ? (Handler_826A8910 *)(object + 0x68) : 0;
                }
                if (handler != 0 && handler->vt->Accepts(handler, &owner->context, event, 0)) {
                    type = handler->vt->GetType(handler);
                    isTarget = type >= 2 && type <= 5;
                    if (isTarget) {
                        fn_82696480(out, (unsigned char *)handler - 0x68);
                    } else {
                        fn_82696BC8(out, (unsigned char *)handler - 0x10);
                    }
                    return 1;
                }
            }
        }
        if (owner->target != 0) {
            if (owner->target->handler.vt->Accepts(&owner->target->handler, &owner->context, event, 0)) {
                fn_82696480(out, owner->target);
                return 1;
            }
            fallback = owner->context->fallback;
            if (fallback != 0 &&
                fallback->handler.vt->Accepts(&fallback->handler, &owner->context, event, 0)) {
                fn_82696BC8(out, fallback);
                return 1;
            }
        }
    }
    return 0;
}
