struct Guid_82E5E628 {
    unsigned int data1;
    unsigned short data2, data3;
    unsigned char data4[8];
};

class Attrs_82E5E628 {
public:
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0c();
    virtual void v10(); virtual void v14(); virtual void v18();
    virtual int GetUINT32(const Guid_82E5E628 &key, unsigned int *value);   /* 0x1c */
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2c();
    virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3c();
    virtual void v40(); virtual void v44(); virtual void v48(); virtual void v4c();
    virtual void v50();
    virtual int SetUINT32(const Guid_82E5E628 &key, unsigned int value);    /* 0x54 */
};

extern "C" const Guid_82E5E628 lbl_8214C720;

extern "C" int fn_82E5E628(Attrs_82E5E628 *attrs, int enable)
{
    unsigned int value;
    int hr;

    if (attrs == 0)
        return 0x80070057;
    value = 0;
    hr = attrs->GetUINT32(lbl_8214C720, &value);
    value = hr >= 0 ? value : 0;
    if (enable)
        value |= 0x80000000;
    else
        value &= 0x7fffffff;
    return attrs->SetUINT32(lbl_8214C720, value);
}
