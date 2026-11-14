// Puts the avatar textures "avatar_00".."avatar_07" and "tex_background" on the movie.
typedef struct Rep_8227B968 Rep_8227B968;

typedef struct Ref_8227B968 {
    void *ptr;
    Rep_8227B968 *rep;
} Ref_8227B968;

extern int fn_82526C70(char *buf, int size, const char *fmt, ...);
extern void **fn_82279C58(Ref_8227B968 *ref, void *self);
extern int fn_8266F6B8(void);
extern void fn_826728E8(void *movie, const char *name, int value);
extern void fn_822315A0(Rep_8227B968 *rep);

void fn_8227B968(void *self)
{
    char name[16];
    Ref_8227B968 ref;
    Ref_8227B968 bg;
    void *movie;
    int i;

    for (i = 0; i < 8; i++) {
        fn_82526C70(name, 0x10, "avatar_0%d", i);
        movie = *fn_82279C58(&ref, self);
        fn_826728E8(movie, name, fn_8266F6B8());
        if (ref.rep != 0)
            fn_822315A0(ref.rep);
    }
    movie = *fn_82279C58(&bg, self);
    fn_826728E8(movie, "tex_background", fn_8266F6B8());
    if (bg.rep != 0)
        fn_822315A0(bg.rep);
}
