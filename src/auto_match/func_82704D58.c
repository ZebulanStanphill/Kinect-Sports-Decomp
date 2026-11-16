typedef struct Ref_82704D58 {
    int padding;
    long references;
} Ref_82704D58;

typedef struct Object_82704D58 {
    char padding[0xc];
    void *owner;
    char *state;
    void *queue;
    void *context;
} Object_82704D58;

extern long _InterlockedExchangeAdd(long *, long);
extern void fn_8268B330(unsigned int *);
extern unsigned char fn_826F8A98(void *, unsigned int *, unsigned int *, unsigned char *);
extern void fn_826959C8(void *);
extern void fn_82704528(void *, void *, void *, unsigned int *, unsigned int);
extern void fn_8267BE38(Ref_82704D58 *);

static __forceinline void release(unsigned int tagged)
{
    Ref_82704D58 *reference = (Ref_82704D58 *)(tagged & ~3u);
    if (_InterlockedExchangeAdd(&reference->references, -1) - 1 == 0) {
        fn_8267BE38(reference);
    }
}

unsigned char fn_82704D58(Object_82704D58 *self)
{
    unsigned int tagged;
    unsigned int value;
    unsigned char flag;
    unsigned char found;
    char *state;

    fn_8268B330(&tagged);
    found = fn_826F8A98(self->queue, &tagged, &value, &flag);
    state = self->state;
    if (state[0x78] != 0 && found != 0) {
        release(tagged);
    } else {
        if (found == 0) {
            release(tagged);
            return 0;
        }
        if (flag == 0 && (unsigned char)state[0x30] == 6) {
            fn_826959C8(state + 0x30);
        }
        fn_82704528(self->owner, self->state, self->context, &tagged, value);
        release(tagged);
    }
    return 1;
}
