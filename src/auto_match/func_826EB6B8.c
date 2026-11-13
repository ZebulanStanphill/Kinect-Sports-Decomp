typedef struct Obj_826EB6B8 {
    unsigned char pad[0x5c];
    unsigned char type;
    unsigned char pad5d;
    unsigned char inl[2];
    unsigned char *ptr;
    int extra;
} Obj_826EB6B8;

extern void fn_826EB580(Obj_826EB6B8 *self, unsigned int size);
extern void *memcpy(void *dst, const void *src, unsigned int n);

void fn_826EB6B8(Obj_826EB6B8 *self, unsigned char type, const void *data, unsigned int size, int extra)
{
    self->type = type;
    self->extra = extra;
    fn_826EB580(self, size);
    if (size <= 6)
        memcpy(self->inl, data, size);
    else
        memcpy(self->ptr, data, size);
}
