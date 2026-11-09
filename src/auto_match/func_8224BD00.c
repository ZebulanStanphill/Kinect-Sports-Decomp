/* Read a bool setting into a boost::any: if the any already holds a bool,
   read into it in place, else read into a local and assign a new holder. */
typedef struct Placeholder_8224BD00 Placeholder_8224BD00;
typedef struct PlaceholderVtbl_8224BD00 {
    void (*destroy)(Placeholder_8224BD00 *self, int flags);
    const void *(*type)(Placeholder_8224BD00 *self);
} PlaceholderVtbl_8224BD00;
struct Placeholder_8224BD00 { const PlaceholderVtbl_8224BD00 *vt; };
typedef struct Holder_8224BD00 { const void *vt; unsigned char held; } Holder_8224BD00;
typedef struct Any_8224BD00 { Placeholder_8224BD00 *content; } Any_8224BD00;

typedef struct Source_8224BD00 Source_8224BD00;
typedef struct SourceVtbl_8224BD00 {
    void *s0, *s1, *s2, *s3, *s4;
    void (*Get)(Source_8224BD00 *self, unsigned int key, unsigned char *v);
} SourceVtbl_8224BD00;
struct Source_8224BD00 { const SourceVtbl_8224BD00 *vt; };

extern unsigned char fn_82F64538(const void *a, const void *b);
extern void *fn_8265C9E0(unsigned int size);
extern char lbl_831D7088[];
extern char lbl_831D7470[];
extern char lbl_82197B5C[];

void fn_8224BD00(Source_8224BD00 *s, unsigned int key, Any_8224BD00 *a)
{
    unsigned char *p;
    if (a != 0 && fn_82F64538(a->content ? a->content->vt->type(a->content) : lbl_831D7088, lbl_831D7470)) {
        p = &((Holder_8224BD00 *)a->content)->held;
    } else {
        p = 0;
    }
    if (p != 0) {
        s->vt->Get(s, key, p);
    } else {
        unsigned char v;
        Holder_8224BD00 *mem;
        Holder_8224BD00 *h;
        Placeholder_8224BD00 *old;
        s->vt->Get(s, key, &v);
        mem = (Holder_8224BD00 *)fn_8265C9E0(8);
        if (mem != 0) {
            mem->vt = lbl_82197B5C;
            mem->held = v;
            h = mem;
        } else {
            h = 0;
        }
        old = a->content;
        a->content = (Placeholder_8224BD00 *)h;
        if (old != 0) {
            old->vt->destroy(old, 1);
        }
    }
}
