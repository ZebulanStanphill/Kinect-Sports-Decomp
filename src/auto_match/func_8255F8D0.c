typedef struct Player_8255F8D0 {
    void *clip; /* 0x00 */
    char unknown04[0xfc];
} Player_8255F8D0;

typedef struct Definition_8255F8D0 {
    void *vtable; /* 0x0 */
    void *clip;   /* 0x4 */
    int unknown8; /* 0x8 */
} Definition_8255F8D0;

typedef struct Animation_8255F8D0 {
    void *vtable; /* 0x000 */
    char unknown004[0x20];
    char player[0x1b4]; /* 0x024 */
    void *instance;     /* 0x1d8 */
    void *owner;        /* 0x1dc */
    void *clip;         /* 0x1e0 */
    float time;         /* 0x1e4 */
} Animation_8255F8D0;

typedef struct Source_8255F8D0 {
    void **owner; /* 0x0 */
    void *clip;   /* 0x4 */
} Source_8255F8D0;

extern char lbl_821C52A4[];
extern char lbl_8320A3E0[];
extern void fn_827FA000(Player_8255F8D0 *player, void *clip);
extern unsigned int fn_827F9C98(Player_8255F8D0 *player);
extern char *fn_82522D98(unsigned int size);
extern void *fn_827F5F00(unsigned int size, void *memory);
extern void *fn_827F5DD0(unsigned int size, void *memory);
extern Definition_8255F8D0 *fn_827F5FE8(Definition_8255F8D0 *self, void *clip, int unknown);
extern Animation_8255F8D0 *fn_827F6700(Animation_8255F8D0 *self, Definition_8255F8D0 *definition,
                                       const char *name, float x, float y, int flags);
extern void *fn_82811438(void *buffer, int *code, int size);
extern void fn_82811238(void *pool, void *instance, void *name);
extern void fn_827F9CF8(void *player, void *instance);

Animation_8255F8D0 *fn_8255F8D0(Source_8255F8D0 *self, float x, float y, int flags)
{
    Player_8255F8D0 player;
    unsigned int instanceSize;
    char *memory;
    Animation_8255F8D0 *animation;
    Definition_8255F8D0 *definition;

    fn_827FA000(&player, self->clip);
    instanceSize = fn_827F9C98(&player);
    memory = fn_82522D98(instanceSize + 0x200);
    animation = (Animation_8255F8D0 *)fn_827F5F00(0x1e8, memory);
    if (animation != 0) {
        definition = (Definition_8255F8D0 *)fn_827F5DD0(0xc, memory + 0x1f0);
        if (definition != 0) {
            definition = fn_827F5FE8(definition, self->clip, 0);
        } else {
            definition = 0;
        }
        fn_827F6700(animation, definition, 0, x, y, flags);
        animation->vtable = lbl_821C52A4;
        if (self->owner != 0) {
            animation->owner = *self->owner;
        } else {
            animation->owner = 0;
        }
        animation->time = 0.0f;
        animation->clip = self->clip;
    } else {
        animation = 0;
    }
    if (instanceSize != 0) {
        int code = 3;
        char name[0x20];

        fn_82811438(name, &code, 0x10);
        fn_82811238(lbl_8320A3E0, animation->instance, name);
        animation->instance = 0;
        fn_827F9CF8(animation->player, memory + 0x200);
    }
    return animation;
}
