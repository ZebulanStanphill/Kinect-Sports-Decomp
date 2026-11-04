struct Sub_83050700;
typedef struct { int a0, a1, a2; void (*f3)(struct Sub_83050700 *, void *); void (*f4)(struct Sub_83050700 *, void *); } VT_83050700;
typedef struct Sub_83050700 { VT_83050700 *vt; } Sub_83050700;
typedef struct { char pad[0x18]; long long limit; char pad2[0x78 - 0x20]; Sub_83050700 sub; } Obj_83050700;
typedef struct { long long a; unsigned b; unsigned c; } Buf_83050700;

void fn_83050700(Obj_83050700 *o)
{
    Buf_83050700 buf;
    Sub_83050700 *s = &o->sub;

    s->vt->f3(s, &buf);
    if ((long long)buf.b > o->limit) {
        buf.b = (unsigned)o->limit;
        s->vt->f4(s, &buf);
    }
}
