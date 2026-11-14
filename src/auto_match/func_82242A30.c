void *memset(void *d, int c, unsigned int n);

typedef struct Array_82242A30 {
    int size;
    void *data;
} Array_82242A30;

typedef struct Target_82242A30 Target_82242A30;

typedef struct TargetVtbl_82242A30 {
    void *f0;
    void *f4;
    char *(*Get)(Target_82242A30 *self);
} TargetVtbl_82242A30;

struct Target_82242A30 {
    TargetVtbl_82242A30 *vt;
};

typedef struct Self_82242A30 {
    int f0;
    Array_82242A30 a;
    Array_82242A30 b;
    int f14;
    unsigned char flag18;
    unsigned char flag19;
    Target_82242A30 *target;
} Self_82242A30;

typedef struct Temp_82242A30 {
    int v[6];
} Temp_82242A30;

typedef struct Desc_82242A30 {
    int v[15];
} Desc_82242A30;

extern void fn_822315A0(void *p);
extern unsigned char fn_8288B760(Target_82242A30 *t);
extern void fn_828AC428(Temp_82242A30 *t);
extern void fn_828AC488(Temp_82242A30 *t);
extern void fn_82243DA8(char *dst, Desc_82242A30 *desc, Temp_82242A30 *tmp, int flags);

static __forceinline void Clear(Array_82242A30 *a)
{
    void *data = a->data;
    a->data = 0;
    a->size = 0;
    if (data != 0)
        fn_822315A0(data);
}

void fn_82242A30(Self_82242A30 *self)
{
    self->flag18 = 0;
    self->flag19 = 0;
    Clear(&self->a);
    Clear(&self->b);
    if (self->target != 0 && fn_8288B760(self->target)) {
        char *dst = self->target->vt->Get(self->target) + 0x48;
        Desc_82242A30 desc;
        Temp_82242A30 tmp;
        memset(&desc, 0, sizeof desc);
        fn_828AC428(&tmp);
        fn_82243DA8(dst, &desc, &tmp, 0);
        fn_828AC488(&tmp);
    }
}
