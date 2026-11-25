typedef struct Target_82619D38 {
    char pad0[0x190];
    int dirty; /* 0x190 */
} Target_82619D38;

typedef struct Object_82619D38 {
    int pad0;
    Target_82619D38 *target; /* 0x4 */
    char pad8[0xFA8];
    unsigned char enabled; /* 0xFB0 */
} Object_82619D38;

extern int fn_82591730(Object_82619D38 *self, unsigned int prop, unsigned int value);

int fn_82619D38(Object_82619D38 *self, int prop, unsigned int value)
{
    switch (prop) {
    case 0xE:
        self->enabled = 1;
        return 0;
    case 8:
        self->target->dirty = 1;
        self->enabled = 0;
        return 0;
    }
    return fn_82591730(self, prop, value);
}
