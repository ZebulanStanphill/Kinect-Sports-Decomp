// Node_8267D248 and Wrapper_8267EF68: game classes built on Scaleform GFC's
// GAcquireInterface. The names are placeholders (address of the destructor);
// RTTI gives the bases: Base_8267EE90 (+0) and GAcquireInterface (+0xC).
//
// Functions that are still extern "C" units are reached through
// inline forwarders: Base_8267EE90's constructor fn_8267EA40 and destructor
// fn_8267EE90, Inner_8267D248's destructor fn_82A1E658 (on its handle),
// Owned_8267D2B0's constructor fn_8267CF08 and destructor fn_8267D2B0.

#ifndef GAME_NODE_8267D248_H
#define GAME_NODE_8267D248_H

extern "C" {
void *fn_8267EA40(void *self, unsigned char create);
void *fn_8267C7B8(void *self, void *owner, bool flag);
void fn_8267EE90(void *self);
void *fn_8267B890(void *heap, unsigned int size, unsigned int unk);
void fn_8267BE38(void *p);
int fn_82A1E658(void *p);
void fn_8265CA20(void *p);
void *fn_8267CF08(void *self);
void fn_8267D958(void *inner, void *node);
unsigned char fn_8267D8F0(void *inner, void *node);
void fn_8267D840(void *inner, void *node);
bool fn_8267C880(void *inner);
void fn_8267C8D8(void *node);
void fn_8267D9C0(void *node);
void fn_8267D2B0(void *self);
extern void *lbl_831E7E64; // Scaleform's global heap
}

// Scaleform GFC allocation: new through fn_8267B890 on the global heap,
// delete through fn_8267BE38. The classes have no operator delete[]: the
// vector deleting destructors free arrays with the global operator delete,
// fn_8265CA20, so operator delete[] here forwards to it to keep that name.
#define GAME_GFC_HEAP_OPERATORS                                                \
    static void *operator new(unsigned int size) { return fn_8267B890(lbl_831E7E64, size, 0); } \
    static void operator delete(void *p) { fn_8267BE38(p); }                  \
    static void operator delete[](void *p) { fn_8265CA20(p); }

class GAcquireInterface {
public:
    virtual ~GAcquireInterface() {}
    // The default slots return true (fn_8269AA80, shared by the vtables).
    virtual bool avf04() { return true; }
    virtual bool avf08() { return true; }
    virtual bool avf0C() { return true; }
    virtual bool avf10() { return true; }
};

class __declspec(novtable) Base_8267EE90 {
public:
    __forceinline Base_8267EE90(unsigned char create) { fn_8267EA40(this, create); }
    // Wrapper_8267EF68's constructor passes its argument without narrowing it.
    __forceinline Base_8267EE90(unsigned int create) { ((void *(*)(void *, unsigned int))fn_8267EA40)(this, create); }
    virtual __forceinline ~Base_8267EE90() { fn_8267EE90(this); }
    virtual unsigned char vf04();
    virtual void vf08();

    unsigned int unk04; // 1
    void *unk08;        // an object of 0x2C bytes (fn_8267E9F0) when created
};

class Node_8267D248;

struct Inner_8267D248 {
    GAME_GFC_HEAP_OPERATORS

    // The constructor is still C (NonMatching func_8267C7B8, 56%): it stays
    // fn_8267C7B8 and returns its argument. Use Construct(); there is no C++
    // constructor (the member constructors would store GAcquireInterface's vtable).
    static __forceinline Inner_8267D248 *Construct(void *p, Node_8267D248 *owner, bool flag)
    {
        return (Inner_8267D248 *)fn_8267C7B8(p, owner, flag);
    }
    ~Inner_8267D248() { fn_82A1E658(handle); }

    void *handle;
    bool unk04;
    void *unk08;
    GAcquireInterface acquire; // +0xC: fn_8267C7B8 stores lbl_82005620 (a derived object's vtable); the destructor resets it to GAcquireInterface's
    Node_8267D248 *owner;
};

class Node_8267D248 : public Base_8267EE90, public GAcquireInterface {
public:
    GAME_GFC_HEAP_OPERATORS

    // The only call seen (func_8267D670) passes (true, 0); default arguments
    // let the destructor's unit create arrays (see func_8267D248.cpp).
    Node_8267D248(bool flag = true, unsigned char create = 0);
    virtual ~Node_8267D248();
    // Base_8267EE90's slots
    virtual unsigned char vf04();  // no handle yet
    virtual void vf08();
    // GAcquireInterface's slots (the functions take the +0xC subobject)
    virtual bool avf04();
    virtual bool avf08();
    virtual bool avf10();

    Inner_8267D248 *inner;
};

// Owns an object that it destroys with fn_8267CCD0 and frees with fn_8267BE38.
struct Owned_8267D2B0 {
    __forceinline Owned_8267D2B0() { fn_8267CF08(this); }
    __forceinline ~Owned_8267D2B0() { fn_8267D2B0(this); }

    void *p;
};

class Wrapper_8267EF68 : public Base_8267EE90, public GAcquireInterface {
public:
    GAME_GFC_HEAP_OPERATORS

    // fn_8267EEE0 (C units call it by that name); every call passes (0, 0).
    __forceinline Wrapper_8267EF68(unsigned char b = 0, unsigned int create = 0)
        : Base_8267EE90(create)
    {
        unk10 = b;
        unk11 = 0;
    }
    virtual ~Wrapper_8267EF68();
    virtual unsigned char vf04();  // unk10
    virtual bool avf0C(); // see func_8267E3A8

    unsigned char unk10;
    unsigned char unk11;
    Node_8267D248 node;
    Owned_8267D2B0 owned;
};

// Same shape as Wrapper_8267EF68 with two int fields (its vector deleting
// destructor and the rest of its vtables are other units).
class Wrapper_8267F0E0 : public Base_8267EE90, public GAcquireInterface {
public:
    GAME_GFC_HEAP_OPERATORS

    // fn_8267F058 (C units call it by that name).
    __forceinline Wrapper_8267F0E0(unsigned int b, unsigned int create)
        : Base_8267EE90(create)
    {
        unk10 = b;
        unk14 = 0;
    }
    virtual ~Wrapper_8267F0E0();

    unsigned int unk10;
    unsigned int unk14;
    Node_8267D248 node;
    Owned_8267D2B0 owned;
};

#endif
