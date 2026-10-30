typedef struct { char pad[0x24]; int h; } Src;

extern void fn_8267C4C8(int h);

int *fn_8266C8A0(int *out, Src *s)
{
    if (s->h != 0) {
        fn_8267C4C8(s->h);
    }
    *out = s->h;
    return out;
}
