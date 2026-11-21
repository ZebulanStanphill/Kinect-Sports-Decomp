#include "game/String_8268C510.h"

struct StrData_8275BD70 {
    const char *text; /* 0x0 */
    int pad4;
    int refs; /* 0x8 */
};

struct Str_8275BD70 {
    StrData_8275BD70 *data; /* 0x0 */
};

class Item_8275BD70
{
  public:
    virtual void v0();
    virtual void v1();
    virtual unsigned int GetType();
};

class Library_8275BD70
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
    virtual Library_8275BD70 *GetCurrent(); /* 0x48 */
};

struct Movie_8275BD70 {
    char pad0[0x74];
    Library_8275BD70 *library; /* 0x74 */
};

struct Value_8275BD70;
struct Object_8275BD70;
struct Target_8275BD70;

struct Call_8275BD70 {
    int pad0;
    Value_8275BD70 *result; /* 0x04 */
    void *object;           /* 0x08 */
    char padC[0xc];
    Movie_8275BD70 *movie; /* 0x18 */
    int argCount;          /* 0x1c */
};

extern "C" {
Target_8275BD70 *fn_8275BB38(Object_8275BD70 *object);
void fn_826CE3B0(Target_8275BD70 *target);
void fn_826CE4B0(Target_8275BD70 *target, Item_8275BD70 *item);
Value_8275BD70 *fn_826957D0(Call_8275BD70 *call, unsigned int back);
void fn_826944C8(StrData_8275BD70 *data);
void fn_8267C4C8(void *object);
void fn_82687270(void *object);
unsigned char fn_826DB990(Library_8275BD70 *library, struct ItemRef_8275BD70 *item,
                          const String_8268C510 &name);
}

struct LibraryRef_8275BD70 {
    Library_8275BD70 *p;

    LibraryRef_8275BD70(Library_8275BD70 *library) : p(library)
    {
        if (p != 0) {
            fn_8267C4C8(p);
        }
    }

    ~LibraryRef_8275BD70()
    {
        if (p != 0) {
            fn_82687270(p);
        }
    }
};

struct ItemRef_8275BD70 {
    Item_8275BD70 *p;
    int extra;

    ItemRef_8275BD70() : p(0), extra(0)
    {
    }

    ~ItemRef_8275BD70()
    {
        if (p != 0) {
            fn_82687270(p);
        }
    }
};

struct StrRef_8275BD70 {
    Str_8275BD70 str;

    ~StrRef_8275BD70()
    {
        StrData_8275BD70 *data = str.data;
        if (--data->refs == 0) {
            fn_826944C8(data);
        }
    }
};

extern "C" void fn_82696D38(Str_8275BD70 *out, Value_8275BD70 *value, Movie_8275BD70 *movie, int precision,
                            int flags);

static __forceinline Object_8275BD70 *ObjectOf(Call_8275BD70 *call)
{
    return call->object != 0 ? (Object_8275BD70 *)((char *)call->object - 0x10) : 0;
}

extern "C" void fn_8275BD70(Call_8275BD70 *call)
{
    Object_8275BD70 *object = ObjectOf(call);
    Target_8275BD70 *target;

    if (object == 0) {
        return;
    }
    target = fn_8275BB38(object);
    if (target == 0) {
        return;
    }
    if (call->argCount > 0) {
        Movie_8275BD70 *movie = call->movie;
        Value_8275BD70 *argument = fn_826957D0(call, 0);
        StrRef_8275BD70 name;

        fn_82696D38(&name.str, argument, movie, -1, 0);
        Object_8275BD70 *owner = ObjectOf(call);
        LibraryRef_8275BD70 library(call->movie->library->GetCurrent());

        if (owner != 0 && library.p != 0) {
            ItemRef_8275BD70 item;
            unsigned char missing;

            {
                String_8268C510 itemName(name.str.data->text);

                missing = !fn_826DB990(library.p, &item, itemName);
            }

            if (missing) {
                return;
            }
            if ((item.p->GetType() & 0xff00) != 0x400) {
                return;
            }
            if (item.p != 0) {
                fn_826CE4B0(target, item.p);
            }
        }
    } else {
        fn_826CE3B0(target);
    }
}
