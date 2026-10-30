typedef struct Stream_82715378 {
    char pad0[0x15];
    unsigned char f15;
    char pad1[0x15];
    int pos;
    int end;
    char pad2[0x8];
    unsigned char *buf;
} Stream_82715378;
typedef struct Obj_82715378 {
    char pad0[0x28];
    Stream_82715378 inl;
    char pad1[0x314 - 0x28 - sizeof(Stream_82715378)];
    Stream_82715378 *ext;
} Obj_82715378;
extern unsigned short fn_826A6A38(Obj_82715378 *o);
extern int fn_826E7800(Stream_82715378 *s, int n);
extern int fn_826E7990(Stream_82715378 *s);
extern unsigned int fn_826E8488(Stream_82715378 *s, int n);

static __forceinline void Skip(Stream_82715378 *s, int n)
{
    s->f15 = 0;
    if (s->end - s->pos < n)
        fn_826E7800(s, n);
    s->pos += n;
}

void fn_82715378(Obj_82715378 *o)
{
    Stream_82715378 *s;
    int n;
    unsigned char a, b, c, d;
    int cnt, v;

    s = o->ext ? o->ext : &o->inl;
    for (n = 4; n != 0; n--) {
        if (fn_826A6A38(o) != 0) {
            fn_826E8488(s, 2);
            fn_826E8488(s, 1);
            fn_826E8488(s, 1);
            a = fn_826E8488(s, 1) != 0;
            b = fn_826E8488(s, 1) != 0;
            c = fn_826E8488(s, 1) != 0;
            if (fn_826E8488(s, 1) != 0)
                Skip(s, 4);
            if (c)
                Skip(s, 4);
            if (b)
                Skip(s, 2);
            if (a) {
                s->f15 = 0;
                if (s->end - s->pos < 1)
                    fn_826E7990(s);
                v = s->buf[s->pos];
                s->pos += 1;
                if (v > 0) {
                    cnt = v;
                    do {
                        Skip(s, 4);
                        Skip(s, 2);
                        Skip(s, 2);
                    } while (--cnt != 0);
                }
            }
        }
    }
}
