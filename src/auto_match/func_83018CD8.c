typedef struct Key_83018CD8 {
    unsigned int a;
    unsigned int b;
} Key_83018CD8;

typedef struct Self_83018CD8 {
    int f0;
    char table[0x618];          /* 0x004 */
    char floats[0x104];         /* 0x61c */
    char lock[0x1c];            /* 0x720 */
} Self_83018CD8;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern float *fn_83016E90(void *table, Key_83018CD8 key, unsigned int index);
extern void fn_83017DA0(Self_83018CD8 *self, unsigned int a, float *entry, float value, unsigned int b);
extern float *fn_83019690(void *table, Key_83018CD8 key);

/* sets the value stored for (a, b), adding an entry when there is none:
   returns 1, or 2 when the entry could not be added */
int fn_83018CD8(Self_83018CD8 *self, unsigned int a, float value, unsigned int b)
{
    Key_83018CD8 key;
    float *entry;

    RtlEnterCriticalSection(self->lock);
    key.b = b;
    key.a = a;
    entry = fn_83016E90(self->table, key, (key.a + key.b) % 193);
    if (entry == 0 || *entry != value) {
        fn_83017DA0(self, a, entry, value, b);
        if (entry != 0) {
            *entry = value;
            RtlLeaveCriticalSection(self->lock);
            return 1;
        } else {
            entry = fn_83019690(self->table, key);
            if (entry != 0) {
                *entry = value;
                RtlLeaveCriticalSection(self->lock);
                return 1;
            }
            RtlLeaveCriticalSection(self->lock);
            return 2;
        }
    } else {
        RtlLeaveCriticalSection(self->lock);
        return 1;
    }
}
