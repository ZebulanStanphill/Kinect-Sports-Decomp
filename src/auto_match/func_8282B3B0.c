typedef struct Entry_8282B3B0 {
    char padding[12];
    int key;
} Entry_8282B3B0;

typedef struct Lookup_8282B3B0 {
    unsigned int key;
    unsigned int value;
    unsigned char exact;
} Lookup_8282B3B0;

typedef struct Request_8282B3B0 {
    char padding[16];
    unsigned int *item;
    int firstKey;
    int secondKey;
    unsigned int value;
    char tail[16];
} Request_8282B3B0;

extern void fn_828299A8(Lookup_8282B3B0 *lookup, void *self, Entry_8282B3B0 **entry);
extern int fn_8282AF88(const void *first, const void *second);
extern void fn_828233A8(void *self, void **out, int (*compare)(const void *, const void *),
                        Request_8282B3B0 *request);
extern void fn_82822E38(void *node);

void fn_8282B3B0(char *self, unsigned int *item)
{
    struct {
        Entry_8282B3B0 *first;
        Entry_8282B3B0 *second;
        void *removed[2];
        Lookup_8282B3B0 lookup;
        char padding[4];
        Request_8282B3B0 request;
    } frame;

    unsigned int value;
    frame.lookup.key = (unsigned int)item;
    fn_828299A8(&frame.lookup, self, &frame.first);
    frame.lookup.key = *item;
    value = frame.lookup.value;
    fn_828299A8(&frame.lookup, self, &frame.second);
    frame.request.item = item;
    frame.request.firstKey = frame.first->key;
    frame.request.secondKey = frame.second->key;
    frame.request.value = value;
    fn_828233A8(self + 0x344, frame.removed, fn_8282AF88, &frame.request);
    if (frame.removed[0] != 0) {
        fn_82822E38(frame.removed[0]);
        *(int *)(self + 0x38) -= 1;
    }
}
