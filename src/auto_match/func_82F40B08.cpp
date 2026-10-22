struct Req {
    char pad[0x18];
    int x18;
    char pad2[0x3c - 0x1c];
    int x3c;
    char pad3[4];
    unsigned int size;
    void *buf;
};

struct VBase {
    virtual int m00(); virtual int m01(); virtual int m02(); virtual int m03();
    virtual int m04(); virtual int m05(); virtual int m06(); virtual int m07();
    virtual int m08(); virtual int m09(); virtual int m10(); virtual int m11();
    virtual int m12(); virtual int m13(); virtual int m14(); virtual int m15();
    virtual int m16(); virtual int m17(); virtual int m18();
    virtual int Method(int, int, void *, unsigned int, void **, unsigned int *, int *);
};

struct D : virtual VBase {
    int d[5];
};

extern "C" void *fn_82E50BE8(unsigned int, int, int, int, int);
extern "C" int fn_82F41740(Req *, void **, unsigned int **);
extern "C" void *memcpy(void *, const void *, unsigned int);

extern "C" int fn_82F40B08(char *self, int unused, Req *req)
{
    void *data;
    unsigned int *len;
    int flag;
    int hr;
    void *buf;

    data = 0;
    len = 0;
    flag = 0;
    if (fn_82F41740(req, &data, &len) == 0 || data == 0 || len == 0) {
        hr = (int)0x80004005;
    } else {
        req->buf = 0;
        req->size = 0;
        hr = ((D *)(self - 0x18))->Method(req->x18, req->x3c, data, *len, &req->buf, &req->size, &flag);
        if (hr >= 0 && flag == 0) {
            req->size = *len;
            buf = fn_82E50BE8(*len, 0, 0, 0, 0);
            req->buf = buf;
            if (buf == 0) {
                hr = (int)0x8007000e;
            } else {
                memcpy(buf, data, *len);
            }
        }
    }
    return hr;
}
