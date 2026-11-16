typedef struct Object_822A1100 {
    void *resource; /* 0x00 */
    char reserved04[0xc];
    float x; /* 0x10 */
    float y; /* 0x14 */
    float z; /* 0x18 */
    float reserved1c;
    float width;  /* 0x20 */
    float height; /* 0x24 */
} Object_822A1100;

extern unsigned int fn_8266F580(void *);
extern void fn_824EC320(float, float, float, float, float, float, float, float, float, unsigned int,
                        unsigned char, int, int);

void fn_822A1100(Object_822A1100 *self)
{
    fn_824EC320(self->x, self->y, self->z, self->width, 0.0f, 0.0f, 0.0f, self->height, 0.0f,
                fn_8266F580(self->resource), 1, 3, 0);
}
