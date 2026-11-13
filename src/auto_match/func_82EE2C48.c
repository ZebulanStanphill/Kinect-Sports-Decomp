typedef struct Obj_82EE2C48 Obj_82EE2C48;

typedef struct {
    int (*query)(Obj_82EE2C48 *self, char *iid, void *out);
    void *s1;
    int (*release)(Obj_82EE2C48 *self);
    void *s3[0x60 / 4 - 3];
    int (*f60)(Obj_82EE2C48 *self, char *a, char *b);
} Vt_82EE2C48;

struct Obj_82EE2C48 {
    Vt_82EE2C48 *vt;
};

typedef struct Header_82EE2C48 {
    char pad0[0x10];
    unsigned short length;
} Header_82EE2C48;

extern char lbl_82153478[];
extern char lbl_821537A8[];
extern char lbl_821531C8[];
extern int fn_82E2D068(Obj_82EE2C48 **out);
extern int fn_82E275D0(Obj_82EE2C48 *obj, Header_82EE2C48 *header, int size);

int fn_82EE2C48(Header_82EE2C48 *header, void **out)
{
    int hr;
    Obj_82EE2C48 *obj;
    *out = 0;
    obj = 0;
    hr = fn_82E2D068(&obj);
    if (hr >= 0) {
        if (obj == 0) {
            hr = 0x8000ffff;
        } else {
            if (header != 0) {
                hr = fn_82E275D0(obj, header, header->length + 0x12);
                if (hr >= 0)
                    hr = obj->vt->query(obj, lbl_821531C8, out);
            } else {
                hr = obj->vt->f60(obj, lbl_82153478, lbl_821537A8);
                if (hr >= 0)
                    hr = obj->vt->query(obj, lbl_821531C8, out);
            }
        }
    }
    if (obj != 0)
        obj->vt->release(obj);
    return hr;
}
