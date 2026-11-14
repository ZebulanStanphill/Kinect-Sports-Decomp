
typedef struct Stream_82F60B58 {
    int pad0;
    char ring[0x54];
    unsigned int first;
    unsigned int last;
} Stream_82F60B58;

extern int fn_82F61B68(void *ring, int age, unsigned int *out);

int fn_82F60B58(Stream_82F60B58 *self, unsigned int index, unsigned int *out)
{
    if (out == 0 || index < self->first || index > self->last) {
        return 0x82240403;
    }
    return fn_82F61B68(self->ring, self->last - index, out);
}
