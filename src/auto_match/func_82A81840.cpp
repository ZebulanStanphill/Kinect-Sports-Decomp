struct Unknown_82A81840 {
    virtual int QueryInterface(const void *iid, void **out); /* 0x00 */
    virtual void slot1();
    virtual void slot2();
    virtual int GetData(void **out); /* 0x0c */
};

struct Blob_82A81840 {
    unsigned char bytes[0x10];
};

struct Owner_82A81840 {
    char pad0[0x8];
    Unknown_82A81840 *primary; /* 0x08 */
    void *secondary;           /* 0x0c */
    char pad10[0x54];
    Blob_82A81840 data; /* 0x64 */
};

extern "C" {
extern char lbl_82089748[];
extern char lbl_82089DB0[];
void fn_8265C990(void *p, unsigned int flags);
}

extern "C" int fn_82A81840(Owner_82A81840 *self, Unknown_82A81840 *source)
{
    int hr;

    hr = source->QueryInterface(lbl_82089748, (void **)&self->primary);
    if (hr >= 0) {
        hr = source->QueryInterface(lbl_82089DB0, &self->secondary);
        if (hr == 0x80004002) {
            hr = 0;
        }
        if (hr >= 0) {
            Blob_82A81840 *data = 0;
            if (self->primary->GetData((void **)&data) >= 0) {
                self->data = *data;
                fn_8265C990(data, 0x20970000);
            }
        }
    }
    return hr;
}
