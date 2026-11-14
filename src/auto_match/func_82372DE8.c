typedef struct Value_82372DE8 {
    char pad[32];
    float value;
} Value_82372DE8;

typedef struct Array_82372DE8 {
    Value_82372DE8 **data;
    char pad[12];
    unsigned int index;
} Array_82372DE8;

typedef struct Limits_82372DE8 {
    char pad[0x148];
    unsigned int min, difference, max;
} Limits_82372DE8;

typedef struct State_82372DE8 {
    char pad[8];
    Array_82372DE8 ***arrays;
    char gap[0x1f8];
    int mode;
    char gap2[0x58];
    Limits_82372DE8 *limits;
    char gap3[0x3f4];
    int active;
} State_82372DE8;

extern int fn_82372F88(State_82372DE8 *);

int fn_82372DE8(State_82372DE8 *self, unsigned int index)
{
    Array_82372DE8 *a = (*self->arrays)[index];
    Array_82372DE8 *b = (*self->arrays)[!index];
    unsigned int first = (int)a->data[a->index]->value;
    unsigned int second = (int)b->data[b->index]->value;
    int active;
    if (!self->mode)
        active = fn_82372F88(self) != -1;
    else
        active = self->active;
    if (!active) {
        Limits_82372DE8 *limits = self->limits;
        if (first == limits->max - 1)
            return 1;
        if (first > second && first >= limits->min - 1 && first - second >= limits->difference - 1)
            return 1;
    }
    return 0;
}
