extern "C" int fn_82A29DE8(const char *name, unsigned int access, unsigned int share, void *security,
                           unsigned int disposition, unsigned int flags, void *templateFile);
extern "C" int fn_82A2B4B8(int handle, unsigned __int64 *size);

struct Stream_82C04F60 {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual int getError();
    virtual void slot9();
    virtual void slot10();
    virtual void slot11();
    virtual int reset();
    virtual void slot13();
    virtual void slot14();
    virtual void slot15();
    virtual void slot16();
    virtual void slot17();
    virtual void slot18();
    virtual void slot19();
    virtual void slot20();
    virtual void slot21();
    virtual void slot22();
    virtual void slot23();
    virtual void slot24();
    virtual void slot25();
    virtual void slot26();
    virtual void slot27();
    virtual void slot28();
    virtual int open(int a, int b, int c, int d);
    char pad4[0x24];
    int handle; /* 0x2c */
    char pad30[0x10];
    unsigned __int64 size; /* 0x40 */
};

extern "C" int fn_82C04F60(Stream_82C04F60 *self, const char *filename, int unused, int a, int b, int c,
                           int d)
{
    int status = self->reset();
    if (status >= 0) {
        int result;
        self->handle = fn_82A29DE8(filename, 0x80000000, 1, 0, 3, 0x60000080, 0);
        if (self->handle == -1) {
            result = self->getError();
        } else {
            result = 0;
        }
        if (result >= 0) {
            unsigned __int64 size;
            if (fn_82A2B4B8(self->handle, &size)) {
                self->size = size;
            } else {
                result = self->getError();
            }
            if (result >= 0) {
                return self->open(a, b, c, d);
            }
        }
        return result;
    }
    return status;
}
