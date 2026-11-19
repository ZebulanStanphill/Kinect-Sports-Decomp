#include "game/SwappedBlock_82A86CB0.h"

extern template struct SwappedBlock_82A86CB0<0x48>;

struct Stream_82A91118;

struct StreamVtbl_82A91118 {
    void *f0;
    unsigned char (*IsOpen)(Stream_82A91118 *self); /* 0x04 */
    void *f8;
    unsigned char (*Seek)(Stream_82A91118 *self, int position);                   /* 0x0c */
    unsigned char (*Read)(Stream_82A91118 *self, void *buf, int size, int *read); /* 0x10 */
};

struct Stream_82A91118 {
    StreamVtbl_82A91118 *vtbl;
};

struct Scale_82A91118 {
    float value;
};

struct Def_82A91118 {
    Scale_82A91118 scale[3];
    int count; /* 0x0c */
    int pad10;
};

struct Layout_82A91118 {
    int count;    /* 0x00 */
    int fields;   /* 0x04 */
    int bitsWide; /* 0x08 */
};

extern "C" {
extern const float lbl_82196284;

void fn_82A90A38(Def_82A91118 *def, int *fields, SwappedBlock_82A86CB0<0x48> *block, unsigned int bit,
                 int out);

int fn_82A91118(Def_82A91118 **defs, Stream_82A91118 *stream, Layout_82A91118 *layout, int out, int count,
                int *indices, int stride)
{
    int i;

    struct {
        union {
            int read;
            Scale_82A91118 scratch;
        } u;

        int pad[3];
        Def_82A91118 local;
        Scale_82A91118 second;
        int pad78[2];
        unsigned char buf[0x50];
        SwappedBlock_82A86CB0<0x48> block;
    } L;

    Def_82A91118 *given;
    Def_82A91118 *def;
    int bits;
    int bit;
    int first;

    for (i = count - 1; i >= 0; i--) {
        if (indices[i] < 0 || indices[i] >= layout->count) {
            return 0;
        }
    }
    given = *defs;
    L.local.count = 3;
    L.u.scratch.value = 1e-5f;
    L.second = L.u.scratch;
    L.local.scale[2].value = lbl_82196284;
    L.local.scale[1].value = L.second.value;
    L.local.scale[0].value = 1e-5f;
    def = given ? given : &L.local;
    bits = layout->bitsWide;
    for (i = count - 1; i >= 0; i--) {
        bit = *indices * bits + 0x3ac;
        if (bits > 0) {
            first = bit >> 3;
            if (!stream->vtbl->IsOpen(stream) || !stream->vtbl->Seek(stream, first) ||
                !stream->vtbl->Read(stream, L.buf, ((bit + bits + 7) >> 3) - first, &L.u.read)) {
                return 0;
            }
        }
        L.block.Set(L.buf, 0x48);
        fn_82A90A38(def, &layout->fields, &L.block, bit & 7, out);
        out += stride;
        indices++;
    }
    return 1;
}
}
