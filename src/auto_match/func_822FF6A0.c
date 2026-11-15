extern void fn_822CAA28(void *self);
extern void fn_82230110(void *out, const char *text);
extern void *fn_822B27E8(void *out, void *name, const char *suffix);
extern void fn_82230300(void *string, int release, int unused);
extern void *fn_828EA268(int count);
extern void fn_82897DF8(void *state, void *owner, void *name);

typedef struct Object_822FF6A0 {
    char pad0[0x20c];
    char state[0xc]; /* 0x20c */
    int value;       /* 0x218 */
    char pad1[0x48];
    unsigned char active; /* 0x264 */
    char pad2[3];
    int count;     /* 0x268 */
    int capacity;  /* 0x26c */
    void *storage; /* 0x270 */
} Object_822FF6A0;

typedef struct State_822FF6A0 {
    char prefix[0xc];
    int value;
    char pad[0x48];
    unsigned char active;
    char alignment[3];
    int count;
    int capacity;
    void *storage;
} State_822FF6A0;

static __forceinline void Initialize_822FF6A0(State_822FF6A0 *state, Object_822FF6A0 *self, void *baseName)
{
    char stateName[32];
    void *name = fn_822B27E8(stateName, baseName, "_state");
    state->value = 0;
    state->active = 0;
    state->count = 0;
    state->capacity = 0x22;
    state->storage = fn_828EA268(0x22);
    fn_82897DF8(state, self, name);
    fn_82230300(stateName, 1, 0);
}

void fn_822FF6A0(Object_822FF6A0 *self)
{
    char baseName[32];
    fn_822CAA28(self);
    fn_82230110(baseName, "Football Mind States");
    Initialize_822FF6A0((State_822FF6A0 *)self->state, self, baseName);
    fn_82230300(baseName, 1, 0);
}
