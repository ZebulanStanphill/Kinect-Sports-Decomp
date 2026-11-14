typedef struct Actor_824FAF10 {
    char pad0[0x1b8];
    unsigned int id;
} Actor_824FAF10;

typedef struct Obj_824FAF10 {
    char pad0[0x30];
    int f30;
    char pad34[0x3c];
    Actor_824FAF10 *actor;
} Obj_824FAF10;

extern void fn_82520158(const char *name, int *out, int flags);
extern void fn_82502538(unsigned int id, int *idle, int *walk);
extern void fn_824FB0B0(Actor_824FAF10 *actor, int value);
extern void fn_82592238(Obj_824FAF10 *self, int *msg);

void fn_824FAF10(Obj_824FAF10 *self, int *msg)
{
    Actor_824FAF10 *actor = self->actor;
    int walk;
    int idle;

    if (actor != 0) {
        switch (msg[0]) {
        case 0x42:
            if (actor->id == (unsigned int)msg[2]) {
                fn_82520158("AnimActorWalk", &walk, 0);
                fn_82520158("AnimActorIdleStand", &idle, 0);
                fn_82502538(actor->id, &idle, &walk);
            }
            break;
        case 0x45:
            fn_824FB0B0(actor, self->f30);
            break;
        }
    }
    fn_82592238(self, msg);
}
