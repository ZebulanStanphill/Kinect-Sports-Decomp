extern int fn_828E9D90(void *);
extern int fn_828E9DA8(void *);
extern int fn_828E9FF8(void *, int);

typedef struct { char pad[0x58]; unsigned char base; char pad2[3]; int len; } In_828A9070;
typedef struct { int pad0; int kind; unsigned char val; } Out_828A9070;

void fn_828A9070(In_828A9070 *p, int unused, void *r, Out_828A9070 *out)
{
    int len;
    int avail;
    int c;

    len = p->len;
    avail = fn_828E9DA8(r) - fn_828E9D90(r);
    if (len <= avail) {
        c = fn_828E9FF8(r, len);
    } else {
        c = 0;
    }
    if (out != 0) {
        out->kind = 2;
        out->val = p->base + c;
    }
}
