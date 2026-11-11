/* Destructor: under the object's lock, clears the owner pointer (+8) of every value in the map at
   0x28, then destroys the map's storage, the map, the lock and the base. */
typedef struct { int first; int second; } Pair_826879D8;
typedef struct { char **p; int idx; } Iter_826879D8;
typedef struct { Pair_826879D8 pr; Iter_826879D8 it; Iter_826879D8 tmp; } Loc_826879D8;
typedef struct { int pad[2]; void *owner; } Value_826879D8;
typedef struct { char pad[0x14]; Value_826879D8 *value; } Entry_826879D8;

typedef struct Obj_826879D8 {
    void *vtable;
    int pad04[2];
    char lock[0x1c];
    char map[4];
    void *storage;
} Obj_826879D8;

extern char lbl_82005B74[];
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern Iter_826879D8 *fn_82686EE8(Iter_826879D8 *ret, void *map);
extern unsigned char fn_826A8E58(Iter_826879D8 *it, Pair_826879D8 *pr);
extern void fn_8273CF58(Iter_826879D8 *it);
extern void fn_8267BC98(void *p);
extern void fn_82686488(void *map);
extern void fn_826EA050(void *lock);
extern void fn_8267C488(Obj_826879D8 *self);

void fn_826879D8(Obj_826879D8 *self)
{
    Loc_826879D8 L;
    Iter_826879D8 *r;

    self->vtable = lbl_82005B74;
    RtlEnterCriticalSection(self->lock);
    r = fn_82686EE8(&L.tmp, self->map);
    L.pr.first = 0;
    L.pr.second = 0;
    L.it = *r;
    if (fn_826A8E58(&L.it, &L.pr) == 0) {
        L.pr.first = 0;
        L.pr.second = 0;
        do {
            ((Entry_826879D8 *)(*L.it.p + L.it.idx * 16))->value->owner = 0;
            fn_8273CF58(&L.it);
        } while (fn_826A8E58(&L.it, &L.pr) == 0);
    }
    RtlLeaveCriticalSection(self->lock);
    if (self->storage != 0)
        fn_8267BC98(self->storage);
    fn_82686488(self->map);
    fn_826EA050(self->lock);
    fn_8267C488(self);
}
