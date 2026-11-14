typedef struct String_8245CBE0 {
    union {
        char buf[16];
        char *ptr;
    } bx;
    unsigned int size;
    unsigned int capacity;
} String_8245CBE0;

struct Player_8245CBE0;

typedef struct PlayerVtbl_8245CBE0 {
    void (*destroy)(struct Player_8245CBE0 *self, int flags);
    char pad4[0xc - 4];
    void (*open)(struct Player_8245CBE0 *self, const char *name);
    char pad10[0x14 - 0x10];
    void (*setMode)(struct Player_8245CBE0 *self, unsigned short mode);
} PlayerVtbl_8245CBE0;

typedef struct Player_8245CBE0 {
    PlayerVtbl_8245CBE0 *vt;
} Player_8245CBE0;

typedef struct Self_8245CBE0 {
    char pad0[0x5dc];
    String_8245CBE0 name;
    char pad5f4[0x614 - 0x5f4];
    int mode;
    char pad618[0x63c - 0x618];
    void *source;
    String_8245CBE0 path;
    char pad658[0x6a0 - 0x658];
    Player_8245CBE0 *player;
    char pad6a4[0x6b4 - 0x6a4];
    int streamed;
} Self_8245CBE0;

extern void *fn_8265C9E0(unsigned int size);
extern Player_8245CBE0 *fn_82E1BFA0(void *mem);
extern Player_8245CBE0 *fn_82E1C410(void *mem);
extern void fn_830B4CB0(Player_8245CBE0 *player, void *source);
extern void fn_82E1C280(Player_8245CBE0 *player, const char *path);

static __forceinline const char *CStr(const String_8245CBE0 *s)
{
    if (s->capacity >= 0x10)
        return s->bx.ptr;
    return s->bx.buf;
}

void fn_8245CBE0(Self_8245CBE0 *self)
{
    Player_8245CBE0 *player = 0;
    void *mem;

    if (self->player != 0) {
        self->player->vt->destroy(self->player, 1);
        self->player = 0;
    }
    if (self->streamed != 0) {
        mem = fn_8265C9E0(0x80);
        if (mem != 0)
            player = fn_82E1BFA0(mem);
        fn_830B4CB0(player, self->source);
        fn_82E1C280(player, CStr(&self->path));
        self->player = player;
    } else {
        mem = fn_8265C9E0(0x54);
        self->player = mem != 0 ? fn_82E1C410(mem) : 0;
    }
    self->player->vt->setMode(self->player, (unsigned short)self->mode);
    self->player->vt->open(self->player, CStr(&self->name));
}
