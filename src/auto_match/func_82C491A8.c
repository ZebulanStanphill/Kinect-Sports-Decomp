typedef struct Payload_82C491A8 {
    unsigned int enabled; /* 0x0 */
    unsigned int first;   /* 0x4 */
    unsigned int second;  /* 0x8 */
    char reserved[0x50];
} Payload_82C491A8;

typedef struct Request_82C491A8 {
    unsigned int format;      /* 0x0 */
    void *context;            /* 0x4 */
    unsigned int value;       /* 0x8 */
    unsigned int type;        /* 0xc */
    Payload_82C491A8 payload; /* 0x10 */
} Request_82C491A8;

typedef struct Driver_82C491A8 {
    char pad0[0xc0];
    int (*submit)(Request_82C491A8 *); /* 0xc0 */
    char padC4[0x204];
    int disabled; /* 0x2c8 */
} Driver_82C491A8;

typedef struct State_82C491A8 {
    char pad0[0x10];
    unsigned int state; /* 0x10 */
    char pad14[0x5580 - 0x14];
    unsigned int enabled; /* 0x5580 */
    char pad5584[0x5610 - 0x5584];
    unsigned int format; /* 0x5610 */
    unsigned int flags;  /* 0x5614 */
    char pad5618[0x10];
    unsigned int first;  /* 0x5628 */
    unsigned int second; /* 0x562c */
    char pad5630[0x6070 - 0x5630];
    Driver_82C491A8 *driver; /* 0x6070 */
    char pad6074[0xb148 - 0x6074];
    unsigned int value; /* 0xb148 */
} State_82C491A8;

extern void *memcpy(void *, const void *, unsigned int);

int fn_82C491A8(State_82C491A8 *self, const void *data)
{
    Request_82C491A8 request;
    if (self == 0) {
        return -3;
    }
    if (self->driver->disabled != 0) {
        return 0;
    }
    if ((self->flags & 2) == 0) {
        return self->state == 0 ? -7 : 0;
    }
    request.format = self->format;
    request.type = 1;
    request.value = self->value;
    request.context = self;
    memcpy(&request.payload, data, 0x5c);
    request.payload.first = self->first;
    request.payload.second = self->second;
    request.payload.enabled = self->enabled != 0;
    return self->driver->submit(&request);
}
