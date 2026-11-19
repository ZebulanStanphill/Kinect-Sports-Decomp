typedef struct Device_82648C58 {
    char pad0[0x2a9c];
    int fence; /* 0x2a9c */
} Device_82648C58;

typedef struct Query_82648C58 {
    Device_82648C58 *device; /* 0x00 */
    int type;                /* 0x04 */
    int pad8;                /* 0x08 */
    int refCount;            /* 0x0c */
    unsigned char state;     /* 0x10 */
    char pad11[0x18 - 0x11];
    int fence;          /* 0x18 */
    int data[15];       /* 0x1c */
    int handles[15];    /* 0x58 */
    int active;         /* 0x94 */
    unsigned int count; /* 0x98 */
} Query_82648C58;

extern Query_82648C58 *fn_8265C940(unsigned int size, unsigned int flags);
extern int fn_82648B30(Device_82648C58 *device, int *handle, int *data);
extern void fn_82648D40(Query_82648C58 *query);

Query_82648C58 *fn_82648C58(Device_82648C58 *device, int type, unsigned int count)
{
    Query_82648C58 *query;
    unsigned int i;

    query = fn_8265C940(0x9c, 0x64800000);
    if (query == 0) {
        return 0;
    }
    query->type = type;
    query->device = device;
    query->refCount = 1;
    query->active = 1;
    query->count = count;
    switch (type) {
    case 8:
        query->fence = device->fence;
        query->state = 2;
        break;
    case 9:
        for (i = 0; i < query->count; i++) {
            if (fn_82648B30(device, &query->handles[i], &query->data[i]) < 0) {
                query->count = i;
                goto fail;
            }
        }
        query->state = 1;
        break;
    default:
        if (fn_82648B30(device, &query->handles[0], &query->data[0]) < 0) {
            goto fail;
        }
        query->state = 1;
        break;
    }
    return query;

fail:
    fn_82648D40(query);
    return 0;
}
