typedef struct Res { unsigned char ok; int code; } Res;
typedef struct Inner { char pad[0x7e4]; int count; } Inner;
typedef struct S { char pad[0x80]; Inner *in; } S;

void fn_825AC118(Res *r, S *s)
{
    unsigned char ok;
    int code;
    if (s->in == 0) {
        code = 10;
        ok = 0;
    } else if (s->in->count > 0) {
        ok = 0;
        code = 9;
    } else {
        ok = 1;
        code = 0;
    }
    r->ok = ok;
    r->code = code;
}
