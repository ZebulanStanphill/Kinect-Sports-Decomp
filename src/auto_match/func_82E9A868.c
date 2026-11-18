typedef struct Writer_82E9A868 {
    char unknown0[0x3c];
    unsigned int count; /* 0x3c */
    char unknown40[0x18];
    unsigned int capacity; /* 0x58 */
} Writer_82E9A868;

/* Forwards its second and third arguments to fn_82E83078. */
extern int fn_82E4BC08(Writer_82E9A868 *self, unsigned char *destination, unsigned int *size);
extern unsigned int fn_82E9A160(Writer_82E9A868 *self, unsigned char *destination, unsigned int capacity,
                                unsigned int type, unsigned int *size);

/* Writes a 00 00 01 0E start code and the header after it; the first one also gets a type 30 block. */
int fn_82E9A868(Writer_82E9A868 *self, unsigned char *destination, unsigned int *outSize, unsigned int unused,
                unsigned int options)
{
    unsigned int size;
    unsigned int extra;
    unsigned int count = self->count;
    int append;

    destination[0] = 0;
    destination[1] = 0;
    destination[2] = 1;
    destination[3] = 14;
    append = count == 0 ? options : 0;
    fn_82E4BC08(self, destination + 4, &size);
    size += 4;
    if (size > self->capacity) {
        return -100;
    }
    if (append != 0) {
        if (fn_82E9A160(self, destination + size, self->capacity - size, 30, &extra) != 0) {
            return -100;
        }
        size = extra + size;
        if (size > self->capacity) {
            return -100;
        }
    }
    *outSize = size;
    return 0;
}
