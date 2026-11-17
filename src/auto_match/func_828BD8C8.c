typedef struct Interface_828BD8C8 Interface_828BD8C8;

typedef struct Vtable_828BD8C8 {
    void *slot0;                                 /* +0x0 */
    int (*getIndex)(Interface_828BD8C8 *self);   /* +0x4 */
    void *slot8;                                 /* +0x8 */
    void *(*getState)(Interface_828BD8C8 *self); /* +0xc */
} Vtable_828BD8C8;

struct Interface_828BD8C8 {
    Vtable_828BD8C8 *vtable; /* +0x0 */
};

extern unsigned char fn_828ACC40(void *self);
extern unsigned char fn_828ACD00(void *self);
extern unsigned char fn_828ACCB0(void *self);
extern Interface_828BD8C8 *fn_8289F2E0(void *self, int key);
extern int fn_82A4AAA8(void *state);
extern unsigned char fn_828BE850(int index, unsigned char enabled);
extern unsigned char fn_828BE888(int index, unsigned char enabled);
extern unsigned char fn_828BE8C0(int index, unsigned char enabled);
extern unsigned char fn_828BE930(int index, unsigned char enabled);

int fn_828BD8C8(void *self, Interface_828BD8C8 *source, int key)
{
    int index = source->vtable->getIndex(source);
    unsigned char valid = index < 27;
    Interface_828BD8C8 *entry;
    void *state;

    if (fn_828ACC40(self)) {
        if (!valid || !fn_828BE850(index, 1)) {
            return 2;
        }
    } else if (fn_828ACD00(self)) {
        if (!valid || !fn_828BE8C0(index, 1)) {
            return 2;
        }
    } else {
        if (key != 0) {
            entry = fn_8289F2E0(self, key);
            state = entry->vtable->getState(entry);
            if (state != 0 && fn_82A4AAA8(state) == 2) {
                if (!valid || !fn_828BE930(index, 1)) {
                    return 2;
                }
                return 1;
            }
        }
        if (fn_828ACCB0(self)) {
            if (!valid || !fn_828BE888(index, 1)) {
                return 2;
            }
        }
    }
    return 1;
}
