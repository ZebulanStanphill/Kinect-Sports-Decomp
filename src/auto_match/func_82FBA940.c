extern void *memset(void *, int, unsigned int);

typedef struct Entry_82FBA940 {
    float first;
    float second;
    int state;
} Entry_82FBA940;

typedef struct Context_82FBA940 {
    char pad[0x10];
    int width;
    char pad14[8];
    unsigned int count;
    int height;
    Entry_82FBA940 *entries;
    void *buffer;
    char pad2c[0x14];
    unsigned char ready;
} Context_82FBA940;

int fn_82FBA940(Context_82FBA940 *self)
{
    unsigned int i;
    memset(self->buffer, 0, self->height * self->width * 4);
    if (self->entries) {
        for (i = 0; i < self->count; i++) {
            self->entries[i].second = 0.0f;
            self->entries[i].first = 0.0f;
            self->entries[i].state = 0;
        }
    }
    self->ready = 1;
    return 1;
}
