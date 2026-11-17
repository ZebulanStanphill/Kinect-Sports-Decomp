extern int fn_82E79690(void *self, void *state);
extern int fn_82E7AE00(void *self, void *packet, void *source, int flags);
extern unsigned int fn_82E798F8(void *self);
extern int fn_82E7AC38(void *self, void *state);
extern void *memset(void *out, int value, unsigned int size);

int fn_82E7B110(char *self, unsigned short type, unsigned char flags, void *source, unsigned int *available)
{
    unsigned char state[0x4c];
    unsigned char packet[0x125];
    int result;
    unsigned int used;
    unsigned int limit;

    if (!available) {
        return 0x80070057;
    }
    *available = 0;
    result = fn_82E79690(self, state);
    if (result >= 0) {
        memset(packet, 0, sizeof(packet));
        *(unsigned short *)packet = type;
        packet[6] = flags;
        result = fn_82E7AE00(self, packet, source, 0);
        if (result >= 0) {
            used = fn_82E798F8(self);
            if (*(unsigned int *)(self + 0x160) == 0) {
                limit = *(unsigned int *)(self + 0x148);
            } else {
                limit = 64000;
            }
            if (used <= limit) {
                *available = limit - used;
            } else {
                *available = 0;
            }
        } else {
            *available = 0;
        }
        result = fn_82E7AC38(self, state);
    }
    return result;
}
