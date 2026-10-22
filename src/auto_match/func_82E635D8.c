typedef struct Obj Obj;
typedef struct {
    void *f0;
    void *f4;
    void (*Release)(Obj *);
} ObjVtbl;
struct Obj { ObjVtbl *vt; };

typedef struct {
    void *vt;
    char pad4[0x50];
    unsigned int count;
    Obj **items;
    void *f5c;
} Self;

extern void fn_82E4FE40(void *);
extern void fn_82E631F0(Self *);
extern char lbl_82154F90[];

void fn_82E635D8(Self *s)
{
    unsigned int i;

    s->vt = lbl_82154F90;
    if (s->items != 0) {
        for (i = 0; i < s->count; i++) {
            if (s->items[i] != 0) {
                s->items[i]->vt->Release(s->items[i]);
                s->items[i] = 0;
            }
        }
        if (s->items != 0) {
            fn_82E4FE40(s->items);
        }
    }
    if (s->f5c != 0) {
        fn_82E4FE40(s->f5c);
    }
    s->f5c = 0;
    fn_82E631F0(s);
}
