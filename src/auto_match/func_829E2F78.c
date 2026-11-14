typedef struct Median_829E2F78 {
    float older;
    float last;
    int count;
} Median_829E2F78;

void fn_829E2F78(Median_829E2F78 *self, float value, float *out)
{
    if (self->count < 2) {
        self->count++;
        *out = value;
    } else if ((self->last <= self->older && self->older <= value) || (self->last >= self->older && self->older >= value))
        *out = self->older;
    else if ((self->older <= self->last && self->last <= value) || (self->older >= self->last && self->last >= value))
        *out = self->last;
    else
        *out = value;
    self->older = self->last;
    self->last = value;
}
