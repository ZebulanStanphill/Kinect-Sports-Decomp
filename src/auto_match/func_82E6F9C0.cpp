extern "C" unsigned short _byteswap_ushort(unsigned short);
extern "C" unsigned long _byteswap_ulong(unsigned long);

class File_82E6F9C0
{
  public:
    virtual void f00();
    virtual void f04();
    virtual void f08();
    virtual void f0c();
    virtual void f10();
    virtual void f14();
    virtual void f18();
    virtual int Seek(unsigned __int64 offset); /* 0x1c */
    virtual void f20();
    virtual int Read(void *buffer, unsigned int size, unsigned int *got); /* 0x24 */
    virtual void f28();
    virtual void f2c();
    virtual int Write(const void *buffer, unsigned int size, unsigned int *written); /* 0x30 */
};

class Table_82E6F9C0
{
  public:
    virtual void f00();
    virtual void f04();
    virtual void f08();
    virtual void f0c();
    virtual void f10();
    virtual void f14();
    virtual void f18();
    virtual void f1c();
    virtual void f20();
    virtual int GetEntryOffset(unsigned __int64 index, unsigned __int64 *offset, int flags); /* 0x24 */

    char pad8[0x2c - 0x8];
    File_82E6F9C0 *file; /* 0x2c */
    char pad30[0x48 - 0x30];
    unsigned __int64 entryCount; /* 0x48 */
};

extern "C" int fn_82E6F9C0(Table_82E6F9C0 *self, unsigned int tag, unsigned short value)
{
    unsigned __int64 index;
    unsigned __int64 offset;
    unsigned int entryTag;
    unsigned int transferred;
    int hr;

    value = _byteswap_ushort(value);
    entryTag = 0xffffffff;
    hr = 0;
    for (index = self->entryCount; entryTag >= tag && index > 0; index--) {
        offset = 0;
        hr = self->GetEntryOffset(index - 1, &offset, 0);
        if (hr < 0) {
            return hr;
        }
        hr = self->file->Seek(offset);
        if (hr < 0) {
            return hr;
        }
        transferred = 0;
        hr = self->file->Read(&entryTag, 4, &transferred);
        if (hr < 0) {
            return hr;
        }
        entryTag = _byteswap_ulong(entryTag);
        if (entryTag == tag) {
            hr = self->file->Write(&value, 2, &transferred);
            if (hr < 0) {
                return hr;
            }
        }
    }
    return hr;
}
