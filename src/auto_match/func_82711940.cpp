struct Value_82711940;

extern "C" void fn_82273CD8(Value_82711940 *value, int type);
extern "C" void fn_82273C88(Value_82711940 *value);
extern "C" const double lbl_82005710;

struct Value_82711940 {
    unsigned int object; /* 0x0 */
    unsigned int type;   /* 0x4 */
    double number;       /* 0x8 */

    __forceinline Value_82711940() : object(0), type(0)
    {
    }

    __forceinline ~Value_82711940()
    {
        fn_82273C88(this);
    }

    __forceinline void SetNumber(double value)
    {
        fn_82273CD8(this, 3);
        number = value;
    }
};

struct Movie_82711940 {
    virtual void Unused00();
    virtual void Unused01();
    virtual void Unused02();
    virtual void Unused03();
    virtual void Unused04();
    virtual void Unused05();
    virtual void Unused06();
    virtual void Unused07();
    virtual void Unused08();
    virtual void Unused09();
    virtual void Unused10();
    virtual void Unused11();
    virtual void Unused12();
    virtual void Unused13();
    virtual void Unused14();
    virtual void Unused15();
    virtual void Unused16();
    virtual unsigned char GetVariable(Value_82711940 *value, const char *path);
};

extern "C" void *fn_826F6FA8(Movie_82711940 *movie, int level);

struct Object_82711940 {
    char reserved00[0xc];
    Movie_82711940 **movie; /* 0x0c */
};

extern "C" unsigned char fn_82711940(Object_82711940 *self)
{
    if (*self->movie != 0) {
        Value_82711940 value;

        if (!(*self->movie)->GetVariable(&value, "_global.gfx_ime_candidate_list_state")) {
            value.SetNumber(0.0);
        }
        return fn_826F6FA8(*self->movie, 9999) != 0 && value.number == 2.0 ? 1 : 0;
    }
    return 0;
}
