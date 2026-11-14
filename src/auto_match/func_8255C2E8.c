typedef struct Info_8255C2E8 { int pad0[2]; void *handle; } Info_8255C2E8;
typedef struct Ref_8255C2E8 { Info_8255C2E8 *info; void *ref; } Ref_8255C2E8;
typedef struct Player_8255C2E8 Player_8255C2E8;
typedef struct User_8255C2E8 {
    char pad0[0x2fc];
    void *table;              /* 0x2fc */
    char pad300[0xd48 - 0x300];
    Player_8255C2E8 *player;  /* 0xd48 */
} User_8255C2E8;
typedef struct Item_8255C2E8 { char pad0[0x94]; unsigned int flags; } Item_8255C2E8;
typedef struct Self_8255C2E8 { char pad0[0xa]; unsigned short id; } Self_8255C2E8;

extern Ref_8255C2E8 *fn_8255BB98(Ref_8255C2E8 *out, Player_8255C2E8 *player);
extern void fn_822315A0(void *ref);
extern void *fn_8255BFC0(void *table, unsigned short id);
extern unsigned char fn_825BBCA0(User_8255C2E8 *user, void *entry);
extern unsigned char fn_828ACCE8(void *handle);
extern unsigned char fn_828AD740(void *handle);

/* fn_8255BB98 returns a reference-counted handle {info, ref} through the
   hidden pointer; each temporary is released after use */
unsigned char fn_8255C2E8(Self_8255C2E8 *self, User_8255C2E8 *user, Item_8255C2E8 *item)
{
    Player_8255C2E8 *player = user->player;
    unsigned char missing;
    Ref_8255C2E8 ref;
    Ref_8255C2E8 ref2;
    missing = fn_8255BB98(&ref, player)->info == 0;
    if (ref.ref != 0)
        fn_822315A0(ref.ref);
    if (missing)
        return 1;
    if (item != 0 && (item->flags & 0x2000000) == 0)
        return 1;
    if (self->id != 0)
        return fn_825BBCA0(user, fn_8255BFC0(user->table, self->id));
    {
        void *handle = fn_8255BB98(&ref2, player)->info->handle;
        if (ref2.ref != 0)
            fn_822315A0(ref2.ref);
        return fn_828ACCE8(handle) && fn_828AD740(handle);
    }
}
