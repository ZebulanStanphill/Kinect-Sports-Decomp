typedef struct Fmt {
    char pad[0x10];
    unsigned int fourcc;
} Fmt;

typedef struct S {
    int a;
    Fmt *fmt;
} S;

int fn_82EDBFD8(S *s)
{
    unsigned int f;
    if (s->fmt == 0) {
        return 0;
    }
    f = s->fmt->fourcc;
    if (f == 0x56555949 || f == 0x30323449 || f == 0x32315659 || f == 0x39555659) {
        return 1;
    }
    if (f == 0x3231564e || f == 0x3131564e) {
        return 3;
    }
    return 2;
}
