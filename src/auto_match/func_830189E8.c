typedef struct Key_830189E8 {
    unsigned int a;
    unsigned int b;
} Key_830189E8;

typedef struct Self_830189E8 {
    int f0;
    char table[0x618];          /* 0x004 */
    char floats[0x104];         /* 0x61c */
    char lock[0x1c];            /* 0x720 */
} Self_830189E8;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern int *fn_83016E90(void *table, Key_830189E8 key, unsigned int index);
extern float *fn_82FFE0F0(void *map, unsigned int id);
extern void fn_83017DA0(Self_830189E8 *self, unsigned int a, int *entry, float value, unsigned int b);
extern void fn_830196F8(void *table, Key_830189E8 key);

void fn_830189E8(Self_830189E8 *self, unsigned int a, unsigned int b)
{
    Key_830189E8 key;
    int *entry;
    float *p;

    RtlEnterCriticalSection(self->lock);
    key.b = b;
    key.a = a;
    entry = fn_83016E90(self->table, key, (key.a + key.b) % 193);
    if (entry != 0) {
        p = fn_82FFE0F0(self->floats, a);
        fn_83017DA0(self, a, entry, p != 0 ? *p : 0.0f, b);
        fn_830196F8(self->table, key);
        RtlLeaveCriticalSection(self->lock);
    } else {
        RtlLeaveCriticalSection(self->lock);
    }
}
