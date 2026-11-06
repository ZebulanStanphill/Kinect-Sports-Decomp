typedef struct Ent_8232C490 {
    char pad0[0x27c];
    int other;
    char pad280[0x5c0 - 0x280];
    unsigned int cur;
    char pad5c4[0x6c4 - 0x5c4];
    unsigned int target;
    char pad6c8[0x7a4 - 0x6c8];
    int busy;
} Ent_8232C490;

typedef struct Obj_8232C490 {
    int pad0;
    Ent_8232C490 *ent;
    char pad8[0x64 - 8];
    void *child;
} Obj_8232C490;

extern void fn_8232C528(Obj_8232C490 *o, int mode);
extern void fn_8232CBD8(void *child, float dt);

void fn_8232C490(Obj_8232C490 *o, float dt)
{
    Ent_8232C490 *e;
    Ent_8232C490 *other;

    e = o->ent;
    if (e->other == 0) {
        return;
    }
    other = (Ent_8232C490 *)e->other;
    if (e->busy != 0) {
        fn_8232C528(o, 5);
    } else if (other->cur == other->target) {
        fn_8232C528(o, 1);
    } else if (other->busy != 0) {
        fn_8232C528(o, 0);
    }
    fn_8232CBD8(o->child, dt);
}
