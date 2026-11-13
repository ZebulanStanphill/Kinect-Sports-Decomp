typedef unsigned short wchar_t;
typedef struct Obj_8266B248 {
    void *vt;
    void *vt2;
    char tag[4];
    int sub;
} Obj_8266B248;
extern int fn_8266B340(const void *o);
extern void fn_8266C340(const wchar_t *fmt, ...);
extern void fn_82667010(int *sub, const int *src);

/* XLipDiskAssetMgr.cpp assert, as in func_8266BEE8. */
#define XLIP_ASSERT(e, text, line) \
    if (!(e)) fn_8266C340(L"Assert failed. File: %s. Line: %d. Condition: %s", L".\\XLipDiskAssetMgr.cpp", line, text)

void *fn_8266B248(Obj_8266B248 *self, void *source)
{
    const Obj_8266B248 *s;
    XLIP_ASSERT(fn_8266B340(source), L"CheckSignature( &source )", 0x1b);
    s = source ? (const Obj_8266B248 *)((char *)source - 4) : 0;
    fn_82667010(&self->sub, &s->sub);
    return self ? (char *)self + 4 : 0;
}
