struct Root_824D3210;

typedef struct ViewVt_824D3210 {
    void *slot00[2];
    struct Root_824D3210 *(*getRoot)(void *self); /* 0x08 */
} ViewVt_824D3210;

typedef struct View_824D3210 {
    ViewVt_824D3210 *vt;
} View_824D3210;

typedef struct Root_824D3210 {
    char reserved000[0x9cc];
    char firstHand[0x54]; /* 0x9cc */
    char secondHand[4];   /* 0xa20 */
} Root_824D3210;

typedef struct Player_824D3210 {
    char reserved000[0x14];
    View_824D3210 *view; /* 0x14 */
    char reserved018[8];
    int skeleton; /* 0x20 */
    char reserved024[0xcc];
    char secondTracker[0x45c]; /* 0xf0 */
    float smoothing;           /* 0x54c */
    char reserved550[0x20];
    char firstTracker[0x480]; /* 0x570 */
    char gesture[4];          /* 0x9f0 */
} Player_824D3210;

extern int fn_824CD030();
extern unsigned int fn_824D3368(Player_824D3210 *self);
extern unsigned int fn_824D33E8(Player_824D3210 *self);
extern void fn_824DBC48(void *tracker, int skeleton, float dt, unsigned int first, unsigned int second);
extern void fn_824DCBE8(void *gesture, int skeleton, float smoothing, float dt);
extern void fn_828AAF70(void *hand, int active);
extern void fn_824CEC28(Player_824D3210 *self);
extern void fn_824CCAE8(Player_824D3210 *self, float dt);

void fn_824D3210(Player_824D3210 *self, float dt)
{
    int skeleton;
    View_824D3210 *view;

    if (fn_824CD030(self) != 0) {
        skeleton = self->skeleton;
        if (skeleton != 0) {
            fn_824DBC48(self->firstTracker, skeleton, dt, fn_824D33E8(self), fn_824D3368(self));
            fn_824DBC48(self->secondTracker, skeleton, dt, fn_824D33E8(self), fn_824D3368(self));
            fn_824DCBE8(self->gesture, skeleton, self->smoothing, dt);
            view = self->view;
            if (view != 0) {
                fn_828AAF70(view->vt->getRoot(view)->firstHand, fn_824D33E8(self) != 0);
                fn_828AAF70(view->vt->getRoot(view)->secondHand, fn_824D3368(self) != 0);
            }
        }
    }
    fn_824CEC28(self);
    fn_824CCAE8(self, dt);
}
