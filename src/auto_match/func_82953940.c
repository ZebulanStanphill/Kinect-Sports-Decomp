typedef struct Entry_82953940 {
    int pad[4];
    int index;            /* 0x10 */
} Entry_82953940;

typedef struct Src_82953940 {
    unsigned int flags;   /* 0x00 */
    int pad4;
    int *data;            /* 0x08 */
    int padC;
    int *idx;             /* 0x10 */
} Src_82953940;

typedef struct Self_82953940 {
    int pad[5];
    Entry_82953940 **entries;   /* 0x14 */
    int pad2[(0x104 - 0x18) / 4];
    Src_82953940 *src;          /* 0x104 */
} Self_82953940;

typedef struct Obj_82953940 {
    unsigned int flags;   /* 0x00 */
    int pad4;
    int *data;            /* 0x08 */
    int padC;
    int *idx;             /* 0x10 */
} Obj_82953940;

extern void *fn_82963998(unsigned int size);
extern Obj_82953940 *fn_829632A0(void *mem);
extern int fn_82963A30(Obj_82953940 *o, unsigned int flags, unsigned int a, unsigned int b, int c);
extern int fn_829632F0(Obj_82953940 *o, Src_82953940 *s);
extern int fn_829644B8(Self_82953940 *self, Obj_82953940 *o);
extern void fn_82BA02A8(Obj_82953940 *o);
extern void fn_829639F0(Obj_82953940 *o);

int fn_82953940(Self_82953940 *self, int *map, unsigned int rows, unsigned int n)
{
    void *mem;
    Obj_82953940 *obj;
    unsigned int count;
    unsigned int i;
    unsigned int j;
    unsigned int k;
    int hr;

    mem = fn_82963998(0x74);
    if (mem != 0) {
        obj = fn_829632A0(mem);
    } else {
        obj = 0;
    }
    if (obj == 0) {
        hr = (int)0x8007000E;
    } else {
        count = 0;
        for (i = 0; i < n; i++) {
            if (map[self->entries[self->src->idx[i]]->index] != -1) {
                count++;
            }
        }
        hr = fn_82963A30(obj, (self->src->flags & 0xfff00000) | count, count * rows, count, 0);
        if (hr >= 0) {
            hr = fn_829632F0(obj, self->src);
            if (hr >= 0) {
                for (j = 0; j < rows; j++) {
                    k = 0;
                    for (i = 0; i < n; i++) {
                        Src_82953940 *s = self->src;
                        if (map[self->entries[s->idx[i]]->index] != -1) {
                            obj->data[j * count + k] = s->data[j * n + i];
                            if (j == 0) {
                                obj->idx[k] = self->src->idx[i];
                            }
                            k++;
                        }
                    }
                }
                hr = fn_829644B8(self, obj);
                if (hr >= 0) {
                    obj = 0;
                    hr = 0;
                }
            }
        }
        if (obj != 0) {
            fn_82BA02A8(obj);
            fn_829639F0(obj);
        }
    }
    return hr;
}
