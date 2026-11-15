typedef struct Buffer_82F5BA88 {
    unsigned int width;   /* 0x00 */
    unsigned int height;  /* 0x04 */
    unsigned short *data; /* 0x08 */
} Buffer_82F5BA88;

extern void *fn_8265CA60(unsigned int size);
void *memset(void *, int, unsigned int);

Buffer_82F5BA88 *fn_82F5BA88(Buffer_82F5BA88 *self, unsigned int width, unsigned int height)
{
    unsigned int count = width * height;
    unsigned int size;
    self->width = width;
    self->height = height;
    size = count <= 0x7fffffff ? count * 2 : -1;
    self->data = fn_8265CA60(size);
    memset(self->data, 0, self->height * self->width * 2);
    return self;
}
