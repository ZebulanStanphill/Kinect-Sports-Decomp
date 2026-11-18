struct Request_8248F790 {
    int unused;
    int type;
    unsigned int resource;
};

struct State_8248F790 {
    int unused;
    int active;
    int padding[2];

    struct {
        void *owner;
        void *object;
    } payload;

    int pending;
};

struct Context_8248F790 {
    char padding[0xd54];
    struct State_8248F790 *state;
};

extern void *fn_8251F720(unsigned int *resource, int flags);
extern void fn_8234FC08(void *object);
extern void fn_8265CA20(void *object);
extern void *fn_8265C9E0(unsigned int size);
extern void *fn_8234F4F0(void *object, void *resource, void *owner);
extern void fn_8251FA58(void *resource);

static __forceinline int IsValid_8248F790(const unsigned int *resource)
{
    if (resource == 0) {
        return 0;
    }
    return *resource != 0;
}

static __forceinline void Replace_8248F790(void **payload, void *loaded)
{
    void *object = payload[1];
    if (object != 0) {
        fn_8234FC08(object);
        fn_8265CA20(object);
    }
    object = fn_8265C9E0(0x440);
    if (object != 0) {
        object = fn_8234F4F0(object, loaded, *payload);
    } else {
        object = 0;
    }
    payload[1] = object;
}

int fn_8248F790(struct Request_8248F790 **request, struct Context_8248F790 *context)
{
    struct State_8248F790 *state;
    unsigned int *resource;
    void *loaded;
    if ((*request)->type == 0x5a) {
        return 3;
    }
    if ((*request)->type != 0x9b) {
        return 4;
    }
    state = context->state;
    if (state->active != 0) {
        if (state->pending == 0 && state->payload.object != 0) {
            return 0;
        }
        state->active = 0;
        return 3;
    }
    resource = &(*request)->resource;
    if (IsValid_8248F790(resource)) {
        void **payload = &state->payload.owner;
        loaded = fn_8251F720(resource, 0);
        Replace_8248F790(payload, loaded);
        if (loaded != 0) {
            fn_8251FA58(loaded);
        }
        state->active = 1;
        return 0;
    }
    return 3;
}
