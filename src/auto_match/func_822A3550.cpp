struct Value_822A3550;

struct Ref_822A3550 {
    void *movie; /* 0x0 */
    void *rep;   /* 0x4 */
};

struct Bowl_822A3550 {
    int valid;        /* 0x00 */
    char score[0x10]; /* 0x04 */
    int strike;       /* 0x14 */
};

struct Frame_822A3550 {
    int valid;              /* 0x00 */
    char score[0x10];       /* 0x04 */
    Bowl_822A3550 bowls[3]; /* 0x14 */
};

struct Player_822A3550 {
    int active;                /* 0x000 */
    Frame_822A3550 frames[10]; /* 0x004 */
};

struct ScoreBoard_822A3550 {
    char pad0[0x1188];
    Player_822A3550 players[4]; /* 0x1188 */
    int dirty;                  /* 0x1ff8 */
};

extern "C" void fn_8227BA18(ScoreBoard_822A3550 *self);
extern "C" void fn_82273CD8(Value_822A3550 *value, int type);
extern "C" void fn_82273C88(Value_822A3550 *value);
extern "C" Ref_822A3550 *fn_82279C58(Ref_822A3550 *ret, ScoreBoard_822A3550 *owner);
extern "C" void fn_82672C20(void *movie, const char *path, Value_822A3550 *args, int count);
extern "C" void fn_822315A0(void *rep);

struct Value_822A3550 {
    int w0;   /* 0x0 */
    int type; /* 0x4 */

    union {
        const char *s;
        double d;
        bool b;
    } u; /* 0x8 */

    __forceinline Value_822A3550()
    {
        w0 = 0;
        type = 0;
    }

    __forceinline ~Value_822A3550()
    {
        fn_82273C88(this);
    }

    __forceinline void SetNumber(double value)
    {
        fn_82273CD8(this, 3);
        u.d = value;
    }

    __forceinline void SetString(const char *value)
    {
        fn_82273CD8(this, 4);
        u.s = value;
    }

    __forceinline void SetBoolean(bool value)
    {
        fn_82273CD8(this, 2);
        u.b = value;
    }
};

extern "C" void fn_822A3550(ScoreBoard_822A3550 *self)
{
    unsigned int player;
    unsigned int frame;
    unsigned int bowl;
    Player_822A3550 *p;
    Frame_822A3550 *f;
    Bowl_822A3550 *b;

    fn_8227BA18(self);
    if (self->dirty == 0) {
        return;
    }
    for (player = 0; player < 4; player++) {
        p = &self->players[player];
        if (p->active == 0) {
            break;
        }
        for (frame = 0; frame < 10; frame++) {
            f = &p->frames[frame];
            if (f->valid == 0) {
                break;
            }
            {
                Value_822A3550 args[3];
                Ref_822A3550 ref;

                args[0].SetNumber(player);
                args[1].SetNumber(frame + 1);
                args[2].SetString(f->score);
                fn_82672C20(fn_82279C58(&ref, self)->movie, "_root.mainCtrl.setFrameScore", args, 3);
                if (ref.rep != 0) {
                    fn_822315A0(ref.rep);
                }
                for (bowl = 0; bowl < 3; bowl++) {
                    b = &f->bowls[bowl];
                    if (b->valid == 0) {
                        break;
                    }
                    {
                        Value_822A3550 bowlArgs[5];
                        Ref_822A3550 bowlRef;

                        bowlArgs[0].SetNumber(player);
                        bowlArgs[1].SetNumber(frame + 1);
                        bowlArgs[2].SetNumber(bowl + 1);
                        bowlArgs[3].SetString(b->score);
                        bowlArgs[4].SetBoolean(b->strike != 0);
                        fn_82672C20(fn_82279C58(&bowlRef, self)->movie, "_root.mainCtrl.setBowlScore",
                                    bowlArgs, 5);
                        if (bowlRef.rep != 0) {
                            fn_822315A0(bowlRef.rep);
                        }
                    }
                }
            }
        }
    }
    self->dirty = 0;
}
