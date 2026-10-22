typedef struct IObj IObj;
typedef struct IObjVtbl {
    void *pad[7];
    int (*GetB)(IObj *self, int a, int b, unsigned short *out);
    int (*GetA)(IObj *self, int a, int b, unsigned short *buf, unsigned short *len);
    int (*Use)(IObj *self, unsigned short *buf, unsigned short v, int c, int d);
} IObjVtbl;
struct IObj {
    IObjVtbl *vt;
};

extern unsigned short *fn_82E50BE8(unsigned int size, int a, int b, int c, int d);
extern void fn_82E4FE40(void *p);

int fn_82F411D0(IObj *obj, int b, int a, int c, int flag)
{
    int hr;
    unsigned short *buf;
    unsigned short len;
    unsigned short v;

    hr = 0;
    v = (unsigned short)a;
    len = 0;
    if (flag == 0) {
        hr = obj->vt->GetA(obj, a, b, 0, &len);
        if (hr >= 0) {
            unsigned int sz = len * 2;
            buf = fn_82E50BE8(sz, 0, 0, 0, 0);
            if (buf == 0) {
                hr = 0x8007000e;
            } else {
                hr = obj->vt->GetA(obj, a, b, buf, &len);
                if (hr >= 0) {
                    hr = obj->vt->GetB(obj, a, b, &v);
                    if (hr >= 0) {
                        hr = obj->vt->Use(obj, buf, v, c, 0);
                    }
                }
                fn_82E4FE40(buf);
            }
        }
    }
    return hr;
}
