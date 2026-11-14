typedef struct Average_829F19C0 {
    float value;
    unsigned int count;
} Average_829F19C0;

void fn_829F19C0(Average_829F19C0 *self, float sample)
{
    self->value = ((float)self->count * self->value + sample) / (float)(self->count + 1);
    if (self->count < 30)
        self->count++;
}
