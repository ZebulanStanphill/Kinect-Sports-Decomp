typedef struct Player_82487BA8 {
    char pad0[0x7ac];
    int f7ac;
    int f7b0;
} Player_82487BA8;

typedef struct Member_82487BA8 {
    char pad0[0x448];
    Player_82487BA8 *player;   /* 0x448 */
    void *other;               /* 0x44c */
    int func;                  /* 0x450 */
} Member_82487BA8;

typedef struct Obj_82487BA8 {
    char *vt;
    int pad4[3];
    Member_82487BA8 m;         /* 0x10 */
} Obj_82487BA8;

extern char lbl_821BE91C[], lbl_821BE838[];
extern void fn_82286BF0(Player_82487BA8 *p);
extern void fn_8227FFA8(void *p);
extern void fn_8265CA20(void *p);
extern void fn_82359C18(void *p);

static __forceinline void Player_Stop(Player_82487BA8 *p)
{
    p->f7ac = 0;
    p->f7b0 = 0;
}

static __forceinline void Member_Dtor(Member_82487BA8 *m)
{
    if (m->player != 0) {
        Player_82487BA8 *p;
        Player_Stop(m->player);
        p = m->player;
        if (p != 0) {
            fn_82286BF0(p);
            fn_8265CA20(p);
        }
    }
    if (m->other != 0) {
        void *o = m->other;
        fn_8227FFA8(o);
        fn_8265CA20(o);
    }
    fn_82359C18(&m->func);
}

void fn_82487BA8(Obj_82487BA8 *self)
{
    self->vt = lbl_821BE91C;
    Member_Dtor(&self->m);
    self->vt = lbl_821BE838;
}
