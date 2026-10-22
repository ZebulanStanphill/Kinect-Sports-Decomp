typedef unsigned int size_t;
void *memcpy(void *dst, const void *src, size_t n);
void *memset(void *dst, int c, size_t n);

typedef struct Desc {
    unsigned int w[22];
    unsigned char *data;
} Desc;

typedef struct Out {
    unsigned int w[22];
    unsigned char data[0x80];
} Out;

void fn_82C48D38(Out *out, char *ctx, Desc *src)
{
    out->w[0] = src->w[0];
    out->w[1] = src->w[1];
    out->w[2] = src->w[2];
    out->w[3] = src->w[3];
    out->w[4] = src->w[4];
    out->w[5] = src->w[5];
    out->w[6] = src->w[6];
    out->w[7] = src->w[7];
    out->w[8] = src->w[8];
    out->w[9] = src->w[9];
    out->w[10] = src->w[10];
    out->w[11] = src->w[11];
    out->w[12] = src->w[12];
    out->w[13] = src->w[13];
    out->w[14] = src->w[14];
    out->w[15] = src->w[15];
    out->w[16] = src->w[16];
    out->w[17] = src->w[17];
    out->w[18] = src->w[18];
    out->w[19] = src->w[19];
    out->w[20] = src->w[20];
    out->w[21] = src->w[21];
    if (src->data != 0)
        memcpy(out->data, src->data, 0x80);
    else
        memset(out->data, 0, 0x80);
    out->w[0] = *(int *)(ctx + 0x5580) != 0;
    out->w[1] = *(unsigned int *)(ctx + 0x5628);
    out->w[2] = *(unsigned int *)(ctx + 0x562c);
}
