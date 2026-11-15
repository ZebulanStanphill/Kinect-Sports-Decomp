class Interface_82E2D118
{
  public:
    virtual int unused0();
    virtual int unused1();
    virtual int release();
    virtual int unused3();
    virtual int unused4();
    virtual int unused5();
    virtual int unused6();
    virtual int unused7();
    virtual int unused8();
    virtual int unused9();
    virtual int unused10();
    virtual int unused11();
    virtual int unused12();
    virtual int unused13();
    virtual int unused14();
    virtual int unused15();
    virtual int read(const void *, void **, unsigned int *);
};

extern "C" const char lbl_821534C8[];
extern "C" int fn_82E2D068(Interface_82E2D118 **);
extern "C" int fn_82E25C48(Interface_82E2D118 *, void *, unsigned int);
extern "C" void fn_82E4FE40(void *);

extern "C" int fn_82E2D118(Interface_82E2D118 *self, Interface_82E2D118 **out)
{
    Interface_82E2D118 *object;
    void *data = 0;
    unsigned int size;
    int result;
    object = 0;
    result = self->read(lbl_821534C8, &data, &size);
    if (result >= 0) {
        result = fn_82E2D068(&object);
        if (result >= 0) {
            result = fn_82E25C48(object, data, size);
            if (result >= 0) {
                Interface_82E2D118 *saved = object;
                object = 0;
                *out = saved;
            }
        }
    }
    if (data) {
        fn_82E4FE40(data);
    }
    if (object) {
        object->release();
    }
    return result;
}
