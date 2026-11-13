unsigned long _byteswap_ulong(unsigned long value);
unsigned short _byteswap_ushort(unsigned short value);
extern void *memcpy(void *dst, const void *src, unsigned int n);

typedef struct Guid_82E39C50 {
    unsigned long data1;
    unsigned short data2;
    unsigned short data3;
    unsigned char data4[8];
} Guid_82E39C50;

void fn_82E39C50(Guid_82E39C50 *guid, const unsigned char **pp)
{
    guid->data1 = _byteswap_ulong(*(const unsigned long *)*pp);
    *pp += 4;
    guid->data2 = _byteswap_ushort(*(const unsigned short *)*pp);
    *pp += 2;
    guid->data3 = _byteswap_ushort(*(const unsigned short *)*pp);
    *pp += 2;
    memcpy(guid->data4, *pp, 8);
    *pp += 8;
}
