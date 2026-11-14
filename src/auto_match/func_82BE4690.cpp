// Works out where an ad's 3D quad lands on screen (XMassiveAdClientSubscriber3D::CalculateImpressionData):
// the quad's centre, an optional callback with the projected points, the clamped screen rectangle,
// its diagonal size and how the quad faces the camera.
extern "C" void *fn_82BA02A8(void *p);

// fn_82BA02A8 is an empty function (blr) that the linker folded many trivial functions into; V3 and V2
// have an out-of-line empty constructor, so they are non-POD and returned through a hidden pointer.
struct V3_82BEEB88 {
    float x, y, z;
    __forceinline V3_82BEEB88() { fn_82BA02A8(this); }
    V3_82BEEB88 add(const V3_82BEEB88 &o) const;
};
typedef V3_82BEEB88 V3;

struct V2_82BE4690 {
    float x, y;
    __forceinline V2_82BE4690() { fn_82BA02A8(this); }
};

struct Rect_82BE4690 {
    unsigned int left, top, right, bottom;
};

struct Event_82BE4690 {
    V3 near;
    V3 center;
    V3 far;
    int user;
};

typedef int (*Callback_82BE4690)(Event_82BE4690 *ev);

struct Ad_82BE4690 {
    char pad0[0xc];
    int error;                  /* 0x0c */
    char pad10[0x6c - 0x10];
    void *lock;                 /* 0x6c */
    V3 normal;                  /* 0x70 */
    V3 cornerA;                 /* 0x7c */
    char pad88[0x94 - 0x88];
    V3 cornerB;                 /* 0x94 */
    char padA0[0xac - 0xa0];
    V3 min;                     /* 0xac */
    V3 max;                     /* 0xb8 */
    char padC4[0xc8 - 0xc4];
    Callback_82BE4690 callback; /* 0xc8 */
    int user;                   /* 0xcc */
    int visible;                /* 0xd0 */
    int flat;                   /* 0xd4 */
    float facing;               /* 0xd8 */
    unsigned int size;          /* 0xdc */
    V2_82BE4690 topLeft;        /* 0xe0 */
    V2_82BE4690 bottomRight;    /* 0xe8 */
};

extern "C" {
int fn_82BE94F0(void);
int fn_82BE9528(void);
void *fn_82BE92C0(void);
void *fn_82BE92E0(void);
Rect_82BE4690 *fn_82BE9200(void);
V3 *fn_82BE9300(void);
void *fn_82BE93B0(void);
int fn_82BEA200(void *lock, const char *name);
void fn_82BEA230(void *lock, const char *name);
unsigned short fn_82BEA038(const V3 *a, const V3 *b);
V3 fn_82BEEB50(const V3 &v, float s);
V3 fn_82BEEB18(const V3 *a, const V3 *b);
void fn_82BEEC00(V3 *v);
V2_82BE4690 fn_82BEEAC8(const V2_82BE4690 *a, const V2_82BE4690 *b);
double fn_82BEEAB0(const V2_82BE4690 *v);
void fn_82BE4008(const V3 *pos, void *view, void *proj, Rect_82BE4690 *vp, V2_82BE4690 *out);
}

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

extern "C" int fn_82BE4690(Ad_82BE4690 *self)
{
    void *view;
    void *proj;
    Rect_82BE4690 *vp;
    V2_82BE4690 *br;
    V2_82BE4690 *tl;

    self->visible = 0;
    self->flat = 0;
    tl = &self->topLeft;
    br = &self->bottomRight;
    tl->x = -1.0f;
    self->topLeft.y = -1.0f;
    br->x = -1.0f;
    self->bottomRight.y = -1.0f;
    if (fn_82BE94F0() == 0 || fn_82BE9528() == 0)
        return 0;
    view = fn_82BE92C0();
    proj = fn_82BE92E0();
    vp = fn_82BE9200();
    if (view == 0 || proj == 0 || vp == 0)
        return 0;
    if (self->lock == 0 || fn_82BEA200(self->lock, "XMassiveAdClientSubscriber3D::CalculateImpressionData") == 0) {
        self->error = 0x69;
        return 0;
    }
    fn_82BEA230(self->lock, "XMassiveAdClientSubscriber3D::CalculateImpressionData");
    if (fn_82BEA038(&self->min, &self->max) == 0)
        return 1;
    V3 center = fn_82BEEB50(self->min.add(self->max), 2.0f);
    self->flat = fn_82BEA038(&center, &center) == 2;
    if (self->callback != 0) {
        Event_82BE4690 ev;
        V3 a = fn_82BEEB50(self->cornerA.add(center), 2.0f);
        V3 b = fn_82BEEB50(self->cornerB.add(center), 2.0f);
        ev.user = self->user;
        ev.center = center;
        ev.near = a;
        ev.far = b;
        if (self->callback(&ev) != 0)
            return 1;
    }
    self->visible = 1;
    fn_82BE4008(&self->cornerA, fn_82BA02A8(view), fn_82BA02A8(proj), vp, tl);
    fn_82BE4008(&self->cornerB, fn_82BA02A8(view), fn_82BA02A8(proj), vp, br);
    self->bottomRight.x = MIN(self->bottomRight.x, (float)vp->right);
    self->bottomRight.x = MAX(self->bottomRight.x, (float)vp->left);
    self->bottomRight.y = MIN(self->bottomRight.y, (float)vp->bottom);
    self->bottomRight.y = MAX(self->bottomRight.y, (float)vp->top);
    self->topLeft.x = MIN(self->topLeft.x, (float)vp->right);
    self->topLeft.x = MAX(self->topLeft.x, (float)vp->left);
    self->topLeft.y = MIN(self->topLeft.y, (float)vp->bottom);
    self->topLeft.y = MAX(self->topLeft.y, (float)vp->top);
    V2_82BE4690 diag = fn_82BEEAC8(br, tl);
    self->size = (unsigned int)fn_82BEEAB0(&diag);
    V3 *eye = fn_82BE9300();
    void *cam = fn_82BE93B0();
    if (eye == 0 || cam == 0)
        return 0;
    V3 dir = fn_82BEEB18(&center, eye);
    fn_82BEEC00(&dir);
    self->facing = -(self->normal.x * dir.x + self->normal.y * dir.y + self->normal.z * dir.z);
    return 1;
}
