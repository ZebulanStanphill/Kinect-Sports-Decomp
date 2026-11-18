typedef struct AllocVt_8305E3E8 AllocVt_8305E3E8;

typedef struct Alloc_8305E3E8 {
    AllocVt_8305E3E8 *vt;
} Alloc_8305E3E8;

struct AllocVt_8305E3E8 {
    void *(*Alloc)(Alloc_8305E3E8 *self, unsigned int size);
    void (*Free)(Alloc_8305E3E8 *self, void *mem);
};

typedef struct Array_8305E3E8 {
    int pad00[4];
    int *heap;    /* 0x10 */
    int local[6]; /* 0x14 */
    int *data;    /* 0x2c */
    int count;    /* 0x30 */
} Array_8305E3E8;

extern void *memcpy(void *dst, const void *src, unsigned int size);
extern Alloc_8305E3E8 *lbl_831BCA54;

void fn_8305E3E8(Array_8305E3E8 *array, int count)
{
    int copied;
    if (count > 5) {
        copied = array->count;
        array->data = (int *)lbl_831BCA54->vt->Alloc(lbl_831BCA54, count * 4);
        array->count = count;
        if (copied > 0) {
            memcpy(array->data, array->heap != 0 ? array->heap : array->local,
                   (copied < count ? copied : count) * 4);
            if (array->heap != 0) {
                lbl_831BCA54->vt->Free(lbl_831BCA54, array->heap);
            }
        }
        array->heap = array->data;
    } else {
        copied = array->count;
        array->data = array->local;
        if (copied > 0 && array->heap != 0) {
            memcpy(array->local, array->heap, (count < copied ? count : copied) * 4);
            lbl_831BCA54->vt->Free(lbl_831BCA54, array->heap);
            array->heap = 0;
        }
        array->count = count;
    }
}
