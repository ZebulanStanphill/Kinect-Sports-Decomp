typedef struct {
    int unk0;
    unsigned int pos;
    char *buf;
} Stream_829D6E00;

extern void fn_82A1DDC0(void *dst, const void *src, unsigned int n);

void fn_829D6E00(Stream_829D6E00 *s, float v)
{
    fn_82A1DDC0(s->buf + s->pos, &v, 4);
    s->pos += 4;
}
