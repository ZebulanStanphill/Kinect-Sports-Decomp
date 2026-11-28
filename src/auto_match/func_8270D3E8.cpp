typedef struct Ref_8270D3E8 Ref_8270D3E8;

class Loader_8270D3E8
{
  public:
    virtual void Reserved0();
    virtual void Reserved1();
    virtual void Reserved2();
    virtual void Reserved3();
    virtual void Load(Ref_8270D3E8 **objects, const void *names, int count);
};

typedef struct Effect_8270D3E8 {
    Ref_8270D3E8 *primary;
    int state;
    Ref_8270D3E8 *layers[5];
    Ref_8270D3E8 *extra;
    int mode;
    float gain;
    float values[6];
    const void *table0;
    const void *table1;
    int unused;
    int position;
    int flags;
    int offset;
} Effect_8270D3E8;

extern "C" void fn_8267C4C8(Ref_8270D3E8 *ref);
extern "C" void fn_8267C4F0(Ref_8270D3E8 *ref);
extern "C" const char lbl_8200E7FC[24];
extern "C" const char lbl_83155190[];
extern "C" const char lbl_831552E0[];

static __forceinline void Replace(Ref_8270D3E8 **dest, Ref_8270D3E8 *next)
{
    if (*dest) {
        fn_8267C4F0(*dest);
    }
    *dest = next;
}

extern "C" void fn_8270D3E8(Effect_8270D3E8 *self, Loader_8270D3E8 *loader, Ref_8270D3E8 *extra, int mode,
                            float gain, const float *values)
{
    Ref_8270D3E8 *loaded[6];

    loaded[0] = 0;
    loaded[1] = 0;
    loaded[2] = 0;
    loaded[3] = 0;
    loaded[4] = 0;
    loaded[5] = 0;

    loader->Load(loaded, lbl_8200E7FC, 6);
    Replace(&self->primary, loaded[0]);
    Replace(&self->layers[0], loaded[1]);
    Replace(&self->layers[1], loaded[2]);
    Replace(&self->layers[2], loaded[3]);
    Replace(&self->layers[3], loaded[4]);
    Replace(&self->layers[4], loaded[5]);
    if (extra) {
        fn_8267C4C8(extra);
    }
    Replace(&self->extra, extra);
    self->gain = gain;
    self->mode = mode;
    self->state = 0;
    self->position = 0;
    self->offset = 0;
    self->flags = 0;
    self->values[0] = values[0];
    self->values[1] = values[1];
    self->values[2] = values[2];
    self->values[3] = values[3];
    self->values[4] = values[4];
    {
        float *pValuesElem = &self->values[5];
        *pValuesElem = values[5];
    }
    self->table0 = lbl_83155190;
    self->table1 = lbl_831552E0;
}
