typedef struct State_8239D9F8 {
    char pad0[0x178];
    int mode; /* 0x178 */
    char pad17C[0x2dc - 0x17c];
    void *target; /* 0x2dc */
} State_8239D9F8;

extern void fn_8239FF60(void *target, unsigned int event);

void fn_8239D9F8(State_8239D9F8 *self, unsigned int event)
{
    int active = (__int64)self->mode != 0;
    int kind = (int)event;

    if (kind > 0) {
        if (kind > 4 && kind <= 5)
            goto dispatch;
        if (kind <= 4 || (kind > 5 && kind <= 8)) {
            if (active) {
                return;
            }
        } else if (kind > 10 && kind <= 18) {
            if (!active) {
                return;
            }
        }
    }
dispatch:
    if (event <= 28) {
        fn_8239FF60(self->target, event);
    }
}
