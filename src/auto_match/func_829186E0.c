typedef struct VT_829186E0 { int pad[3]; char *(*f0c)(struct O_829186E0 *); } VT_829186E0;
typedef struct O_829186E0 { VT_829186E0 *vt; } O_829186E0;
extern void *memcpy(void *, const void *, unsigned);

int fn_829186E0(O_829186E0 *p, unsigned int start, const int *src, float *temp, unsigned int count)
{
    unsigned int i; unsigned int n = count * 4;
    for (i = 0; i < n; i++)
        temp[i] = (float)src[i];
    memcpy(p->vt->f0c(p) + start * 16, src, count * 16);
    return 0;
}
