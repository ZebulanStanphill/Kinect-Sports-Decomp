// Sets four integer properties (VT_I4 values under keys of one format id) on the object's
// property store through its SetValue method.

struct Guid_82E49A70 {
    unsigned int data1;
    unsigned short data2;
    unsigned short data3;
    unsigned char data4[8];
};

struct PropertyKey_82E49A70 {
    Guid_82E49A70 fmtid; // 0x00
    unsigned int pid;    // 0x10
};

struct PropVariant_82E49A70 {
    unsigned short vt; // 0x00
    unsigned short reserved1;
    unsigned short reserved2;
    unsigned short reserved3;
    int lVal; // 0x08
    int pad;
};

class PropertyStore_82E49A70
{
  public:
    virtual int QueryInterface(const Guid_82E49A70 &iid, void **out);
    virtual unsigned int AddRef();
    virtual unsigned int Release();
    virtual int GetCount(unsigned int *count);
    virtual int GetAt(unsigned int index, PropertyKey_82E49A70 *key);
    virtual int GetValue(const PropertyKey_82E49A70 &key, PropVariant_82E49A70 *value);
    virtual int SetValue(const PropertyKey_82E49A70 &key, const PropVariant_82E49A70 &value);
};

struct Self_82E49A70 {
    char pad0[0xbc];
    PropertyStore_82E49A70 *properties; // 0xbc
};

extern "C" const Guid_82E49A70 lbl_8214C010;

extern "C" int fn_82E49A70(Self_82E49A70 *self)
{
    PropVariant_82E49A70 value;
    PropertyKey_82E49A70 key;

    value.vt = 3;
    value.lVal = 5;
    key.fmtid = lbl_8214C010;
    key.pid = 10;
    self->properties->SetValue(key, value);
    value.vt = 3;
    value.lVal = 100;
    key.pid = 0x11;
    self->properties->SetValue(key, value);
    key.pid = 0x1c;
    self->properties->SetValue(key, value);
    key.pid = 0x19;
    self->properties->SetValue(key, value);
    return 0;
}
