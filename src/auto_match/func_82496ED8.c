typedef struct Data_82496ED8 {
    int words[5];
} Data_82496ED8;

typedef struct Event_82496ED8 {
    int id;             /* 0x00 */
    Data_82496ED8 data; /* 0x04 */
    int valid;          /* 0x18 */
} Event_82496ED8;

typedef struct Pending_82496ED8 {
    int pending;        /* 0x00 */
    Data_82496ED8 data; /* 0x04 */
} Pending_82496ED8;

typedef struct Source_82496ED8 {
    char pad0[0x100];
    int id; /* 0x100 */
    char pad104[0x84];
    Pending_82496ED8 pending; /* 0x188 */
} Source_82496ED8;

typedef struct Message_82496ED8 {
    int pad0;
    int type;             /* 0x04 */
    Event_82496ED8 event; /* 0x08 */
} Message_82496ED8;

typedef struct Self_82496ED8 {
    int pad0;
    Message_82496ED8 message; /* 0x04 */
    char pad28[0x2c];
    Source_82496ED8 *source; /* 0x54 */
    int busy;                /* 0x58 */
} Self_82496ED8;

void fn_82496ED8(Self_82496ED8 *self)
{
    Source_82496ED8 *source = self->source;
    Message_82496ED8 message;

    self->busy = 0;
    message.event.id = source->id;
    if (source->pending.pending != 0) {
        message.event.data = source->pending.data;
        message.event.valid = 1;
        source->pending.pending = 0;
    } else {
        message.event.valid = 0;
    }
    message.type = -1;
    {
        Message_82496ED8 *out = &self->message;

        out->type = message.type;
        out->event.id = message.event.id;
        out->event.data = message.event.data;
        out->event.valid = message.event.valid;
    }
}
