typedef struct Result_8244FE38 {
    char pad0[0xfc];
    unsigned char shown;        /* 0xfc */
    char padFD[3];
    unsigned int place;         /* 0x100 */
    char pad104[8];
    int worldRecord;            /* 0x10c */
    int personalBest;           /* 0x110 */
} Result_8244FE38;

typedef struct Anim_8244FE38 {
    char pad[0x40];
    unsigned int state;         /* 0x40 */
} Anim_8244FE38;

typedef struct Player_8244FE38 {
    char pad[0xa0];
    int anim;                   /* 0xa0 */
    void *actor;                /* 0xa4 */
} Player_8244FE38;

typedef struct Self_8244FE38 {
    char pad[0x40];
    Player_8244FE38 **players;  /* 0x40 */
    Result_8244FE38 *result;    /* 0x44 */
} Self_8244FE38;

extern const char *fn_82437130(Self_8244FE38 *self, const char *name);
extern void fn_82508078(void *actor, const char *name, int flags);


static __forceinline void Play(Self_8244FE38 *self, Player_8244FE38 *p, const char *name)
{
    void *actor = p->actor;
    fn_82508078(actor, fn_82437130(self, name), 0);
}

void fn_8244FE38(Self_8244FE38 *self)
{
    Player_8244FE38 *p;

    self->result->shown = 1;
    p = *self->players;
    if (p->anim != 0 && ((Anim_8244FE38 *)p->anim)->state == 1)
        return;
    if (self->result->worldRecord != 0)
        Play(self, p, "finish_worldrecord");
    else if (self->result->personalBest != 0)
        fn_82508078(p->actor, "personalbest", 0);
    else {
        switch (self->result->place) {
        case 1:
            Play(self, p, "finish_1st");
            break;
        case 2:
            Play(self, p, "finish_2nd");
            break;
        case 3:
            Play(self, p, "finish_3rd");
            break;
        default:
            Play(self, p, "finish_bad");
            break;
        }
    }
}
