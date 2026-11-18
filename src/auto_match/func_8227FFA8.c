typedef struct Ref_8227FFA8 {
    void *ptr; /* 0x00 */
    int count; /* 0x04 */
} Ref_8227FFA8;

typedef struct Deletable_8227FFA8 {
    struct {
        void (*Delete)(struct Deletable_8227FFA8 *self, int flags); /* 0x00 */
    } *vt;
} Deletable_8227FFA8;

typedef struct Scene_8227FFA8 {
    struct {
        char pad[0x54];
        void (*Remove)(struct Scene_8227FFA8 *self, void *node); /* 0x54 */
    } *vt;
} Scene_8227FFA8;

typedef struct Game_8227FFA8 {
    char pad00[0x14];
    Scene_8227FFA8 *scene; /* 0x14 */
    void *world;           /* 0x18 */
    void *node;            /* 0x1c */
    char pad20[0x2c];
    Ref_8227FFA8 music;    /* 0x4c */
    Ref_8227FFA8 ambience; /* 0x54 */
    Ref_8227FFA8 crowd;    /* 0x5c */
    Ref_8227FFA8 effects;  /* 0x64 */
    char pad6c[0x10];
    Deletable_8227FFA8 *helper; /* 0x7c */
} Game_8227FFA8;

extern void *lbl_8320A898;

extern void fn_8263CBB0(void *handle, int group, unsigned int value, unsigned __int64 mask);
extern void fn_82280B40(Ref_8227FFA8 *ref);
extern void fn_82529320(void *world, int flags);

static __forceinline void Release_8227FFA8(Ref_8227FFA8 *ref)
{
    if (ref->ptr != 0) {
        fn_82280B40(ref);
    } else {
        ref->count = 0;
    }
}

void fn_8227FFA8(Game_8227FFA8 *self)
{
    Deletable_8227FFA8 *helper;

    fn_8263CBB0(lbl_8320A898, 0xb, 0, 0x100000);
    fn_8263CBB0(lbl_8320A898, 8, 0, 0x800000);
    fn_8263CBB0(lbl_8320A898, 0xe, 0, 0x20000);
    Release_8227FFA8(&self->music);
    Release_8227FFA8(&self->ambience);
    Release_8227FFA8(&self->effects);
    if (self->crowd.ptr != 0) {
        Release_8227FFA8(&self->crowd);
    }
    if (self->node != 0) {
        self->scene->vt->Remove(self->scene, self->node);
    }
    fn_82529320(self->world, 0);
    helper = self->helper;
    if (helper != 0) {
        helper->vt->Delete(helper, 1);
    }
}
