typedef unsigned char bool;
extern void fn_82631920();
extern void fn_82648160();
extern unsigned int fn_82A1BB18();
extern void fn_82A1E108();

typedef struct Mgr {
    char pad0[0x2a88];
    unsigned int threadId;
} Mgr;

extern Mgr *lbl_8320A898;
extern int lbl_8326B370;
extern bool lbl_83276742;

typedef struct Obj {
    char pad0[4];
    int done;
    int started;
} Obj;

void fn_825202C8(Obj *o)
{
    bool ready;

    for (;;) {
        if (o->started != 0 && o->done == 0) {
            ready = 1;
        } else {
            ready = 0;
        }
        if (ready)
            break;
        fn_82A1E108(10);
    }
    if (!lbl_83276742)
        return;
    for (;;) {
        unsigned int id;
        do {
            id = lbl_8320A898->threadId;
        } while (id != fn_82A1BB18());
        fn_82631920(lbl_8320A898, 0);
        fn_82648160(lbl_8320A898, lbl_8326B370, 0);
    }
}
