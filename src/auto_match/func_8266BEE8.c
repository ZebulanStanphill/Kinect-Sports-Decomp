typedef unsigned short wchar_t;
typedef struct {
    void *vt;
    char tag[8];
    int sub;
} Obj_8266BEE8;
extern int fn_8266BF60(const Obj_8266BEE8 *o);
extern void fn_8266C340(const wchar_t *fmt, ...);
extern void fn_82667010(int *sub, const int *src);

/* XLipDiskAssetMgr.cpp assert; the original condition text is C++ (`source` is a reference there). */
#define XLIP_ASSERT(e, text, line) \
    if (!(e)) fn_8266C340(L"Assert failed. File: %s. Line: %d. Condition: %s", L".\\XLipDiskAssetMgr.cpp", line, text)

Obj_8266BEE8 *fn_8266BEE8(Obj_8266BEE8 *self, const Obj_8266BEE8 *source)
{
    const Obj_8266BEE8 *s;
    XLIP_ASSERT(fn_8266BF60(source), L"CheckSignature( &source )", 0x1ba);
    s = source;
    fn_82667010(&self->sub, &s->sub);
    return self;
}
