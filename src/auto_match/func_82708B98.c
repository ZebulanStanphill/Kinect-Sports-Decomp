typedef struct Ref_82708B98 {
    char pad0[0x8];
    int refCount; /* 0x08 */
} Ref_82708B98;

typedef struct Value_82708B98 {
    unsigned char type; /* 0x00 */
    char pad1[0xf];
} Value_82708B98;

typedef struct Movie_82708B98 {
    char pad0[0x78];
    char *state; /* 0x78 */
} Movie_82708B98;

typedef struct Log_82708B98 {
    char pad0[0xc];
    char stream[4]; /* 0x0c */
} Log_82708B98;

struct Root_82708B98;

typedef struct RootVtbl_82708B98 {
    char pad0[0x5c];
    Movie_82708B98 *(*GetMovie)(struct Root_82708B98 *self); /* 0x5c */
} RootVtbl_82708B98;

typedef struct Root_82708B98 {
    RootVtbl_82708B98 *vt;
} Root_82708B98;

struct Loader_82708B98;

typedef struct LoaderVtbl_82708B98 {
    char pad0[0xc];
    Log_82708B98 *(*GetLog)(struct Loader_82708B98 *self, int kind); /* 0x0c */
} LoaderVtbl_82708B98;

typedef struct Loader_82708B98 {
    LoaderVtbl_82708B98 *vt;
} Loader_82708B98;

typedef struct Object_82708B98 {
    char pad0[0x8];
    Loader_82708B98 loader; /* 0x08 */
    char padc[0x68 - 0xc];
    Root_82708B98 *root; /* 0x68 */
} Object_82708B98;

extern void fn_8267C4F0(void *object);
extern void fn_82681D00(Object_82708B98 *self, void *source, Value_82708B98 *value);
extern void fn_82683F88(void *stream, const char *format);
extern Ref_82708B98 *fn_82694700(char *names, char *name);
extern void fn_826944C8(Ref_82708B98 *ref);
extern void fn_82696330(Value_82708B98 *value);
extern unsigned char fn_826B4808(Movie_82708B98 *movie, Ref_82708B98 **ref, Value_82708B98 *value, int flags,
                                 unsigned char notify);
extern void fn_82705520(Object_82708B98 *self, Ref_82708B98 **ref, Value_82708B98 *value, int mode);

unsigned char fn_82708B98(Object_82708B98 *self, char *name, void *source, int mode)
{
    Log_82708B98 *log;
    Movie_82708B98 *movie;
    Ref_82708B98 *ref;
    Value_82708B98 value;
    unsigned char result;

    if (self->root == 0) {
        return 0;
    }
    if (name == 0) {
        log = self->loader.vt->GetLog(&self->loader, 4);
        if (log != 0) {
            fn_8267C4F0(log);
            log = self->loader.vt->GetLog(&self->loader, 4);
            fn_82683F88(log->stream, "Error: NULL pathToVar passed to SetVariable/SetDouble()\n");
            if (log != 0) {
                fn_8267C4F0(log);
            }
        }
        return 0;
    }
    movie = self->root->vt->GetMovie(self->root);
    ref = fn_82694700(movie->state + 0x254, name);
    ref->refCount++;
    value.type = 0;
    fn_82681D00(self, source, &value);
    result = fn_826B4808(self->root->vt->GetMovie(self->root), &ref, &value, 0, mode == 0);
    if ((result == 0 && mode != 0) || mode == 2) {
        fn_82705520(self, &ref, &value, mode);
    }
    fn_82696330(&value);
    {
        Ref_82708B98 *held = ref;

        if (--held->refCount == 0) {
            fn_826944C8(held);
        }
    }
    return result;
}
