class Unit_8288B2D8 { public: unsigned get(unsigned); };

struct Src_828CF290;
struct SrcVtbl_828CF290 {
    void *slots[15];
    Unit_8288B2D8 *(*table)(Src_828CF290 *self);
};
struct Src_828CF290 {
    SrcVtbl_828CF290 *vtbl;
};

struct Cfg_828CF290 {
    int pad[2];
    int bits;
};

struct Out_828CF290 {
    int pad0;
    unsigned value;
    int pad8[2];
    int f10;
};

extern "C" {
int fn_828E9DA8(void *stream);
int fn_828E9D90(void *stream);
unsigned fn_828E9FF8(void *stream, int n);
void fn_828CF290(Cfg_828CF290 *cfg, Src_828CF290 *src, void *stream, Out_828CF290 *out, unsigned *result);
}

void fn_828CF290(Cfg_828CF290 *cfg, Src_828CF290 *src, void *stream, Out_828CF290 *out, unsigned *result)
{
    int n = cfg->bits;
    unsigned idx = 0;
    unsigned v;

    if (n > 0) {
        if (n <= fn_828E9DA8(stream) - fn_828E9D90(stream)) {
            idx = fn_828E9FF8(stream, n);
        } else {
            idx = 0;
        }
    }
    *result = src->vtbl->table(src)->get(idx);
    if (fn_828E9DA8(stream) - fn_828E9D90(stream) >= 2) {
        v = fn_828E9FF8(stream, 2);
    } else {
        v = 0;
    }
    out->value = v;
    out->f10 = 0;
}
