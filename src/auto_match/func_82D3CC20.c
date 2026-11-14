typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vmulfp(__vector4 a, __vector4 b);

typedef union {
    __vector4 v;
    unsigned int u[4];
} Vertex_82D3CC20;

extern unsigned char lbl_82138380[];

void fn_82D3CC20(unsigned char *self, const unsigned short *ids, int count, Vertex_82D3CC20 *out)
{
    int i;
    for (i = count - 1; i >= 0; i--) {
        unsigned int id = *ids++;
        out->v = __vmulfp(*(__vector4 *)(self + 0x20), *(__vector4 *)(lbl_82138380 + id * 8));
        out->u[3] = id | 0x3f000000;
        out++;
    }
}
