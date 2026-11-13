// Kinect Sports retail 4D5308C9, function 0x82677B38 (72 bytes).
// Copies the 0x7c-byte record at +0x1e0 to out when the valid flag at +0x10 is set; returns the flag.

void *memcpy(void *dst, const void *src, unsigned int n);

typedef struct {
    char pad0[0x10];
    unsigned char valid;
    char pad11[0x1e0 - 0x11];
    unsigned char record[0x7c];
} Object_82677B38;

unsigned char fn_82677B38(Object_82677B38 *o, void *out)
{
    if (o->valid == 0)
        return 0;
    memcpy(out, o->record, 0x7c);
    return 1;
}
