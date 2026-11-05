extern void fn_826308A0(int, int, int, int);
extern void fn_82855AB0(void);
extern void fn_82856218(void *, void *, void *, void *);
extern void fn_828583D8(void *);
extern void __dcbt(int, const void *);
typedef struct Dst_82857BA0 { char pad[0x120]; char **p; } Dst_82857BA0;
typedef struct Obj_82857BA0 { int p0; int f4; char pad[0x6940 - 8]; unsigned f6940; } Obj_82857BA0;
void fn_82857BA0(Obj_82857BA0 *o, Dst_82857BA0 *d, void *c, void *e)
{
    char *a = *d->p;
    __dcbt(0, a);
    __dcbt(0x80, a);
    __dcbt(0x100, a);
    __dcbt(0x180, a);
    fn_82855AB0();
    fn_828583D8(o);
    fn_82856218(o, d, c, e);
    if (o->f6940 != 0)
        fn_826308A0(o->f4, 0, o->f6940, 0);
}
