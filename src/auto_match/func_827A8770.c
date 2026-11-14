typedef struct Entry_827A8770 {
    unsigned int flags;
    int pad4[3];
    int time;
} Entry_827A8770;

typedef struct List_827A8770 {
    Entry_827A8770 **data;
    unsigned int size;
    int pad8[3];
    unsigned int current;
} List_827A8770;

static __forceinline unsigned char OutOfRange(List_827A8770 *self, unsigned int index)
{
    return index >= self->size || (int)index < 0;
}

static __forceinline int Time(Entry_827A8770 *e)
{
    unsigned char negative = (unsigned char)(e->flags >> 31);
    return negative ? e->time : e->time;
}

int fn_827A8770(List_827A8770 *self)
{
    unsigned int index = self->current;
    int result = 0;
    if (index != 0 && !OutOfRange(self, index) && !OutOfRange(self, 0))
        result = Time(self->data[index]) - Time(self->data[0]);
    return result;
}
