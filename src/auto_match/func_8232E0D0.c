long _InterlockedDecrement(long volatile *addend);

typedef struct Rep_8232E0D0 Rep_8232E0D0;

typedef struct RepVt_8232E0D0 {
    void (*destroy)(Rep_8232E0D0 *rep);
    void (*deleteThis)(Rep_8232E0D0 *rep);
} RepVt_8232E0D0;

struct Rep_8232E0D0 {
    RepVt_8232E0D0 *vt; /* 0x0 */
    long uses;          /* 0x4 */
    long weaks;         /* 0x8 */
};

typedef struct Fighter_8232E0D0 {
    char pad0[0x14];
    int stance; /* 0x14 */
    char pad18[0x10];
    float speed; /* 0x28 */
} Fighter_8232E0D0;

typedef struct WeakPtr_8232E0D0 {
    Fighter_8232E0D0 *ptr; /* 0x0 */
    Rep_8232E0D0 *rep;     /* 0x4 */
} WeakPtr_8232E0D0;

typedef struct String_8232E0D0 {
    union {
        char *ptr;
        char buf[16];
    } u; /* 0x00 */

    unsigned int size;     /* 0x10 */
    unsigned int capacity; /* 0x14 */
    int pad18;
} String_8232E0D0;

typedef struct Scene_8232E0D0 {
    char pad0[0x14];
    char listeners[4]; /* 0x14 */
} Scene_8232E0D0;

typedef struct Owner_8232E0D0 {
    char pad0[0x118];
    Scene_8232E0D0 *scene; /* 0x118 */
} Owner_8232E0D0;

typedef struct Library_8232E0D0 {
    void *table; /* 0x0 */
} Library_8232E0D0;

typedef struct Controller_8232E0D0 {
    char pad0[0x54];
    Owner_8232E0D0 *owner;     /* 0x54 */
    Library_8232E0D0 *library; /* 0x58 */
    String_8232E0D0 name;      /* 0x5c */
    String_8232E0D0 suffix;    /* 0x78 */
    char pad94[0xc];
    int stance; /* 0xa0 */
    int pada4;
    char listener[4]; /* 0xa8 */
} Controller_8232E0D0;

extern WeakPtr_8232E0D0 *fn_822BFB28(WeakPtr_8232E0D0 *out, Owner_8232E0D0 *source);
extern unsigned char fn_8223AAC0(Rep_8232E0D0 *rep);
extern void fn_822315A0(Rep_8232E0D0 *rep);
extern void fn_8223B688(String_8232E0D0 *self, String_8232E0D0 *other);
extern void fn_82230218(String_8232E0D0 *self, String_8232E0D0 *right, unsigned int offset,
                        unsigned int count);
extern void fn_82230300(String_8232E0D0 *self, int built, unsigned int newSize);
extern void *fn_82560010(void *table, const char *name);
extern void *fn_822B83D0(Scene_8232E0D0 *scene, void *entry);
extern float fn_827F6310(void *animation);
extern void fn_827F6210(void *animation, float value);
extern void fn_825113E0(char *listeners, int event, char *listener);

static __forceinline void Decwref(Rep_8232E0D0 *rep)
{
    if (_InterlockedDecrement(&rep->weaks) == 0) {
        rep->vt->deleteThis(rep);
    }
}

static __forceinline void ReleaseWeak(Rep_8232E0D0 **rep)
{
    if (*rep != 0) {
        Decwref(*rep);
    }
}

static __forceinline const char *CStr(String_8232E0D0 *s)
{
    if (s->capacity >= 0x10) {
        return s->u.ptr;
    }
    return s->u.buf;
}

void fn_8232E0D0(Controller_8232E0D0 *self)
{
    WeakPtr_8232E0D0 weak;
    WeakPtr_8232E0D0 *source = fn_822BFB28(&weak, self->owner);
    Rep_8232E0D0 *rep = source->rep;
    Fighter_8232E0D0 *ptr = source->ptr;
    Fighter_8232E0D0 *fighter = 0;
    Rep_8232E0D0 *lockedRep = 0;
    String_8232E0D0 name;
    float speed;
    void *animation;
    Library_8232E0D0 *library;

    if (rep != 0 && fn_8223AAC0(rep) != 0) {
        lockedRep = rep;
        fighter = ptr;
    }
    ReleaseWeak(&weak.rep);
    self->stance = fighter->stance;
    speed = fighter->speed;
    fn_8223B688(&name, &self->name);
    if (self->stance == 3) {
        fn_82230218(&name, &self->suffix, 0, -1);
    }
    library = self->library;
    animation = fn_822B83D0(self->owner->scene, fn_82560010(library->table, CStr(&name)));
    fn_827F6210(animation, fn_827F6310(animation) * speed);
    fn_825113E0(self->owner->scene->listeners, 0x14, self->listener);
    fn_82230300(&name, 1, 0);
    if (lockedRep != 0) {
        fn_822315A0(lockedRep);
    }
}
