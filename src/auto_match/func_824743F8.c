typedef unsigned short wchar_t;

typedef struct Movie_824743F8 {
    char pad[0x8c];
    int hasMovie;
    char pad2[8];
    void *pending;
    void *previous;
} Movie_824743F8;

typedef struct Callback_824743F8 {
    const void *table;
    Movie_824743F8 *movie;
    char pad[8];
    struct Callback_824743F8 *self;
} Callback_824743F8;

typedef struct Request_824743F8 {
    char pad[0x10];
    void *context;
} Request_824743F8;

extern void fn_8229E090(void *, int, int);
extern int fn_82528BF8(void *, const char *, wchar_t *, unsigned int, int, int);
extern void *fn_822847A8(const wchar_t *, Request_824743F8 *, const wchar_t *, Callback_824743F8 *, int, int);
extern void *lbl_83276728[3];
extern const char lbl_821BCE94[0x18];

void fn_824743F8(void *unused, Movie_824743F8 *self)
{
    if (self->previous != 0) {
        fn_8229E090(self->previous, 0, 0);
        self->previous = 0;
    }
    if (self->hasMovie != 0) {
        wchar_t name[256] = L"";
        Callback_824743F8 callback;
        Request_824743F8 request;
        fn_82528BF8(lbl_83276728[1], "attraction_skipmovie", name, 256, 0, 1);
        callback.movie = self;
        request.context = 0;
        callback.self = &callback;
        callback.table = lbl_821BCE94;
        self->pending = fn_822847A8(0, &request, name, &callback, 1, 1);
    }
}
