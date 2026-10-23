typedef struct Stream {
    char pad0[0x15];
    unsigned char flag;
    char pad16[0x2c - 0x16];
    int pos;
    int size;
    char pad34[0x3c - 0x34];
    unsigned char *data;
} Stream;
typedef struct Owner {
    char pad0[0x28];
    Stream local;
    char padx[0x314 - 0x28 - sizeof(Stream)];
    Stream *ext;
} Owner;
extern void fn_826E7800(Stream *s, int n);
unsigned short fn_826A6A38(Owner *o)
{
    Stream *s;
    unsigned char *b;
    unsigned short r;
    s = o->ext;
    if (s == 0) {
        s = &o->local;
    }
    s->flag = 0;
    if (s->size - s->pos < 2) {
        fn_826E7800(s, 2);
    }
    b = s->data + s->pos; r = (b[1] << 8) | b[0]; s->pos += 2; return r;
}
