typedef struct Vec3_83002E80 {
    float x;
    float y;
    float z;
} Vec3_83002E80;

typedef struct Object_83002E80 {
    char pad0[0x40];
    unsigned int flags; /* 0x40 */
    char pad44[0x14];
    Vec3_83002E80 position; /* 0x58 */
    void *binding;          /* 0x64 */
} Object_83002E80;

extern void *lbl_832642FC;
extern float fn_830177C8(void *system, void *object, int property, unsigned int key);
extern int fn_83002AE0(Object_83002E80 *object, float *out);

unsigned char fn_83002E80(Object_83002E80 *self, unsigned int key, Vec3_83002E80 *out)
{
    unsigned char changed = 0;
    float scale;

    *out = self->position;
    if (self->flags != 0) {
        scale = 0.0f;
        if ((unsigned char)((self->flags >> 20) & 1) != 0) {
            changed = 1;
            out->x = fn_830177C8(lbl_832642FC, self, 0x14, key);
            if (self->binding != 0 && (unsigned char)fn_83002AE0(self, &scale) != 0) {
                out->x = out->x * scale * 0.01f;
            }
        }
        if ((unsigned char)((self->flags >> 21) & 1) != 0) {
            changed = 1;
            out->y = fn_830177C8(lbl_832642FC, self, 0x15, key);
            if (self->binding != 0 && (scale != 0.0f || (unsigned char)fn_83002AE0(self, &scale) != 0)) {
                out->x = out->x * scale * 0.01f;
            }
        }
    }
    return changed;
}
