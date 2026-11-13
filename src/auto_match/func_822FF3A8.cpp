typedef unsigned int size_t_822FF3A8;

inline void *operator new(size_t_822FF3A8, void *where) { return where; }

extern "C" char lbl_821AD588[];

struct Str_822FF3A8;

extern "C" void fn_82230110(Str_822FF3A8 *self, int value);
extern "C" void fn_82230300(Str_822FF3A8 *self, int a, int b);
extern "C" void fn_822FBAD8(void *self, const Str_822FF3A8 &a, int b, int c, int d,
                            const Str_822FF3A8 &e, float f, float g, float h, int i, int j);

struct Str_822FF3A8 {
    int data[8];
    __forceinline Str_822FF3A8(int v) { fn_82230110(this, v); }
    __forceinline ~Str_822FF3A8() { fn_82230300(this, 1, 0); }
};

struct Inner_822FF3A8 {
    __forceinline Inner_822FF3A8(const Str_822FF3A8 &a, int b, int c, int d,
                                 const Str_822FF3A8 &e, float f, float g, float h,
                                 int i, int j)
    {
        fn_822FBAD8(this, a, b, c, d, e, f, g, h, i, j);
    }
};

struct Outer_822FF3A8 {
    const void *vt;
    int uses;
    int weaks;
    unsigned char inner[1];
};

extern "C" Outer_822FF3A8 *fn_822FF3A8(Outer_822FF3A8 *self, int a, int b, int c, int d,
                                      int e, float *f, float *g, float *h, int i, int j)
{
    self->uses = 1;
    self->vt = lbl_821AD588;
    self->weaks = 1;
    new ((void *)self->inner) Inner_822FF3A8(a, b, c, d, e, *f, *g, *h, i, j);
    return self;
}
