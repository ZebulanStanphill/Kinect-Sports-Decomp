typedef struct Element_8302A0B0 {
    unsigned int words[4];
} Element_8302A0B0;

typedef struct Buffer_8302A0B0 {
    unsigned int pad0;
    int active;
    Element_8302A0B0 *data;
    unsigned char *used;
    Element_8302A0B0 *current;
    unsigned short index;
    unsigned short capacity;
    unsigned int pad18;
    unsigned int flags;
    unsigned char pad20;
    unsigned char mode;
} Buffer_8302A0B0;

extern unsigned int lbl_831BC768;
extern unsigned char *fn_82FA5060(unsigned int allocator, unsigned int size);
extern void fn_83029CF0(Buffer_8302A0B0 *self);

int fn_8302A0B0(Buffer_8302A0B0 *self, Element_8302A0B0 *data, unsigned int count, int flags,
                unsigned char mode, unsigned int *existing)
{
    int result = 2;
    if (self->active == 0) {
        self->data = data;
        self->flags = flags;
        self->mode = mode;
        self->capacity = (unsigned short)count;
        if (existing[1] != 0) {
            unsigned short index;
            self->used = (unsigned char *)existing[1];
            result = 1;
            index = (unsigned short)existing[0];
            self->index = index;
            self->current = &data[index];
        } else {
            self->current = data;
            self->index = 0;
            self->used = fn_82FA5060(lbl_831BC768, count);
            if (self->used == 0) {
                result = 2;
            } else {
                unsigned int index = 0;
                if (self->capacity != 0) {
                    unsigned char *byte = self->used - 1;
                    do {
                        index++;
                        *++byte = 0;
                    } while (index < self->capacity);
                }
                if (flags & 1) {
                    fn_83029CF0(self);
                }
                result = 1;
            }
        }
    }
    return result;
}
