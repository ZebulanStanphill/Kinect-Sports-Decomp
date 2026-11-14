typedef struct Packet_829DD388 {
    unsigned char data[2000];
    unsigned int size;
} Packet_829DD388;

extern void fn_82A1DDC0(void *dst, const void *src, unsigned int n);
extern void fn_829DC778(char *self, Packet_829DD388 *packet);
extern void fn_829DD328(char *self, int count, void *buffer);
extern void *_alloca(unsigned int size);

void fn_829DD388(char *self, const Packet_829DD388 *src)
{
    Packet_829DD388 packet;

    fn_82A1DDC0(packet.data, src->data, 2000);
    packet.size = src->size;
    fn_829DC778(self, &packet);
    if (*(unsigned int *)(self + 0xf4a10) == 500)
        fn_829DD328(self, 200, _alloca(800));
}
