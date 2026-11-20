#include <string.h>

typedef struct Player_827F6538 {
    void *clip; /* 0x0 */
    char pad4[0xc4];
} Player_827F6538;

typedef struct Blend_827F6538 {
    char pad0[0x18];
    float weight; /* 0x18 */
} Blend_827F6538;

typedef struct Events_827F6538 {
    void *head; /* 0x0 */
    char pad4[0x1c];
} Events_827F6538;

typedef struct Animation_827F6538 {
    char pad0[0x24];
    Player_827F6538 player; /* 0x24 */
    Blend_827F6538 blend;   /* 0xec */
    char pad108[0x1c];
    Events_827F6538 events; /* 0x124 */
    char bounds[0x94];      /* 0x144 */
    void *instance;         /* 0x1d8 */
} Animation_827F6538;

extern char lbl_8320A3E0[];
extern void fn_827FA000(Player_827F6538 *player, void *clip);
extern void fn_827F9DE0(Player_827F6538 *player, void *owner);
extern void fn_827FE938(Events_827F6538 *events, void *source);
extern void fn_827F6210(Animation_827F6538 *self, float value);
extern void fn_827F62A8(Animation_827F6538 *self, float time, unsigned char flag);
extern void fn_827F9BA0(Player_827F6538 *player, void *bounds);
extern unsigned short fn_827FE3C0(Player_827F6538 *player);
extern void *fn_827FE8D8(Player_827F6538 *player);
extern void *fn_82811080(char *pool, void *source, void *name);
extern void fn_827F9FF8(Player_827F6538 *player, void *object);
extern void *fn_827F9C98(Player_827F6538 *player);
extern void fn_827F9CF8(Player_827F6538 *player, void *object);
extern void *fn_82811438(void *buf, int *code, int n);

void fn_827F6538(Animation_827F6538 *self, void *clip, void *source, float time, float value, void *owner)
{
    void *prototype;
    void *object;
    int code;
    char buf[16];

    memset(&self->blend, 0, sizeof(self->blend));
    self->player.clip = 0;
    self->events.head = 0;
    self->blend.weight = 1.0f;
    fn_827FA000(&self->player, clip);
    fn_827F9DE0(&self->player, owner);
    if (source != 0) {
        fn_827FE938(&self->events, source);
    }
    fn_827F6210(self, value);
    fn_827F62A8(self, time, 0);
    fn_827F9BA0(&self->player, self->bounds);
    if (fn_827FE3C0(&self->player) != 0) {
        code = 0;
        fn_827F9FF8(&self->player,
                    fn_82811080(lbl_8320A3E0, fn_827FE8D8(&self->player), fn_82811438(buf, &code, 0x10)));
    }
    prototype = fn_827F9C98(&self->player);
    if (prototype != 0) {
        code = 0;
        object = fn_82811080(lbl_8320A3E0, prototype, fn_82811438(buf, &code, 0x10));
        self->instance = object;
        fn_827F9CF8(&self->player, object);
    }
}
