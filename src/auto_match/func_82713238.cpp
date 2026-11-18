class Value_82713238
{
  public:
    unsigned char type; /* 0x0 */
    char pad[7];
    double number; /* 0x8 */

    Value_82713238()
    {
        type = 0;
    }

    Value_82713238(const Value_82713238 &other);
    ~Value_82713238();
};

class Interface_82713238
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

class Target_82713238
{
  public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void SetValue(int index, Value_82713238 &value);
};

struct Object_82713238 {
    Target_82713238 target; /* 0x00 */
    char pad4[0xc];
    Interface_82713238 iface; /* 0x10 */
};

struct Call_82713238 {
    int pad0;
    Value_82713238 *result;     /* 0x04 */
    Interface_82713238 *object; /* 0x08 */
    char padC[0xc];
    int index;    /* 0x18 */
    int argCount; /* 0x1c */
};

extern "C" {
extern const double lbl_82005710;
Value_82713238 *fn_826957D0(Call_82713238 *call, unsigned int back);
double fn_826972E0(Value_82713238 *value, int index);
void fn_82681898(Value_82713238 *value, double number);
void fn_82695FA0(Value_82713238 *dst, Value_82713238 *src);

void fn_82713238(Call_82713238 *call)
{
    if (call->object != 0 && call->object->GetType() == 9 && !call->object->IsReadOnly()) {
        Object_82713238 *object = call->object != 0 ? (Object_82713238 *)((char *)call->object - 0x10) : 0;
        Value_82713238 value(call->argCount > 0 ? Value_82713238(*fn_826957D0(call, 0)) : Value_82713238());

        object->target.SetValue(call->index, value);
        fn_82695FA0(call->result, &value);
    } else {
        double number;

        if (call->argCount == 0) {
            number = lbl_82005710;
        } else {
            number = fn_826972E0(fn_826957D0(call, 0), call->index);
        }
        fn_82681898(call->result, number);
    }
}
}
