typedef struct Link_826768C8 Link_826768C8;
struct Link_826768C8 {
    Link_826768C8 *next;    /* 0x0 */
    Link_826768C8 *prev;    /* 0x4 */
};

typedef struct Task_826768C8 Task_826768C8;
typedef struct {
    void *slots[17];
    void (*onCancel)(Task_826768C8 *);  /* 0x44 */
} TaskVtbl_826768C8;

struct Task_826768C8 {
    TaskVtbl_826768C8 *vtbl;            /* 0x00 */
    int pad4;
    Link_826768C8 link;                 /* 0x08 */
    char pad10[0xc];
    int pending;                        /* 0x1c */
};

extern unsigned char fn_8223AAC0(Task_826768C8 *self);
extern void fn_8267A538(Task_826768C8 *self, int state);
extern void fn_82670230(Task_826768C8 *self);

static __forceinline void unlinkLink(Link_826768C8 *l)
{
        l->next->prev = l->prev;
        l->prev->next = l->next;
        l->next = 0;
        l->prev = 0;
}

static __forceinline void unlink(Task_826768C8 *t)
{
    if (t->link.prev != 0)
        unlinkLink(&t->link);
}

void fn_826768C8(Task_826768C8 *self)
{
    self->pending = 0;
    if (fn_8223AAC0(self)) {
        self->vtbl->onCancel(self);
        fn_8267A538(self, 2);
        unlink(self);
        fn_82670230(self);
    } else {
        unlink(self);
    }
}
