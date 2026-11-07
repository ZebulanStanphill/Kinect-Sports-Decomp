typedef struct Str_82245C50 { int a, b; union { char buf[4]; char *ptr; } u; unsigned int cap; } Str_82245C50;
struct Recv_82245C50;
typedef struct RecvVt_82245C50 { void *s[4]; void (*f)(struct Recv_82245C50 *, int, char *); } RecvVt_82245C50;
typedef struct Recv_82245C50 { RecvVt_82245C50 *vt; } Recv_82245C50;
typedef struct Owner_82245C50 { char pad[0x58]; Recv_82245C50 *recv; } Owner_82245C50;
static __forceinline char *ptr_of(Str_82245C50 *s) { return s->cap <= 4 ? s->u.buf : s->u.ptr; }
void fn_82245C50(Owner_82245C50 *self, int unused, int arg, Str_82245C50 *s)
{
    Recv_82245C50 *r = self->recv;
    r->vt->f(r, arg, ptr_of(s));
}
