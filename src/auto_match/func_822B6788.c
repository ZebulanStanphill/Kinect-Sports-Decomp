typedef struct O O;
typedef struct OVt { void *f[24]; void *(*f60)(O *o); } OVt;
struct O { OVt *vt; };
typedef struct G { char pad[0x8c0]; int x8c0; } G;
typedef struct S { char pad[0x14]; G *g; char p2[0x12c-0x18]; int x12c; } S;
extern unsigned char fn_82A81CC0(void *p);

unsigned char fn_822B6788(S *s)
{
    int o;
    void *r;
    if (s->x12c != 0 && (o = s->g->x8c0) != 0 && (r = ((O *)o)->vt->f60((O *)o)) != 0) {
        return fn_82A81CC0(r) == 2;
    }
    return 2;
}
