extern void *memset(void *, int, unsigned int);

typedef struct List_82A6B4B0 {
    int v[5];
} List_82A6B4B0;

typedef struct Obj_82A6B4B0 {
    char pad0[0x18];
    List_82A6B4B0 lists[4]; /* 0x18 */
    char pad68[0x94 - 0x68];
    void *a;                /* 0x94 */
    char pad98[0xa0 - 0x98];
    void *b;                /* 0xa0 */
    char pada4[0xa8 - 0xa4];
} Obj_82A6B4B0;

extern void fn_82C44798(Obj_82A6B4B0 *self);
extern void fn_82C44778(Obj_82A6B4B0 *self);
extern void fn_82A812C8(List_82A6B4B0 *list);
extern void fn_82C449C8(List_82A6B4B0 *list);
extern void fn_82C2B590(void *p);

void fn_82A6B4B0(Obj_82A6B4B0 *self)
{
    fn_82C44798(self);
    fn_82A812C8(&self->lists[0]);
    fn_82A812C8(&self->lists[1]);
    fn_82A812C8(&self->lists[2]);
    fn_82A812C8(&self->lists[3]);
    if (self->a != 0) {
        fn_82C2B590(self->a);
        self->a = 0;
    }
    if (self->b != 0) {
        fn_82C2B590(self->b);
        self->b = 0;
    }
    memset(self, 0, sizeof(*self));
    fn_82C44778(self);
    fn_82C449C8(&self->lists[0]);
    fn_82C449C8(&self->lists[1]);
    fn_82C449C8(&self->lists[2]);
    fn_82C449C8(&self->lists[3]);
}
