typedef struct Connection_828AF4F8 {
    char pad[4];     /* 0x0 */
    int mode;        /* 0x4 */
    char pad8[0x5c]; /* 0x8 */
    void *state;     /* 0x64 */
} Connection_828AF4F8;

typedef struct Object_828AF4F8 {
    char pad[0x50];            /* 0x0 */
    void *connection;          /* 0x50 */
    char pad54[0x5c];          /* 0x54 */
    unsigned char complete;    /* 0xb0 */
    unsigned char unused;      /* 0xb1 */
    unsigned char initialized; /* 0xb2 */
} Object_828AF4F8;

extern unsigned char fn_8289DAD0(Object_828AF4F8 *);
extern Connection_828AF4F8 *fn_8289D8D0(void *);
extern unsigned char fn_828D8FD8(void *, unsigned char);
extern void fn_828C8058(void *, int);
extern unsigned char fn_828AF2B0(Object_828AF4F8 *);
extern void *fn_823AA970(Object_828AF4F8 *);
extern void fn_828D8B60(void *, int, void *);

void fn_828AF4F8(Object_828AF4F8 *self)
{
    if (!self->complete) {
        if (fn_8289DAD0(self)) {
            Connection_828AF4F8 *connection = fn_8289D8D0(self->connection);
            if (!connection || connection->mode != 1 || !fn_828D8FD8(connection->state, 0)) {
                fn_828C8058(self->connection, 0xb);
            }
        } else {
            if (!fn_828AF2B0(self) && !self->initialized) {
                void *connection = self->connection;
                void *context = fn_823AA970(self);
                fn_828D8B60(connection, 0, context);
                self->initialized = 1;
            }
        }
        self->complete = 1;
    }
}
