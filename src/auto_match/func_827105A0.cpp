struct StrData_827105A0 {
    int pad0[2];
    int refs; /* 0x8 */
};

struct Str_827105A0 {
    StrData_827105A0 *data; /* 0x0 */
};

struct Root_827105A0 {
    int pad0[2];
    Str_827105A0 name; /* 0x8 */
};

struct Movie_827105A0 {
    char pad0[0x78];
    Root_827105A0 *root; /* 0x78 */
};

class Value_827105A0
{
  public:
    unsigned char type; /* 0x0 */
    char pad1[3];
    StrData_827105A0 *string; /* 0x4 */
    double number;            /* 0x8 */

    Value_827105A0(const Str_827105A0 &other)
    {
        type = 5;
        string = other.data;
        string->refs++;
    }

    Value_827105A0(const Value_827105A0 &other);
    ~Value_827105A0();
};

class Interface_827105A0
{
  public:
    virtual void v0();
    virtual void v1();
    virtual int GetType();
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
    virtual unsigned char IsReadOnly();
};

class Target_827105A0
{
  public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void SetValue(Movie_827105A0 *movie, Value_827105A0 &value);
};

struct Object_827105A0 {
    Target_827105A0 target; /* 0x00 */
    char pad4[0xc];
    Interface_827105A0 iface; /* 0x10 */
};

struct Call_827105A0 {
    int pad0;
    Value_827105A0 *result;     /* 0x04 */
    Interface_827105A0 *object; /* 0x08 */
    char padC[0xc];
    Movie_827105A0 *movie; /* 0x18 */
    int argCount;          /* 0x1c */
};

extern "C" {
Value_827105A0 *fn_826957D0(Call_827105A0 *call, unsigned int back);
void fn_82696D38(Str_827105A0 *out, Value_827105A0 *value, Movie_827105A0 *movie, int precision, int flags);
void fn_82681838(Value_827105A0 *value, Str_827105A0 *string);
void fn_826944C8(StrData_827105A0 *data);
void fn_82695FA0(Value_827105A0 *dst, Value_827105A0 *src);

void fn_827105A0(Call_827105A0 *call)
{
    Object_827105A0 *object = 0;

    if (call->object != 0 && call->object->GetType() == 8 && !call->object->IsReadOnly()) {
        if (call->object != 0) {
            object = (Object_827105A0 *)((char *)call->object - 0x10);
        }
        Value_827105A0 value(call->argCount > 0 ? Value_827105A0(*fn_826957D0(call, 0))
                                                : Value_827105A0(call->movie->root->name));

        object->target.SetValue(call->movie, value);
        fn_82695FA0(call->result, &value);
    } else if (call->argCount == 0) {
        fn_82681838(call->result, &call->movie->root->name);
    } else {
        Movie_827105A0 *movie = call->movie;
        Str_827105A0 string;
        StrData_827105A0 *data;
        Value_827105A0 *argument = fn_826957D0(call, 0);

        fn_82696D38(&string, argument, movie, -1, 0);
        fn_82681838(call->result, &string);
        data = string.data;
        if (--data->refs == 0) {
            fn_826944C8(data);
        }
    }
}
}
