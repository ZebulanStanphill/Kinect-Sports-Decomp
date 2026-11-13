#include "game/OStringStreamObject_8223DCC8.h"

extern "C" {
typedef struct String_82516DA8 {
    char buf[16];
    unsigned int size;
    unsigned int res;
    int pad18[2];
} String_82516DA8;

typedef struct Stream_82516DA8 {
    int vbase;
    char body[156];
} Stream_82516DA8;

typedef struct Item_82516DA8 {
    void *item;
    int pad4[3];
} Item_82516DA8;

typedef struct Vec_82516DA8 {
    int alloc;
    Item_82516DA8 *first;
    Item_82516DA8 *last;
    Item_82516DA8 *end;
} Vec_82516DA8;

typedef struct Data_82516DA8 {
    int pad0;
    Vec_82516DA8 ctx;
    Vec_82516DA8 prop;
} Data_82516DA8;

extern void fn_8223CFC0(Stream_82516DA8 *os, int mode, int flag);
extern Stream_82516DA8 *fn_82240158(Stream_82516DA8 *os, const char *s);
extern Stream_82516DA8 *fn_82520AC8(Stream_82516DA8 *os, int v);
extern Stream_82516DA8 *fn_8223FBB0(Stream_82516DA8 *os, unsigned int v);
extern Stream_82516DA8 *fn_82517B60(Stream_82516DA8 *os, char c);
extern Stream_82516DA8 *fn_8223FDB8(Stream_82516DA8 *os);
extern String_82516DA8 *fn_828C2A50(String_82516DA8 *ret, void *item, void *ctx);
extern String_82516DA8 *fn_828BC448(String_82516DA8 *ret, void *item, void *ctx);
extern Stream_82516DA8 *fn_8223B728(Stream_82516DA8 *os, String_82516DA8 *s);
extern void fn_82230300(String_82516DA8 *s, int built, unsigned int newsize);
extern void fn_822403C8(String_82516DA8 *ret, void *buf);

static int Size_82516DA8(Vec_82516DA8 *v)
{
    return v->last - v->first;
}

String_82516DA8 *fn_82516DA8(String_82516DA8 *ret, Data_82516DA8 *d, void *ctx)
{
    Stream_82516DA8 os;
    String_82516DA8 a;
    String_82516DA8 b;
    Item_82516DA8 *it;
    void *item;

    fn_8223CFC0(&os, 2, 1);
    fn_82240158(&os, "GlobalContextsandPropertiesVariableData: ");
    fn_8223FBB0(fn_82240158(fn_82520AC8(fn_82240158(&os, "Contexts "), Size_82516DA8(&d->ctx)),
                            ", Properties "), 0);
    for (it = d->ctx.first; it != d->ctx.last; it++) {
        item = it->item;
        fn_82517B60(&os, 10);
        fn_8223FDB8(&os);
        fn_82240158(fn_8223B728(fn_82240158(&os, "Context ["), fn_828C2A50(&a, item, ctx)), "]");
        fn_82230300(&a, 1, 0);
    }
    for (it = d->prop.first; it != d->prop.last; it++) {
        item = it->item;
        fn_82517B60(&os, 10);
        fn_8223FDB8(&os);
        fn_82240158(fn_8223B728(fn_82240158(&os, "Property ["), fn_828BC448(&b, item, ctx)), "]");
        fn_82230300(&b, 1, 0);
    }
    fn_822403C8(ret, os.body);
    DestroyOStringStream_8223DCC8(&os);
    return ret;
}
}
