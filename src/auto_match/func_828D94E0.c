typedef struct Target_828D94E0 {
    char pad[0x8c];
    char *info;
} Target_828D94E0;

typedef struct Peer_828D94E0 {
    char pad[0x26];
    unsigned char ready;
    char pad27[0x25];
    char *state;
} Peer_828D94E0;

typedef struct State_828D94E0 {
    char pad[0x14];
    Target_828D94E0 *target;
    char pad18[4];
    unsigned char mode;
} State_828D94E0;

extern unsigned char fn_828B0528(Target_828D94E0 *target);
extern Peer_828D94E0 *fn_828B0488(State_828D94E0 *self);
extern unsigned char fn_828AD488(Target_828D94E0 *target);
extern unsigned char fn_828AD0F8(Target_828D94E0 *target);
extern unsigned char fn_828EDD40(char *info);
extern void fn_828B13E8(State_828D94E0 *self, int a, unsigned char mode);
extern void fn_828B14C0(State_828D94E0 *self, char *a, char *b);
extern void fn_828B1468(State_828D94E0 *self, int next);
extern void *fn_82897BD0(Peer_828D94E0 *peer);
extern int fn_82882158(void *p);
extern void *fn_828B0ED0(void *p, int a, int b);

void fn_828D94E0(State_828D94E0 *self, unsigned __int64 elapsed)
{
    Peer_828D94E0 *peer;
    char *info;
    if (!fn_828B0528(self->target)) {
        fn_828B1468(self, 7);
        return;
    }
    peer = fn_828B0488(self);
    if (peer == 0) {
        fn_828B1468(self, 7);
        return;
    }
    info = self->target->info;
    if (peer->ready) {
        if (fn_828AD488(self->target)) {
            fn_828B13E8(self, 1, self->mode);
            fn_828B14C0(self, info + 0x14, info + 0x40);
            fn_828B1468(self, 6);
            return;
        }
        if (!fn_828AD0F8(self->target)) {
            fn_828B1468(self, 7);
            return;
        }
        if (!fn_828EDD40(info)) {
            fn_828B1468(self, 7);
            return;
        }
        fn_828B13E8(self, 1, self->mode);
        fn_828B1468(self, 3);
        return;
    }
    if (fn_82882158(fn_82897BD0(peer)) != -1) {
        fn_828B1468(self, 7);
        return;
    }
    if (fn_828B0ED0(peer->state + 0x38, 1, 0) != 0) {
        fn_828B1468(self, 4);
        return;
    }
    if (elapsed > 7500)
        fn_828B1468(self, 7);
}
