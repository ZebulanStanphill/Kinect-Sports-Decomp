// Placeholder for the class destroyed by the function at 0x8233C258: a base
// (0xc0 bytes, destroyed by fn_822C87C8) followed by two members with their own
// destructors, each followed by a reference-counted pointer. Named after the
// address of the destructor until the class is known.

#ifndef GAME_OBJ_8233C258_H
#define GAME_OBJ_8233C258_H

struct Base_8233C258;
struct InnerA_8233C258;
struct InnerB_8233C258;

extern "C" {
extern char lbl_821B14A0[]; // the class's vtable
void fn_822315A0(void *counted); // std::tr1::_Ref_count_base::_Decref
void fn_82359BB0(InnerB_8233C258 *self);
void fn_82359C18(InnerA_8233C258 *self);
void fn_822C87C8(Base_8233C258 *self);
}

struct Base_8233C258 {
    void *vtbl;
    unsigned char pad4[0xbc];
    ~Base_8233C258() { fn_822C87C8(this); }
};

struct InnerA_8233C258 {
    unsigned char pad[0x1c];
    ~InnerA_8233C258() { fn_82359C18(this); }
};

struct InnerB_8233C258 {
    unsigned char pad[0x14];
    ~InnerB_8233C258() { fn_82359BB0(this); }
};

struct Counted_8233C258 {
    void *counted;
    ~Counted_8233C258()
    {
        if (counted != 0)
            fn_822315A0(counted);
    }
};

struct Obj_8233C258 : Base_8233C258 {
    InnerA_8233C258 a;
    Counted_8233C258 countedA;
    InnerB_8233C258 b;
    Counted_8233C258 countedB;
    ~Obj_8233C258();
};

#endif
