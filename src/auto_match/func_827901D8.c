typedef struct {
    int heap;
    int pad[6];
    unsigned short *data;
    unsigned int cap;
    unsigned int count;
} Buf;

extern unsigned short *fn_8267B890(int heap, unsigned int size, int c);
extern unsigned short *fn_8267BDA8(unsigned short *p, unsigned int size);

void fn_827901D8(Buf *b, int v)
{
    if (b->count + 6 > b->cap) {
        b->cap = b->cap + 6;
        if (b->data == 0) {
            b->data = fn_8267B890(b->heap, b->cap * 2, 0);
        } else {
            b->data = fn_8267BDA8(b->data, b->cap * 2);
        }
    }
    b->data[b->count] = v;
    b->count = b->count + 1;
}
