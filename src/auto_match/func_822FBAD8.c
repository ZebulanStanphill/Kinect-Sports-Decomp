typedef struct String_822FBAD8 {
    int words[7];
} String_822FBAD8;

typedef struct Vector_822FBAD8 {
    void *first; /* 0x0 */
    void *last;  /* 0x4 */
    void *end;   /* 0x8 */
} Vector_822FBAD8;

static __forceinline void InitVector(Vector_822FBAD8 *vector)
{
    vector->first = 0;
    vector->last = 0;
    vector->end = 0;
}

typedef struct Obj_822FBAD8 {
    void *vt; /* 0x00 */
    int pad4[0x13];
    int active;            /* 0x50 */
    Vector_822FBAD8 items; /* 0x54 */
    int pad60;
    int f64;                /* 0x64 */
    int base;               /* 0x68 */
    int baseEnd;            /* 0x6c */
    String_822FBAD8 name;   /* 0x70 */
    int f8c;                /* 0x8c */
    int f90;                /* 0x90 */
    float x;                /* 0x94 */
    float y;                /* 0x98 */
    float z;                /* 0x9c */
    String_822FBAD8 first;  /* 0xa0 */
    String_822FBAD8 second; /* 0xbc */
} Obj_822FBAD8;

extern void fn_822C70F0(Obj_822FBAD8 *self, void *unused, void *source);
extern void fn_8223B688(String_822FBAD8 *self, const void *source);
extern void fn_822FBF10(Obj_822FBAD8 *self);
extern char lbl_821AE85C[];

Obj_822FBAD8 *fn_822FBAD8(Obj_822FBAD8 *self, void *unused, void *source, int value, int base,
                          const void *name, float x, float y, float z, const void *first, const void *second)
{
    fn_822C70F0(self, unused, source);
    self->vt = lbl_821AE85C;
    InitVector(&self->items);
    self->f64 = value;
    self->base = base;
    self->baseEnd = base + 0x24;
    fn_8223B688(&self->name, name);
    self->x = x;
    self->y = y;
    self->f8c = 0;
    self->z = z;
    self->f90 = 0;
    fn_8223B688(&self->first, first);
    fn_8223B688(&self->second, second);
    self->active = 1;
    fn_822FBF10(self);
    return self;
}
