typedef struct Parser_828FA0E0 {
    int pad0;
    unsigned char *end;
    char pad1[0x28 - 8];
    unsigned int flags;
    void *heap;
    int pad30;
    int f34;
} Parser_828FA0E0;
extern int isalpha(int);
extern int isalnum(int);
extern void *memcpy(void *, const void *, unsigned int);
extern unsigned char *fn_829301D0(void *, unsigned int, int);

unsigned int fn_828FA0E0(Parser_828FA0E0 *p, unsigned char *start, unsigned char **out)
{
    unsigned char *s;
    unsigned char *t;
    unsigned int len;
    unsigned char *buf;
    unsigned int c;

    s = start;
    if (start >= p->end ||
        (isalpha(*s) == 0 && (c = *s) != '_' &&
         (p->f34 == 0 || (p->flags & 4) != 0 || isalnum((unsigned char)c) == 0)))
        return 0;
    for (;;) {
        s++;
        while (s < p->end) {
            if (isalnum(*s) == 0 && *s != '_')
                break;
            s++;
        }
        t = s + 2;
        if (t < p->end && s[0] == ':' && s[1] == ':' && (isalnum(*t) != 0 || *t == '_')) {
            s = t;
            if (s < p->end)
                continue;
        }
        break;
    }
    len = s - start;
    if (len + 1 < len)
        return 0;
    buf = fn_829301D0(p->heap, len + 1, 1);
    if (buf == 0)
        return 0;
    memcpy(buf, start, len);
    buf[len] = 0;
    *out = buf;
    return len;
}
