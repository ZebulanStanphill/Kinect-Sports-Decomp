typedef unsigned short wchar_t;

typedef struct SkipData_8249C720 {
    char pad[0x118];
    unsigned int flags;
} SkipData_8249C720;

typedef struct Scene_8249C720 {
    char pad[0x358];
    SkipData_8249C720 *skip;
} Scene_8249C720;

typedef struct Game_8249C720 {
    char pad[0x844];
    Scene_8249C720 *scene;
} Game_8249C720;

typedef struct Movie_8249C720 {
    char pad[0x70];
    Game_8249C720 *game;
    char pad2[0x28];
    void *pending;
} Movie_8249C720;

typedef struct Callback_8249C720 {
    const void *table;
    Movie_8249C720 *movie;
    char pad[8];
    struct Callback_8249C720 *self;
} Callback_8249C720;

typedef struct Request_8249C720 {
    char pad[0x10];
    void *context;
} Request_8249C720;

extern int fn_82528BF8(void *, const char *, wchar_t *, unsigned int, int, int);
extern void *fn_822847A8(const wchar_t *, Request_8249C720 *, const wchar_t *, Callback_8249C720 *, int, int);
extern void fn_822848B8(void *pending);
extern void fn_82284B08(void *pending, float volume);
extern void *lbl_83276728[3];
extern const char lbl_821BF0A8[];

extern struct Settings_8249C720 {
    char pad[0x14];
    float volume;
} lbl_8327F880;

void fn_8249C720(Movie_8249C720 *self)
{
    int enabled = 0;
    SkipData_8249C720 *skip;

    if (self->game && (skip = self->game->scene->skip) != 0 && (skip->flags & 0x40) != 0) {
        enabled = 1;
    }
    if (enabled != (self->pending != 0)) {
        if (enabled) {
            wchar_t name[256] = L"";
            Callback_8249C720 callback;
            Request_8249C720 request;

            fn_82528BF8(lbl_83276728[1], "skip", name, 256, 0, 1);
            callback.movie = self;
            request.context = 0;
            callback.self = &callback;
            callback.table = lbl_821BF0A8;
            self->pending = fn_822847A8(0, &request, name, &callback, 1, 1);
        } else {
            fn_822848B8(self->pending);
            self->pending = 0;
        }
    }
    if (self->pending) {
        fn_82284B08(self->pending, lbl_8327F880.volume);
    }
}
