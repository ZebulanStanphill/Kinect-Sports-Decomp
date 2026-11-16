typedef struct Handle_82771090 {
    void *data;
    unsigned int count;
} Handle_82771090;

typedef struct Record_82771090 {
    unsigned int kind;      /* 0x0 */
    void *first;            /* 0x4 */
    void *second;           /* 0x8 */
    float bounds[6];        /* 0xc */
    unsigned char data[32]; /* 0x24 */
    int value;              /* 0x44 */
    int firstCount;         /* 0x48 */
    int secondCount;        /* 0x4c */
} Record_82771090;

extern void *memcpy(void *, const void *, unsigned int);

Record_82771090 *fn_82771090(Record_82771090 *self, unsigned int kind, const float *bounds, const void *data,
                             int value, Handle_82771090 *first, Handle_82771090 *second)
{
    self->kind = kind;
    self->first = first->count ? first->data : 0;
    self->second = second->count ? second->data : 0;
    self->bounds[0] = bounds[0];
    self->bounds[1] = bounds[1];
    self->bounds[2] = bounds[2];
    self->bounds[3] = bounds[3];
    self->bounds[4] = bounds[4];
    self->bounds[5] = bounds[5];
    memcpy(self->data, data, 32);
    self->value = value;
    self->firstCount = first->count;
    self->secondCount = second->count;
    return self;
}
