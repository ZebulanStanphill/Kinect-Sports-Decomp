#include "game/SwappedBlock_82A86CB0.h"

extern template struct SwappedBlock_82A86CB0<0x14>;

struct Stream_82A8F020;

struct StreamVtbl_82A8F020 {
    void *f0;
    unsigned char (*IsOpen)(Stream_82A8F020 *self); /* 0x04 */
    void *f8;
    unsigned char (*Seek)(Stream_82A8F020 *self, int position);                   /* 0x0c */
    unsigned char (*Read)(Stream_82A8F020 *self, void *buf, int size, int *read); /* 0x10 */
};

struct Stream_82A8F020 {
    StreamVtbl_82A8F020 *vtbl;
};

struct Def_82A8F020 {
    int pad0;
    int value; /* 0x04 */
};

struct Layout_82A8F020 {
    int count;    /* 0x00 */
    int fields;   /* 0x04 */
    int bitsWide; /* 0x08 */
};

extern "C" {
void fn_82A8EB80(Def_82A8F020 *def, int *fields, SwappedBlock_82A86CB0<0x14> *block, unsigned int bit,
                 int out);

int fn_82A8F020(Def_82A8F020 **defs, Stream_82A8F020 *stream, Layout_82A8F020 *layout, int out, int count,
                int *indices, int stride)
{
    int i;

    struct {
        int read;
        int pad;
        Def_82A8F020 local;
        unsigned char buf[0x20];
        SwappedBlock_82A86CB0<0x14> block;
    } L;

    Def_82A8F020 *given;
    Def_82A8F020 *def;
    int bits;
    int bit;
    int first;

    for (i = count - 1; i >= 0; i--) {
        if (indices[i] < 0 || indices[i] >= layout->count) {
            return 0;
        }
    }
    given = *defs;
    L.local.value = 5;
    def = given ? given : &L.local;
    bits = layout->bitsWide;
    for (i = count - 1; i >= 0; i--) {
        bit = *indices * bits + 0x180;
        if (bits > 0) {
            first = bit >> 3;
            if (!stream->vtbl->IsOpen(stream) || !stream->vtbl->Seek(stream, first) ||
                !stream->vtbl->Read(stream, L.buf, ((bit + bits + 7) >> 3) - first, &L.read)) {
                return 0;
            }
        }
        L.block.Set(L.buf, 0x14);
        fn_82A8EB80(def, &layout->fields, &L.block, bit & 7, out);
        out += stride;
        indices++;
    }
    return 1;
}
}
