struct Obj_827DEAA8 {
    virtual void v0();
    virtual void v1();
    virtual bool Check();
    char *data;
    void *valid;
    __forceinline unsigned char IsValid() { if (valid != 0) return 1; return 0; }
};

extern "C" char *fn_827DEAA8(Obj_827DEAA8 *obj)
{
    if (obj->IsValid() && !obj->Check())
        return obj->data + 16;
    return 0;
}
