extern int fn_826FB298();
extern int memmove();

typedef struct {
    unsigned int *data;
    unsigned int count;
    unsigned int unk8;
    unsigned int unkC;
} Vec;

void fn_826CD7D0(Vec *v, unsigned int idx, unsigned int *val)
{
    fn_826FB298(v, v->unkC, v->count + 1);
    if (idx < v->count - 1) {
        memmove(&v->data[idx] + 1, &v->data[idx], (v->count - idx - 1) * 4);
    }
    v->data[idx] = *val;
}
