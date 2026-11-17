extern long _InterlockedDecrement(volatile long *value);

typedef struct Request_82610928 {
    void *state;
    void *event;
} Request_82610928;

typedef struct Shared_82610928 {
    char *object;
    void *owner;
} Shared_82610928;

extern Shared_82610928 *fn_82522588(Shared_82610928 *out, void *source);
extern void fn_82816F98(void *archive, unsigned int kind, unsigned int *out);
extern void fn_82816FE8(void *archive, unsigned int kind, Shared_82610928 *out);
extern void fn_827D5078(void *state, unsigned int count);
extern void fn_827DEA50(void *device, void *archive);
extern void fn_827D5090(void *state, void *data);
extern void fn_827D50A8(void *state, void *data);
extern void fn_827D50C0(void *state, int result);
extern void fn_822315A0(void *owner);

unsigned int fn_82610928(char *self, int unused, Request_82610928 *request)
{
    Shared_82610928 shared;
    Shared_82610928 data;
    char *object;
    void *archive;
    char *description;
    unsigned int count;
    unsigned int kind;

    fn_82522588(&shared, self + 4);
    description = *(char **)(self + 0xc);
    object = shared.object;
    archive = *(void **)(object + 0x88);
    if (archive != 0) {
        kind = *(unsigned int *)(description + 0x80);
        count = 0;
        fn_82816F98(archive, kind, &count);
        if (count != 0) {
            fn_827D5078(request->state, count);
            fn_827DEA50(*(void **)(self + 0x10), archive);
            fn_82816FE8(archive, *(unsigned int *)(description + 0x80), &data);
            fn_827D5090(request->state, data.owner);
            fn_827D50A8(request->state, 0);
            fn_827D50C0(request->state, 0);
            if (shared.owner != 0) {
                fn_822315A0(shared.owner);
            }
            if (request->event != 0) {
                fn_822315A0(request->event);
            }
            return 0;
        }
        fn_827D50C0(request->state, 2);
        _InterlockedDecrement((long *)(object + 0x1dc));
    } else {
        _InterlockedDecrement((long *)(object + 0x1dc));
    }
    if (shared.owner != 0) {
        fn_822315A0(shared.owner);
    }
    if (request->event != 0) {
        fn_822315A0(request->event);
    }
    return 2;
}
