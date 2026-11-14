long _InterlockedExchange(long volatile *target, long value);

typedef struct Manager_824BEEE8 {
    char pad0[0x50];
    int f50;            // 0x50
    int f54;            // 0x54
    int f58;            // 0x58
} Manager_824BEEE8;

typedef struct Owner_824BEEE8 {
    char pad0[0xd8];
    int fd8;            // 0xd8
    int pad_dc;
    long state;         // 0xe0
    int fe4;            // 0xe4
} Owner_824BEEE8;

extern Manager_824BEEE8 *lbl_83276594;
extern void fn_8245D538(void);
extern void fn_8245E230(Manager_824BEEE8 *mgr);
extern void fn_8245DD40(Manager_824BEEE8 *mgr);
extern void *fn_8245A5C8(void);
extern void fn_8245AA30(void *p);

static __forceinline Manager_824BEEE8 *GetManager(void)
{
    if (lbl_83276594 == 0)
        fn_8245D538();
    return lbl_83276594;
}

void fn_824BEEE8(Owner_824BEEE8 *self)
{
    Manager_824BEEE8 *mgr;

    fn_8245E230(GetManager());
    mgr = GetManager();
    {
        int *pF58 = &mgr->f58;
        *pF58 = 0;
    }
    if (mgr->f54 != 0 && mgr->f58 == 0 && mgr->f50 == 0)
        fn_8245DD40(mgr);
    fn_8245AA30(fn_8245A5C8());
    self->fd8 = 0;
    self->fe4 = 0xc;
    _InterlockedExchange(&self->state, 1);
}
