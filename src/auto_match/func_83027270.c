typedef struct { int x, y, z; } V3;
typedef struct { char pad[0x24]; V3 v; } S;
int fn_83027270(S *p, V3 *s)
{
    p->v = *s;
    return 1;
}
