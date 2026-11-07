typedef struct AllocVt_8305EB60 AllocVt_8305EB60;
typedef struct Alloc_8305EB60 {
    AllocVt_8305EB60 *vt;
} Alloc_8305EB60;

struct AllocVt_8305EB60 {
    void *slot0;
    void (*Free)(Alloc_8305EB60 *self, void *mem);
};

typedef struct Obj_8305EB60 {
    int pad00[4];
    void *buf;      /* 0x10 */
    int pad14[6];
    int value;      /* 0x2c */
    int key;        /* 0x30 */
} Obj_8305EB60;

extern int fn_8305E390(Obj_8305EB60 *o, int key);
extern Alloc_8305EB60 *lbl_831BCA54;

void fn_8305EB60(Obj_8305EB60 *o, int key)
{
    if (key != o->key) {
        if (o->buf != 0) {
            lbl_831BCA54->vt->Free(lbl_831BCA54, o->buf);
            o->buf = 0;
        }
        o->value = fn_8305E390(o, key);
        o->key = key;
    }
}
