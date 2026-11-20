typedef struct Mode_8235D098 {
    char pad[0x40];
    unsigned int state; /* 0x40 */
} Mode_8235D098;

typedef struct Id_8235D098 {
    unsigned int value;
} Id_8235D098;

typedef struct RefCount_8235D098 {
    void *vt;  /* 0x00 */
    int uses;  /* 0x04 */
    int weaks; /* 0x08 */
    int pad0c;
    char storage[0x2000]; /* 0x10 */
} RefCount_8235D098;

typedef struct Ptr_8235D098 {
    void *ptr;              /* 0x0 */
    RefCount_8235D098 *rep; /* 0x4 */
} Ptr_8235D098;

typedef struct Self_8235D098 {
    char pad0[0x98];
    int a98;             /* 0x098 */
    int a9c;             /* 0x09c */
    Mode_8235D098 *mode; /* 0x0a0 */
    char padA4[0x174 - 0xa4];
    int state; /* 0x174 */
    char pad178[0x18c - 0x178];
    Ptr_8235D098 screen; /* 0x18c */
    char pad194[0x15d4 - 0x194];
    Id_8235D098 id; /* 0x15d4 */
    char pad15d8[0x2b20 - 0x15d8];
    void *loader; /* 0x2b20 */
} Self_8235D098;

extern void *fn_8265C9E0(unsigned int size);
extern RefCount_8235D098 *fn_82361DD0(RefCount_8235D098 *rc, const char *name, Id_8235D098 *id, const int *a,
                                      const int *b, const int *c, const int *d, const int *e, const int *f);
extern void fn_822315A0(RefCount_8235D098 *rep);
extern void fn_8241C900(void *loader, Ptr_8235D098 *screen, int flags);

static __forceinline int IsValid(Id_8235D098 *id)
{
    if (id->value != 0) {
        return (id->value & 0xff000000) < 0x7a000000;
    }
    return 0;
}

static __forceinline int InState(Mode_8235D098 *mode, unsigned int state)
{
    return mode != 0 && mode->state == state;
}

static __forceinline void Assign(Ptr_8235D098 *ptr, void *object, RefCount_8235D098 *rep)
{
    RefCount_8235D098 **slot = &ptr->rep;
    RefCount_8235D098 *old = *slot;
    *slot = rep;
    ptr->ptr = object;
    if (old != 0) {
        fn_822315A0(old);
    }
}

void fn_8235D098(Self_8235D098 *self)
{
    self->state = 3;
    if (IsValid(&self->id) && !InState(self->mode, 1) && !InState(self->mode, 2)) {
        RefCount_8235D098 *rc;
        int b;
        int a;
        int one1;
        int one2;
        int one3;
        int one4;
        Assign(&self->screen, 0, 0);
        b = self->a9c;
        a = self->a98;
        one1 = 1;
        one2 = 1;
        one3 = 1;
        one4 = 1;
        rc = (RefCount_8235D098 *)fn_8265C9E0(0x2010);
        if (rc != 0) {
            rc = fn_82361DD0(rc, "resultsscreentitle", &self->id, &a, &b, &one4, &one3, &one2, &one1);
        } else {
            rc = 0;
        }
        Assign(&self->screen, rc->storage, rc);
        fn_8241C900(self->loader, &self->screen, 0);
    }
}
