#include "xdk/vectorintrinsics.h"

typedef struct Buffer_823DB9B0 {
    char reserved[0x30]; /* 0x00 */
    int active;          /* 0x30 */
} Buffer_823DB9B0;

typedef struct Player_823DB9B0 {
    char reserved[0x10]; /* 0x00 */
    void *object;        /* 0x10 */
} Player_823DB9B0;

typedef struct Object_823DB9B0 {
    __vector4 position;      /* 0x00 */
    float first;             /* 0x10 */
    float second;            /* 0x14 */
    char reserved18[0xc];    /* 0x18 */
    float elapsed;           /* 0x24 */
    float third;             /* 0x28 */
    char reserved2c[0x10];   /* 0x2c */
    int player;              /* 0x3c */
    int reserved40;          /* 0x40 */
    Buffer_823DB9B0 *buffer; /* 0x44 */
} Object_823DB9B0;

typedef struct Payload_823DB9B0 {
    __vector4 position;       /* 0x00 */
    float first;              /* 0x10 */
    float second;             /* 0x14 */
    float third;              /* 0x18 */
    int id;                   /* 0x1c */
    unsigned int flags;       /* 0x20 */
    unsigned int type;        /* 0x24 */
    unsigned int reserved[2]; /* 0x28 */
} Payload_823DB9B0;

extern void fn_8227D9B0(Buffer_823DB9B0 *);
extern void fn_8227DA30(Buffer_823DB9B0 *, float);
extern int fn_824CCD80(void *);

typedef struct Bytes_823DB9B0 {
    unsigned char bytes[0x30];
} Bytes_823DB9B0;

void fn_823DB9B0(Object_823DB9B0 *self)
{
    Payload_823DB9B0 payload;
    int id;
    Buffer_823DB9B0 *buffer;
    if (self->buffer->active == 0) {
        fn_8227D9B0(self->buffer);
    }
    fn_8227DA30(self->buffer, self->elapsed);
    if (self->player != 0) {
        id = fn_824CCD80(((Player_823DB9B0 *)self->player)->object);
    } else {
        id = -1;
    }
    buffer = self->buffer;
    payload.position = self->position;
    payload.id = id;
    payload.first = self->first;
    payload.second = self->second;
    payload.third = self->third;
    payload.flags = 0;
    payload.type = 3;
    *(Bytes_823DB9B0 *)buffer = *(Bytes_823DB9B0 *)&payload;
}
