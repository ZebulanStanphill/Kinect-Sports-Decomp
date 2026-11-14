typedef struct Obj_823AA380 {
    char pad0[0x28];
    unsigned int count;
    int threshold;
} Obj_823AA380;

int fn_823AA380(Obj_823AA380 *self, unsigned int a, unsigned int b)
{
    int diff;
    if (a < self->count && b < self->count)
        return 0;
    diff = a - b;
    diff = diff < 0 ? -diff : diff;
    return diff >= self->threshold;
}
