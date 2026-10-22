typedef struct { char pad[0x10]; void *alloc; } Mgr;
extern Mgr *fn_82CE5410(void);
extern void fn_82CFBF28(void *, void *);
extern void *fn_82CFFFC8(void);
extern void *fn_82D00000(void *, void *);
extern void *fn_82D00060(void *, void *);
extern void fn_82D002A8(void *);
extern void fn_82D002F0(char *, void *, void *);

static void release(void *v)
{
    Mgr *m = fn_82CE5410();
    fn_82CFBF28(v, m->alloc);
}

void fn_82E1A7F0(void *map)
{
    char ok;
    void *it = fn_82CFFFC8();
    fn_82D002F0(&ok, map, it);
    while (ok) {
        release(fn_82D00000(map, it));
        it = fn_82D00060(map, it);
        fn_82D002F0(&ok, map, it);
    }
    fn_82D002A8(map);
}
