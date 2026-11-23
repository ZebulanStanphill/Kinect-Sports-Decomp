#include "game/String_8268C510.h"

struct StrData_8275C328 {
    const char *text; /* 0x0 */
    int pad4;
    int refs; /* 0x8 */
};

struct Str_8275C328 {
    StrData_8275C328 *data; /* 0x0 */
};

struct Target_8275C328;

class Sound_8275C328
{
  public:
    virtual void v0();
    long refs; /* 0x4 */
};

class Loader_8275C328
{
  public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual Sound_8275C328 *CreateSound(Target_8275C328 *target); /* 0xc */
};

class Item_8275C328
{
  public:
    virtual void v0();
    virtual void v1();
    virtual unsigned int GetType(); /* 0x8 */
    int pad4;
    int pad8;
    Loader_8275C328 *loader; /* 0xc */
};

class Library_8275C328
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
    virtual Library_8275C328 *GetCurrent(); /* 0x48 */
};

struct Movie_8275C328 {
    char pad0[0x74];
    Library_8275C328 *library; /* 0x74 */
};

struct Value_8275C328;

struct Object_8275C328 {
    char pad0[0x30];
    Sound_8275C328 *sound; /* 0x30 */
    Item_8275C328 *item;   /* 0x34 */
};

struct Call_8275C328 {
    int pad0;
    Value_8275C328 *result; /* 0x04 */
    void *object;           /* 0x08 */
    char padC[0xc];
    Movie_8275C328 *movie; /* 0x18 */
    int argCount;          /* 0x1c */
};

extern "C" {
void *fn_826A7398(Movie_8275C328 *movie);
Target_8275C328 *fn_8274A8E0(void *sprite);
void fn_826ADE60(Movie_8275C328 *movie, const char *format, ...);
void fn_8275C268(Sound_8275C328 *sound);
Value_8275C328 *fn_826957D0(Call_8275C328 *call, unsigned int back);
void fn_826944C8(StrData_8275C328 *data);
void fn_8267C4C8(void *object);
void fn_82687270(void *object);
unsigned char fn_826DB990(Library_8275C328 *library, struct ItemRef_8275C328 *item,
                          const String_8268C510 &name);
}

struct LibraryRef_8275C328 {
    Library_8275C328 *p;

    LibraryRef_8275C328(Library_8275C328 *library) : p(library)
    {
        if (p != 0) {
            fn_8267C4C8(p);
        }
    }

    ~LibraryRef_8275C328()
    {
        if (p != 0) {
            fn_82687270(p);
        }
    }
};

struct ItemRef_8275C328 {
    Item_8275C328 *p;
    int extra;

    ItemRef_8275C328() : p(0), extra(0)
    {
    }

    ~ItemRef_8275C328()
    {
        if (p != 0) {
            fn_82687270(p);
        }
    }
};

struct StrRef_8275C328 {
    Str_8275C328 str;

    ~StrRef_8275C328()
    {
        StrData_8275C328 *data = str.data;
        if (--data->refs == 0) {
            fn_826944C8(data);
        }
    }
};

extern "C" void fn_82696D38(Str_8275C328 *out, Value_8275C328 *value, Movie_8275C328 *movie, int precision,
                            int flags);

static __forceinline Object_8275C328 *ObjectOf(Call_8275C328 *call)
{
    return call->object != 0 ? (Object_8275C328 *)((char *)call->object - 0x10) : 0;
}

extern "C" void fn_8275C328(Call_8275C328 *call)
{
    void *sprite = fn_826A7398(call->movie);
    Target_8275C328 *target;

    if (sprite == 0) {
        return;
    }
    target = fn_8274A8E0((char *)sprite + 8);
    if (target == 0) {
        return;
    }
    if (call->argCount < 1) {
        fn_826ADE60(call->movie, "Error: Sound.AttachSound needs one Argument (the file name)\n");
        return;
    }
    Movie_8275C328 *movie = call->movie;
    Value_8275C328 *argument = fn_826957D0(call, 0);
    StrRef_8275C328 name;

    fn_82696D38(&name.str, argument, movie, -1, 0);
    Object_8275C328 *owner = ObjectOf(call);
    LibraryRef_8275C328 library(call->movie->library->GetCurrent());

    if (owner != 0 && library.p != 0) {
        ItemRef_8275C328 item;
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
        Item_8275C328 *source = item.p;
        if (source != 0) {
            Sound_8275C328 *sound = source->loader->CreateSound(target);

            if (sound != 0) {
                _InterlockedExchangeAdd(&sound->refs, 1);
            }
            if (owner->sound != 0) {
                fn_8275C268(owner->sound);
            }
            owner->sound = sound;
            fn_8267C4C8(source);
            if (owner->item != 0) {
                fn_82687270(owner->item);
            }
            owner->item = source;
        }
    }
}
