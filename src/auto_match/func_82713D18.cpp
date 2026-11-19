class Value_82713D18
{
  public:
    unsigned char type; /* 0x0 */
    char pad1[3];
    unsigned char boolean; /* 0x4 */
    char pad5[3];
    double number; /* 0x8 */

    Value_82713D18()
    {
        type = 0;
    }

    Value_82713D18(const Value_82713D18 &other);
    ~Value_82713D18();
};

class Interface_82713D18
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

class Target_82713D18
{
  public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void SetValue(int index, Value_82713D18 &value);
};

struct Object_82713D18 {
    Target_82713D18 target; /* 0x00 */
    char pad4[0xc];
    Interface_82713D18 iface; /* 0x10 */
};

struct Call_82713D18 {
    int pad0;
    Value_82713D18 *result;     /* 0x04 */
    Interface_82713D18 *object; /* 0x08 */
    char padC[0xc];
    int index;    /* 0x18 */
    int argCount; /* 0x1c */
};

extern "C" {
Value_82713D18 *fn_826957D0(Call_82713D18 *call, unsigned int back);
unsigned char fn_82695608(Value_82713D18 *value, int index);
void fn_826959C8(Value_82713D18 *value);
void fn_82695FA0(Value_82713D18 *dst, Value_82713D18 *src);

void fn_82713D18(Call_82713D18 *call)
{
    if (call->object != 0 && call->object->GetType() == 10 && !call->object->IsReadOnly()) {
        Object_82713D18 *object = call->object != 0 ? (Object_82713D18 *)((char *)call->object - 0x10) : 0;
        Value_82713D18 value(call->argCount > 0 ? Value_82713D18(*fn_826957D0(call, 0)) : Value_82713D18());

        object->target.SetValue(call->index, value);
        fn_82695FA0(call->result, &value);
    } else {
        Value_82713D18 *result;

        if (call->argCount == 0) {
            result = call->result;
            fn_826959C8(result);
            result->boolean = 0;
            result->type = 2;
        } else {
            unsigned char boolean = fn_82695608(fn_826957D0(call, 0), call->index);

            result = call->result;
            fn_826959C8(result);
            result->boolean = boolean;
            result->type = 2;
        }
    }
}
}
