extern int fn_8262F8D8(void *, int, int, unsigned int, int, unsigned int, unsigned int, int, int);
typedef struct Buf_82630108 { char pad[0x18]; unsigned int f18; unsigned int f1c; } Buf_82630108;

int fn_82630108(Buf_82630108 *b, int offset, int size, int flags)
{
    unsigned int v = b->f18 & 0xfffffffc;
    return fn_8262F8D8(b, 10, 0, v, 0, v, b->f1c & 0x3fffffc, flags, 0x3000000);
}
