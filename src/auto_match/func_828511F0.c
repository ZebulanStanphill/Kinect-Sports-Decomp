typedef struct Key_828511F0 { float value; char pad[0xc]; } Key_828511F0;
typedef struct Keys_828511F0 { unsigned int count; Key_828511F0 *items; } Keys_828511F0;
typedef struct Obj_828511F0 { char pad[0x178]; unsigned int count; Keys_828511F0 *keys; } Obj_828511F0;

unsigned int fn_828511F0(Obj_828511F0 *self, float *out, unsigned int max)
{
    unsigned int i;
    Keys_828511F0 *keys;
    if (self->count > 0) {
        keys = self->keys;
        for (i = 0; i < keys->count && i < max; i++) {
            out[i] = keys->items[i].value;
        }
        return i;
    }
    return 0;
}
