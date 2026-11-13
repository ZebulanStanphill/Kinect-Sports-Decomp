struct Obj_82E5E1F0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual int Read(int id, void *buf, unsigned int size, unsigned int *read);
};

struct Data_82E5E1F0 {
    unsigned int first;
    unsigned int second;
    unsigned int third;
};

extern "C" int fn_82E5E1F0(Obj_82E5E1F0 *self, int id, unsigned int *first, unsigned int *second)
{
    int hr;
    unsigned int got = 0;
    Data_82E5E1F0 data;

    hr = self->Read(id, &data, sizeof(data), &got);
    if (hr >= 0) {
        if (got != sizeof(data)) {
            hr = 0x80004005;
        } else {
            if (first != 0)
                *first = data.first;
            if (second != 0)
                *second = data.second;
        }
    }
    return hr;
}
