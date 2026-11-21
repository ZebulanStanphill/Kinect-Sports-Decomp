typedef struct String_82890A10 {
    union {
        char buffer[16]; /* 0x00 */
        char *pointer;   /* 0x00 */
    } text;

    unsigned int size;     /* 0x10 */
    unsigned int capacity; /* 0x14 */
} String_82890A10;

typedef struct Id_82890A10 {
    unsigned short index;      /* 0x00 */
    unsigned short type;       /* 0x02 */
    unsigned short generation; /* 0x04 */
    unsigned char state;       /* 0x06 */
    unsigned char valid;       /* 0x07 */
} Id_82890A10;

typedef struct Peer_82890A10 {
    char pad0[0x26];
    unsigned char local; /* 0x26 */
} Peer_82890A10;

typedef struct Owner_82890A10 {
    char pad0[0x38];
    Peer_82890A10 *peer; /* 0x38 */
} Owner_82890A10;

typedef struct NetObject_82890A10 {
    char pad0[0x10];
    void *context;  /* 0x10 */
    Id_82890A10 id; /* 0x14 */
    char pad1c[0x34 - 0x1c];
    Owner_82890A10 *owner; /* 0x34 */
} NetObject_82890A10;

extern void fn_828B5580(Id_82890A10 *self, const Id_82890A10 *other);
extern void fn_828B55B0(Id_82890A10 *self);
extern String_82890A10 *fn_828B5A20(String_82890A10 *out, Id_82890A10 *id, unsigned char rich, void *context);
extern int fn_823AA970(Peer_82890A10 *peer);
extern int fn_82F6DCE0(char *, unsigned int, const char *, ...);
extern void fn_82230360(String_82890A10 *self, const char *text, unsigned int length);
extern void fn_8265CA20(void *p);
extern unsigned int strlen(const char *);

static __forceinline unsigned char IsLocal(NetObject_82890A10 *self)
{
    if (self->owner != 0 && self->owner->peer != 0) {
        return self->owner->peer->local;
    }
    return 0;
}

static __forceinline const char *CStr(String_82890A10 *s)
{
    return s->capacity >= 16 ? s->text.pointer : s->text.buffer;
}

static __forceinline void Destroy(String_82890A10 *s)
{
    if (s->capacity >= 16) {
        fn_8265CA20(s->text.pointer);
    }
    s->capacity = 15;
    s->size = 0;
    s->text.buffer[0] = 0;
}

String_82890A10 *fn_82890A10(String_82890A10 *out, NetObject_82890A10 *self, unsigned char rich)
{
    char buffer[512];
    Id_82890A10 richId;
    Id_82890A10 plainId;

    if (rich) {
        String_82890A10 name;
        const char *where = IsLocal(self) ? "Local" : "Remote";
        void *context = self->context;

        fn_828B5580(&richId, &self->id);
        fn_82F6DCE0(buffer, 512, "<font color=blue>NETOBJ</font>{%s{MUID=%d} <font color=gray>%s</font>}",
                    where, fn_823AA970(self->owner->peer), CStr(fn_828B5A20(&name, &richId, rich, context)));
        Destroy(&name);
        fn_828B55B0(&richId);
    } else {
        String_82890A10 name;
        const char *where = IsLocal(self) ? "Local" : "Remote";
        void *context = self->context;

        fn_828B5580(&plainId, &self->id);
        fn_82F6DCE0(buffer, 512, "NETOBJ{%s{MUID=%d} %s}", where, fn_823AA970(self->owner->peer),
                    CStr(fn_828B5A20(&name, &plainId, rich, context)));
        Destroy(&name);
        fn_828B55B0(&plainId);
    }
    out->capacity = 15;
    out->size = 0;
    out->text.buffer[0] = 0;
    fn_82230360(out, buffer, strlen(buffer));
    return out;
}
