struct Node_8271D378 {
    int pad;
    Node_8271D378 *lower; /* 0x4 */
    int refs;             /* 0x8 */
};

class String_8271D378
{
  public:
    Node_8271D378 *node;

    bool Compare(const String_8271D378 &other, bool caseSensitive) const;
};

struct Env_8274C388 {
    char pad000[0x114];
    int available; /* 0x114 */
};

struct Object_8274C388 {
    char pad00[0x78];
    char *manager;         /* 0x78 */
    unsigned char version; /* 0x7c */
};

struct Value_8274C388 {
    unsigned char type; /* 0x0 */
    char pad1[3];
    unsigned char boolValue; /* 0x4 */
};

extern "C" void fn_82681728(String_8271D378 *out, void *manager, const char *text);
extern "C" void fn_826944C8(Node_8271D378 *node);
extern "C" Env_8274C388 *fn_826A7398(Object_8274C388 *object);
extern "C" void fn_826959C8(Value_8274C388 *value);
extern "C" int fn_82713EE8(void *env, Object_8274C388 *object, const String_8271D378 *member,
                           Value_8274C388 *value);

extern "C" int fn_8274C388(void *env, Object_8274C388 *object, const String_8271D378 *member,
                           Value_8274C388 *value)
{
    bool caseSensitive = object->version > 6;
    String_8271D378 name;
    bool matches;
    Node_8271D378 *released;

    fn_82681728(&name, object->manager + 0x254, "available");
    matches = name.Compare(*member, caseSensitive);
    released = name.node;
    if (--released->refs == 0) {
        fn_826944C8(released);
    }
    if (matches) {
        Env_8274C388 *objectEnv = fn_826A7398(object);
        int available = objectEnv->available;

        fn_826959C8(value);
        value->type = 2;
        value->boolValue = available != 0;
        return 1;
    }
    return fn_82713EE8(env, object, member, value);
}
