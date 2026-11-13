typedef struct Stream_82F47D20 Stream_82F47D20;
typedef struct StreamVt_82F47D20 {
    void *slot0[5];
    int (*GetSize)(Stream_82F47D20 *self, int a, unsigned int *size);
} StreamVt_82F47D20;
struct Stream_82F47D20 {
    StreamVt_82F47D20 *vt;
};

typedef struct Obj_82F47D20 Obj_82F47D20;
typedef struct ObjVt_82F47D20 {
    void *slot0[6];
    int (*GetEnd)(Obj_82F47D20 *self, unsigned __int64 *end);
    void *slot7[13];
    int (*Check)(Obj_82F47D20 *self);
} ObjVt_82F47D20;

struct Obj_82F47D20 {
    ObjVt_82F47D20 *vt;     /* 0x00 */
    int f04;
    int f08;
    int fc;                 /* 0x0c */
    void *f10;              /* 0x10 */
    int f14;
    unsigned short count;   /* 0x18 */
    unsigned short f1a;
    int f1c;
    int f20;
    int f24;                /* 0x24 */
    int f28;
    unsigned __int64 *f2c;               /* 0x2c */
    int f30;                /* 0x30 */
    int f34;
    int f38;
    int f3c;
    int f40;
    int f44;
    unsigned int f48;       /* 0x48 */
    int f4c;
    unsigned __int64 f50;                /* 0x50 */
    int f58;                /* 0x58 */
    unsigned int f5c;       /* 0x5c */
};

extern int fn_82E57738(void *a, void *b);
extern int fn_82E57820(void *a, void *b, unsigned int n);
extern int fn_82E59EC8(void *a, void *b);
extern int fn_82EE5CC8(void *a, void *b, unsigned int off, int d);

int fn_82F47D20(Obj_82F47D20 *o, Stream_82F47D20 *s, unsigned int off, unsigned int *out)
{
    unsigned int size;
    unsigned int remain;
    unsigned int i;
    unsigned int v;
    unsigned __int64 *p;
    unsigned __int64 t;
    unsigned __int64 delta;
    int hr;

    if (o->f10 == 0) {
        return 0xc00d36b6;
    }
    if (s != 0 && out != 0) {
        *out = 0;
        size = 0;
        hr = s->vt->GetSize(s, 0, &size);
        if (hr < 0) {
            return hr;
        }
        if (off < size) {
            remain = size - off;
            hr = fn_82EE5CC8(&o->f30, s, off, 0);
            if (hr < 0) {
                return hr;
            }
            if (o->f50 < o->f5c && o->f48 >= o->f5c) {
                hr = fn_82E59EC8(&o->f24, &o->f30);
                if (hr < 0) {
                    return hr;
                }
                if (o->vt->Check(o) != 0) {
                    fn_82E57738(&o->f58, &o->f30);
                }
                hr = fn_82E57820(o->f2c, &o->f30, (unsigned int)o->count * 8);
                if (hr < 0) {
                    return hr;
                }
                p = o->f2c;
                for (i = 0; i < o->count; i++) {
                    p[i] = _byteswap_uint64(p[i]);
                }
                o->fc = 1;
            }
            delta = 0;
            t = 0;
            if (o->fc != 0) {
                hr = o->vt->GetEnd(o, &t);
                if (hr < 0) {
                    return hr;
                }
                if (t <= o->f50) {
                    return 0xc00d36b5;
                }
                delta = t - o->f50;
            }
            o->f50 = remain + o->f50;
            if (o->fc == 0 || o->f50 < t) {
                hr = 0x400d3a98;
                v = remain;
            } else {
                hr = 0;
                v = (unsigned int)delta;
            }
            *out = v;
            return hr;
        }
    }
    return 0x80070057;
}
