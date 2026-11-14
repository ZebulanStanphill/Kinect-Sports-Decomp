// lbl_820BC500 (7000.0f) and lbl_8216DFE4 (0.251188636f, -12 dB) are pooled literals: score with
// --alias __real@45dac000=lbl_820BC500 --alias __real@3e809bcc=lbl_8216DFE4.
typedef struct Obj_82FDA718 Obj_82FDA718;
typedef struct ObjVtbl_82FDA718 {
    void *pad0[5];
    int (*get)(Obj_82FDA718 *self, void *data, unsigned int size);  /* 0x14 */
} ObjVtbl_82FDA718;
struct Obj_82FDA718 {
    ObjVtbl_82FDA718 *vt;
    float a;            /* 0x04 */
    float b;            /* 0x08 */
    float c;            /* 0x0c */
    float d;            /* 0x10 */
    unsigned char flag; /* 0x14 */
};

int fn_82FDA718(Obj_82FDA718 *self, unsigned int unused, void *data, unsigned int size)
{
    if (size == 0) {
        self->a = 50.0f;
        self->b = 2.0f;
        self->c = 7000.0f;
        self->d = 0.251188636f;
        self->flag = 1;
        return 1;
    }
    return self->vt->get(self, data, size);
}
