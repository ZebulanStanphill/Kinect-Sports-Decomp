typedef struct GUID {
    unsigned int Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char Data4[8];
} GUID;

class Reader_82E5E6C0
{
  public:
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
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual int GetOutputCount(unsigned short *count); /* 0x98 */
    virtual int GetOutputValue(unsigned short index, GUID *type, unsigned short *value, void *reserved,
                               unsigned int *size); /* 0x9c */
};

extern "C" const GUID lbl_8202E618;

extern "C" int fn_82E5E6C0(Reader_82E5E6C0 *reader)
{
    unsigned short count;
    unsigned short index;
    unsigned short value;
    unsigned int size;
    GUID type;
    int total;
    int hr;

    if (reader != 0) {
        count = 0;
        total = 0;
        if (reader->GetOutputCount(&count) >= 0) {
            for (index = 0; index < count; index++) {
                value = 0;
                size = 0;
                type = lbl_8202E618;
                hr = reader->GetOutputValue(index, &type, &value, 0, &size);
                if ((int)0xc00d36b1 == hr) {
                    hr = 0;
                }
                if (hr < 0) {
                    return 0;
                }
                if (value == 0xffff) {
                    total = 0xff;
                    break;
                }
                total += value;
            }
            return total;
        }
    }
    return 0;
}
