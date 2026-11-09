/* Read an unsigned 64-bit setting into a boost::any: if the any already holds an unsigned __int64,
   read into it in place, else read into a local and assign a new holder. */
typedef struct Placeholder_823BBE98 Placeholder_823BBE98;
typedef struct PlaceholderVtbl_823BBE98 {
    void (*destroy)(Placeholder_823BBE98 *self, int flags);
    const void *(*type)(Placeholder_823BBE98 *self);
} PlaceholderVtbl_823BBE98;
struct Placeholder_823BBE98 { const PlaceholderVtbl_823BBE98 *vt; };
typedef struct Holder_823BBE98 { const void *vt; unsigned __int64 held; } Holder_823BBE98;
typedef struct Any_823BBE98 { Placeholder_823BBE98 *content; } Any_823BBE98;

typedef struct Source_823BBE98 Source_823BBE98;
typedef struct SourceVtbl_823BBE98 {
    void *s0, *s1, *s2, *s3, *s4;
    void (*Get)(Source_823BBE98 *self, unsigned int key, unsigned __int64 *v);
} SourceVtbl_823BBE98;
struct Source_823BBE98 { const SourceVtbl_823BBE98 *vt; };

extern unsigned char fn_82F64538(const void *a, const void *b);
extern void *fn_8265C9E0(unsigned int size);
extern char lbl_831D7088[];
extern char lbl_831DE9E4[];
extern char lbl_821B5E58[];

void fn_823BBE98(Source_823BBE98 *s, unsigned int key, Any_823BBE98 *a)
{
    unsigned __int64 *p;
    if (a != 0 && fn_82F64538(a->content ? a->content->vt->type(a->content) : lbl_831D7088, lbl_831DE9E4)) {
        p = &((Holder_823BBE98 *)a->content)->held;
    } else {
        p = 0;
    }
    if (p != 0) {
        s->vt->Get(s, key, p);
    } else {
        unsigned __int64 v;
        Holder_823BBE98 *mem;
        Holder_823BBE98 *h;
        Placeholder_823BBE98 *old;
        s->vt->Get(s, key, &v);
        mem = (Holder_823BBE98 *)fn_8265C9E0(16);
        if (mem != 0) {
            mem->vt = lbl_821B5E58;
            mem->held = v;
            h = mem;
        } else {
            h = 0;
        }
        old = a->content;
        a->content = (Placeholder_823BBE98 *)h;
        if (old != 0) {
            old->vt->destroy(old, 1);
        }
    }
}
