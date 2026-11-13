struct Obj_82E3B7C8 {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual int GetCount(void *key, unsigned int *count);
    virtual void slot4();
    virtual void slot5();
    virtual int Remove(void *key, int index, int flags);
};

extern "C" char lbl_82154A18[];

extern "C" int fn_82E3B7C8(void *unused, Obj_82E3B7C8 *obj)
{
    unsigned int count;
    int hr;
    if (obj == 0)
        return 0x80004003;
    count = 0;
    hr = obj->GetCount(lbl_82154A18, &count);
    if (hr >= 0 && count != 0) {
        do {
            hr = obj->Remove(lbl_82154A18, 0, 0);
            if (hr < 0)
                break;
        } while (--count != 0);
    }
    return hr;
}
