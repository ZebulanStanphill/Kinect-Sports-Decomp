extern "C" unsigned short _byteswap_ushort(unsigned short);
extern "C" unsigned long _byteswap_ulong(unsigned long);

class File_82E6F878
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

class Index_82E6F878
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
    virtual void f24();
    virtual void f28();
    virtual void f2c();
    virtual void f30();
    virtual void f34();
    virtual void f38();
    virtual void f3c();
    virtual void f40();
    virtual void f44();
    virtual void f48();
    virtual void f4c();
    virtual int SetCount(unsigned int count); /* 0x50 */
};

class Table_82E6F878
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
    File_82E6F878 *file; /* 0x2c */
    char pad30[0x40 - 0x30];
    unsigned __int64 totalSize;  /* 0x40 */
    unsigned __int64 entryCount; /* 0x48 */
    char pad50[0x58 - 0x50];
    Index_82E6F878 *index;  /* 0x58 */
    unsigned int entrySize; /* 0x5c */
    unsigned short flags;   /* 0x60 */
};

extern "C" int fn_82E6F878(Table_82E6F878 *self, unsigned __int64 index)
{
    unsigned __int64 offset;
    unsigned int count;
    unsigned int transferred;
    unsigned short flags;
    int hr;

    if (index > self->entryCount) {
        return 0xC00D36B2;
    }
    if (index >= self->entryCount) {
        hr = self->index->SetCount((unsigned int)index + 1);
        if (hr < 0) {
            goto done;
        }
    }
    offset = 0;
    hr = self->GetEntryOffset(index, &offset, 0);
    if (hr < 0) {
        goto done;
    }
    hr = self->file->Seek(offset);
    if (hr < 0) {
        goto done;
    }
    transferred = 0;
    count = _byteswap_ulong((unsigned int)(self->totalSize / self->entrySize));
    hr = self->file->Write(&count, 4, &transferred);
    if (hr < 0) {
        goto done;
    }
    flags = _byteswap_ushort(self->flags);
    hr = self->file->Write(&flags, 2, &transferred);
done:
    if (index >= self->entryCount) {
        self->entryCount++;
    }
    return hr;
}
