typedef struct Writer_82D93550 Writer_82D93550;

typedef struct WriterVt_82D93550 {
    void *s00;
    void *s04;
    void *s08;
    void (*BeginObject)(Writer_82D93550 *w, const char *name, int id, int flags);
    void *s10;
    void (*WriteArray)(Writer_82D93550 *w, int kind, const char *name, void *data,
                       int size, int extra);
} WriterVt_82D93550;

struct Writer_82D93550 {
    WriterVt_82D93550 *vt;
};

typedef struct Shape_82D93550 {
    int pad00[4];
    int id;                 /* 0x10 */
    int pad14[15];          /* 0x14..0x4f */
    unsigned short pad50;   /* 0x50 */
    unsigned short count;   /* 0x52 */
    void *aabbs;            /* 0x54 */
    void *aabbs2;           /* 0x58 */
    int pad5c;              /* 0x5c */
    void *agt;              /* 0x60 */
    int agtCount;           /* 0x64 */
    int agtCap;             /* 0x68 */
    int pad6c[3];           /* 0x6c..0x77 */
    void *props;            /* 0x78 */
    int propCount;          /* 0x7c */
    int propCap;            /* 0x80 */
} Shape_82D93550;

extern int fn_82CFF8D0(void *data, int size);
extern void fn_82CFF928(Writer_82D93550 *w, const char *name, void *data, int size, int flags);

void fn_82D93550(Shape_82D93550 *s, Writer_82D93550 *w)
{
    int r;

    w->vt->BeginObject(w, "Shape", s->id, 0);
    if ((s->agtCap & (int)0x80000000) == 0) {
        r = fn_82CFF8D0(s->agt, s->agtCap << 3);
        w->vt->WriteArray(w, 3, "CollAgtPtr", s->agt, s->agtCount << 3, r);
    }
    if ((s->propCap & (int)0x80000000) == 0) {
        r = fn_82CFF8D0(s->props, s->propCap << 4);
        w->vt->WriteArray(w, 3, "Properties", s->props, s->propCount << 4, r);
    }
    if (s->aabbs != 0) {
        fn_82CFF928(w, "ChildShapeAabbs", s->aabbs, s->count << 5, 0);
        fn_82CFF928(w, "ChildShapeAabbs", s->aabbs2, s->count << 2, 0);
    }
}
