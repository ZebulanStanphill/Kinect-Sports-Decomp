typedef struct Request_82C490D8 {
    unsigned int format;   /* 0x0 */
    void *context;         /* 0x4 */
    unsigned int field8;   /* 0x8 */
    unsigned int reserved; /* 0xc */
    unsigned int field10;  /* 0x10 */
    unsigned int field14;  /* 0x14 */
    unsigned int field18;  /* 0x18 */
    int time;              /* 0x1c */
    unsigned int field20;  /* 0x20 */
    char unknown[0x50];    /* 0x24 */
} Request_82C490D8;

typedef struct Driver_82C490D8 {
    char pad0[0xc0];
    int (*submit)(Request_82C490D8 *); /* 0xc0 */
    char padC4[0x204];
    int disabled; /* 0x2c8 */
} Driver_82C490D8;

typedef struct State_82C490D8 {
    char pad0[0xe84];
    unsigned int fieldE84; /* 0xe84 */
    char padE88[0xf7c - 0xe88];
    unsigned int fieldF7C; /* 0xf7c */
    char padF80[0x5438 - 0xf80];
    double time; /* 0x5438 */
    char pad5440[0x5568 - 0x5440];
    unsigned int field5568; /* 0x5568 */
    char pad556C[0x55ac - 0x556c];
    unsigned int field55AC; /* 0x55ac */
    char pad55B0[0x5610 - 0x55b0];
    unsigned int format; /* 0x5610 */
    unsigned int flags;  /* 0x5614 */
    char pad5618[0x6070 - 0x5618];
    Driver_82C490D8 *driver; /* 0x6070 */
    char pad6074[0xb148 - 0x6074];
    unsigned int fieldB148; /* 0xb148 */
} State_82C490D8;

int fn_82C490D8(State_82C490D8 *self)
{
    Request_82C490D8 request;
    if (self == 0) {
        return -3;
    }
    if (self->driver->disabled != 0) {
        return 0;
    }
    if ((self->flags & 1) == 0) {
        return 0;
    }
    request.context = self;
    request.format = self->format;
    request.field10 = self->fieldF7C;
    request.reserved = 0;
    request.field14 = self->field55AC;
    request.field8 = self->fieldB148;
    request.field18 = self->field5568;
    request.time = (int)self->time;
    request.field20 = self->fieldE84;
    return self->driver->submit(&request);
}
