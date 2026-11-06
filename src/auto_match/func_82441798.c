typedef struct Ev_82441798 { const char *name; int type; } Ev_82441798;
typedef struct Obj_82441798 {
    unsigned int flags;
    int pad4[6];
    int x1c;
    int jumped1;
    int jumped2;
    int pad28;
    int down1;
    int down2;
} Obj_82441798;

extern void fn_824BF8A8(void *ctx, Ev_82441798 *ev);
extern void fn_82441298(Obj_82441798 *o, const char *name, void *ctx);

void fn_82441798(Obj_82441798 *o, void *ctx)
{
    Ev_82441798 ev;
    unsigned int f = o->flags;
    unsigned int b1 = (f >> 10) & 1;
    unsigned int b2;
    int start1;
    int stop1;
    int start2;
    int stop2;
    if (b1 != 0 && o->down1 == 0) {
        start1 = 1;
    } else {
        start1 = 0;
    }
    if (b1 == 0 && o->down1 != 0) {
        stop1 = 1;
    } else {
        stop1 = 0;
    }
    b2 = (f >> 11) & 1;
    o->down1 = b1;
    if (b2 != 0 && o->down2 == 0) {
        start2 = 1;
    } else {
        start2 = 0;
    }
    if (b2 == 0 && o->down2 != 0) {
        stop2 = 1;
    } else {
        stop2 = 0;
    }
    o->down2 = b2;
    if (f & 0x100000) {
        ev.name = "hurdles_video";
        ev.type = 7;
        fn_824BF8A8(ctx, &ev);
    }
    if (o->flags & 8) {
        ev.name = "hurdles_getready";
        ev.type = 7;
        fn_824BF8A8(ctx, &ev);
        ev.name = "hurdles_jumping";
        ev.type = 7;
        fn_824BF8A8(ctx, &ev);
    }
    if (o->flags & 0x4000) {
        o->x1c = 1;
    }
    fn_82441298(o, "hurdles_running", ctx);
    if (start1 || start2) {
        ev.name = "hurdles_running";
        ev.type = 4;
        fn_824BF8A8(ctx, &ev);
    }
    if (stop1 || stop2) {
        ev.name = "hurdles_running";
        ev.type = 5;
        fn_824BF8A8(ctx, &ev);
    }
    if (o->flags & 0x10000) {
        o->jumped1 = 1;
    }
    if (o->flags & 0x40000) {
        o->jumped2 = 1;
    }
    if (start1) {
        ev.name = "hurdles_clearing_instant_p1";
        ev.type = 7;
        fn_824BF8A8(ctx, &ev);
    }
    if (start2) {
        ev.name = "hurdles_clearing_instant_p2";
        ev.type = 7;
        fn_824BF8A8(ctx, &ev);
    }
    if (o->flags & 0x8000) {
        int t = ((o->jumped1 == 0) ^ 1) + 8;
        ev.name = "hurdles_jumping";
        ev.type = t;
        fn_824BF8A8(ctx, &ev);
        ev.name = "hurdles_clearing_instant_p1";
        ev.type = t;
        fn_824BF8A8(ctx, &ev);
        o->jumped1 = 0;
    }
    if (o->flags & 0x20000) {
        int t = ((o->jumped2 == 0) ^ 1) + 8;
        ev.name = "hurdles_jumping";
        ev.type = t;
        fn_824BF8A8(ctx, &ev);
        ev.name = "hurdles_clearing_instant_p2";
        ev.type = t;
        fn_824BF8A8(ctx, &ev);
        o->jumped2 = 0;
    }
}
