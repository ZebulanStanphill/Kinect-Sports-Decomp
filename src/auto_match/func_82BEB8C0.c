typedef struct { char data[8]; } Iter_82BEB8C0;

typedef struct Manager_82BEB8C0 {
    char pad0[0x2c];
    char lock[4];
} Manager_82BEB8C0;

typedef struct Group_82BEB8C0 {
    char pad0[0xc];
    const char *name;
    char pad10[4];
    Iter_82BEB8C0 requests; /* 0x14 */
    char pad1c[4];
    void *active;           /* 0x20 */
} Group_82BEB8C0;

extern Manager_82BEB8C0 *lbl_8322B1D8;
extern int fn_82BEA200(void *lock, const char *name);
extern void fn_82BEA230(void *lock, const char *name);
extern void fn_82BE5340(Iter_82BEB8C0 *it);
extern void fn_82BE5350(Iter_82BEB8C0 *it);
extern void *fn_82BE5378(Iter_82BEB8C0 *it);
extern int fn_82BE5B48(void *request);
extern void fn_82BE6718(void *request);

int fn_82BEB8C0(Group_82BEB8C0 *self)
{
    void *cur;

    if (fn_82BEA200(lbl_8322B1D8->lock, self->name) == 0) {
        return 0x2c0;
    }
    if (self->active == 0) {
        fn_82BEA230(lbl_8322B1D8->lock, self->name);
        return 0x3ea;
    }
    fn_82BE5340(&self->requests);
    while ((cur = fn_82BE5378(&self->requests)) != 0) {
        if (fn_82BE5B48(cur) != 0) {
            fn_82BE6718(cur);
        }
        fn_82BE5350(&self->requests);
    }
    fn_82BEA230(lbl_8322B1D8->lock, self->name);
    return 0;
}
