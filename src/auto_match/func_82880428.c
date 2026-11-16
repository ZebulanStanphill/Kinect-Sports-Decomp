extern void *memset(void *, int, unsigned int);
extern void *memcpy(void *, const void *, unsigned int);

typedef struct Address_82880428 {
    unsigned char bytes[36];
} Address_82880428;

typedef struct Identifier_82880428 {
    unsigned char bytes[8];
} Identifier_82880428;

typedef struct Object_82880428 {
    int type;            /* 0x0 */
    unsigned char state; /* 0x4 */
    char padding[3];
    unsigned short version;         /* 0x8 */
    unsigned short code;            /* 0xa */
    int index;                      /* 0xc */
    int flags;                      /* 0x10 */
    int count;                      /* 0x14 */
    Address_82880428 address;       /* 0x18 */
    Identifier_82880428 identifier; /* 0x3c */
} Object_82880428;

Object_82880428 *fn_82880428(Object_82880428 *self)
{
    Address_82880428 address;
    Identifier_82880428 identifier;
    int i;

    self->state = 0;
    self->type = 2;
    {
        int *pPtrVal = &*(int *)&self->version;
        *pPtrVal = 0;
    }
    {
        int *pIndex = &self->index;
        *pIndex = 0;
    }
    self->flags = 0;
    {
        int *pCount = &self->count;
        *pCount = 0;
    }
    address.bytes[0] = 0;
    memset(address.bytes + 1, 0, 35);
    identifier.bytes[0] = 0;
    for (i = 1; i < 8; i++) {
        identifier.bytes[i] = 0;
    }
    memcpy(&self->address, &address, sizeof(address));
    self->version = 2;
    self->index = -1;
    self->code = 1001;
    self->identifier = identifier;
    return self;
}
