typedef struct Hdr {
    unsigned short type;
    unsigned short size;
} Hdr;

typedef struct Rec {
    char pad[0xc];
    Hdr hdr;
    char data[1];
} Rec;

typedef struct List {
    int items[5];
    int count;
} List;
typedef struct Obj {
    char pad[0x8dc];
    List list;
} Obj;

extern int fn_8251F720(int, int);
extern int fn_8251FA58(Rec *);
extern void *fn_825200F0(void *, int);
extern int fn_82554D38(void);
extern int fn_82554E20(int, void *);
extern int fn_825551A8(int, int);
extern int fn_82558B08(void);
extern int fn_82638D10(int, int);
extern unsigned char fn_827D6968(int, void *, int);
extern int lbl_821CAB38[];
extern int lbl_8320A898;
extern int lbl_83265A24;

static void process(Obj *o, Rec *r)
{
    if (r->hdr.type == 0x37) {
        List *l = &o->list;
        l->items[l->count + 1] = fn_82554D38();
        fn_82554E20(l->items[l->count + 1], r->data);
        fn_82558B08();
        fn_825551A8(l->items[l->count + 1], 0);
        fn_82638D10(lbl_8320A898, 1);
        fn_82558B08();
        l->count = l->count + 1;
    }
}
void fn_825BC7F0(Obj *o, int arg)
{
    Rec *first;
    Rec *r;
    char buf[32];

    fn_825200F0(buf, arg);
    if (fn_827D6968(lbl_83265A24, buf, -1)) {
        first = (Rec *)fn_8251F720(arg, 1);
        r = first;
        if (first != 0) {
            while (r->hdr.type != 0) {
                process(o, r);
                r = (Rec *)((char *)r + lbl_821CAB38[r->hdr.type]);
            }
            fn_8251FA58(first);
        }
    }
}
