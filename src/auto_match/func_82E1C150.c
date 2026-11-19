typedef struct String_82E1C150 {
    union {
        char buffer[16];
        char *pointer;
    } text; /* 0x00 */

    unsigned int size;     /* 0x10 */
    unsigned int reserved; /* 0x14 */
} String_82E1C150;

typedef struct Resolver_82E1C150 Resolver_82E1C150;

typedef struct ResolverVtbl_82E1C150 {
    void *slots[3];
    unsigned int (*GetAddress)(Resolver_82E1C150 *self); /* 0x0c */
} ResolverVtbl_82E1C150;

struct Resolver_82E1C150 {
    ResolverVtbl_82E1C150 *vtbl;
};

typedef struct SockAddr_82E1C150 {
    unsigned short family; /* 0x00 */
    unsigned short port;   /* 0x02 */

    union {
        unsigned int address;
        unsigned char bytes[4];
    } addr; /* 0x04 */
} SockAddr_82E1C150;

typedef struct Connection_82E1C150 {
    char pad00[4];
    void *service;          /* 0x04 */
    unsigned char resolved; /* 0x08 */
    char pad09[0x0c - 0x09];
    String_82E1C150 addressText; /* 0x0c */
    char pad24[0x28 - 0x24];
    SockAddr_82E1C150 address; /* 0x28 */
    char pad30[0x38 - 0x30];
    unsigned short port; /* 0x38 */
    char pad3a[0x3c - 0x3a];
    String_82E1C150 hostName; /* 0x3c */
    char pad54[0x58 - 0x54];
    void *lookup;                /* 0x58 */
    Resolver_82E1C150 *resolver; /* 0x5c */
} Connection_82E1C150;

extern int fn_82F8DBA0(const char *host, void *service, int flags, void *lookup);
extern int fn_82F6DCE0(char *buffer, unsigned int size, const char *format, ...);
extern void fn_82230360(String_82E1C150 *s, const char *text, unsigned int length);
extern unsigned int strlen(const char *s);

static __forceinline char *Text(String_82E1C150 *s)
{
    return s->reserved < 16 ? s->text.buffer : s->text.pointer;
}

static __forceinline void Clear(String_82E1C150 *s)
{
    s->size = 0;
    Text(s)[0] = 0;
}

int fn_82E1C150(Connection_82E1C150 *self)
{
    char buffer[0x104];
    int hr;

    if (self->service == 0 || self->hostName.size == 0)
        return 0x80070057;
    if (self->resolved == 1) {
        Clear(&self->addressText);
        self->resolved = 0;
    }
    hr = fn_82F8DBA0(Text(&self->hostName), self->service, 0, &self->lookup);
    if (hr < 0)
        return hr;
    self->address.addr.address = self->resolver->vtbl->GetAddress(self->resolver);
    self->address.family = 2;
    self->address.port = self->port;
    fn_82F6DCE0(buffer, 0x103, "%d.%d.%d.%d", self->address.addr.bytes[0], self->address.addr.bytes[1],
                self->address.addr.bytes[2], self->address.addr.bytes[3]);
    buffer[0x103] = 0;
    fn_82230360(&self->addressText, buffer, strlen(buffer));
    self->resolved = 1;
    return hr;
}
