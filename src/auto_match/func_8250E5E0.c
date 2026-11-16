typedef struct Owner_8250E5E0 {
    char padding[0x10];
    void *object;   /* 0x10 */
    void *resource; /* 0x14 */
    char padding18[8];
    int state;   /* 0x20 */
    int count;   /* 0x24 */
    int flags;   /* 0x28 */
    float value; /* 0x2c */
} Owner_8250E5E0;

extern void *fn_827F2038(unsigned int);
extern void *fn_827F2F90(void *, void *, int, int, int, int);
extern void fn_8250E678(Owner_8250E5E0 *);
extern void fn_827F2D60(void *, void *, float, int, int);

void *fn_8250E5E0(Owner_8250E5E0 *self, void *resource)
{
    void *memory;
    {
        int *state = &self->state;
        *state = 0;
    }
    self->count = 0;
    self->flags = 0;
    {
        float *pValue = &self->value;
        *pValue = 0.0f;
    }
    memory = fn_827F2038(0x110);
    self->object = memory ? fn_827F2F90(memory, resource, 0, 0, 0, 0) : 0;
    fn_8250E678(self);
    fn_827F2D60(self->object, self->resource, 0.0f, 0x12, 0);
    return self->object;
}
