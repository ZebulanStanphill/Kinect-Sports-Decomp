typedef struct Elem_82C2CFE8 {
    char pad0[0x3c];
    float *data;
    char pad1[0x6f0 - 0x40];
} Elem_82C2CFE8;

typedef struct Obj_82C2CFE8 {
    char pad0[0x22];
    unsigned short count;
    char pad1[0x6e - 0x24];
    unsigned short shift;
    char pad2[0x140 - 0x70];
    Elem_82C2CFE8 *elems;
} Obj_82C2CFE8;


int fn_82C2CFE8(Obj_82C2CFE8 *p, float *out, unsigned short n)
{
    float scale;
    int k;
    short i;
    short j;

    k = 0;
    scale = 1.0f / (float)(1 << (p->shift - 1));
    for (i = 0; i < n; i++) {
        for (j = 0; j < p->count; j++) {
            out[k++] = p->elems[j].data[i] * scale;
        }
    }
    return 0;
}
