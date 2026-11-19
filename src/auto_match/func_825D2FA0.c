/* Notifies the handlers of a variable-length entry list that a position moved by more than a
   small epsilon; otherwise the previous position is updated and nothing is notified. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);

typedef struct Entry_825D2FA0 {
    unsigned char type; /* 0x00 */
    unsigned char size; /* 0x01 */
    short flagIndex;    /* 0x02 */
    unsigned int mask;  /* 0x04 */
} Entry_825D2FA0;

typedef struct EntryList_825D2FA0 {
    int count;            /* 0x00 */
    int unk04;            /* 0x04 */
    Entry_825D2FA0 first; /* 0x08 */
} EntryList_825D2FA0;

typedef int (*Handler_825D2FA0)(Entry_825D2FA0 *entry, void *a, void *b, void *c, __vector4 *position,
                                __vector4 *previous, void *context);

typedef struct HandlerInfo_825D2FA0 {
    int unk00;              /* 0x00 */
    Handler_825D2FA0 moved; /* 0x04 */
    int unk08[3];           /* 0x08 */
} HandlerInfo_825D2FA0;

extern const float lbl_821954B0[];
extern HandlerInfo_825D2FA0 lbl_8218E3D8[];

int fn_825D2FA0(EntryList_825D2FA0 *list, void *a, void *b, void *c, __vector4 *position, __vector4 *previous,
                unsigned int mask, const unsigned int *flags, void *context)
{
    __vector4 delta = __vsubfp(*position, *previous);
    __vector4 distanceSquared = __vmsum3fp(delta, delta);
    Entry_825D2FA0 *entry;
    int result;
    int i;
    Handler_825D2FA0 handler;

    if (!(distanceSquared.vector4_f32[0] > lbl_821954B0[0x74])) {
        *previous = *position;
        return 0;
    }
    entry = &list->first;
    result = 0;
    i = 0;
    while (i < list->count) {
        if (entry == 0) {
            break;
        }
        if ((flags[entry->flagIndex] & entry->mask & mask) != 0) {
            handler = lbl_8218E3D8[entry->type].moved;
            if (handler != 0 && handler(entry, a, b, c, position, previous, context) != 0) {
                result = 1;
            }
        }
        i++;
        if (entry->size != 0) {
            entry = (Entry_825D2FA0 *)((unsigned char *)entry + entry->size);
        } else {
            entry = 0;
        }
    }
    return result;
}
