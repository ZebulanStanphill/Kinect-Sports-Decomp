// Creates the object for (a, b) unless fn_828C38B0 reports it already exists, wraps it in a shared pointer
// and appends that to the std::list at +0x2e8 (push_back(T &&), whose _Insert_rv instance is fn_828C3AF8).
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <list>
#undef _Xlength_error

extern "C" void fn_822315A0(void *rep);

// The game's 8-byte shared pointer (see func_828C3AF8.cpp); the destructor releases the reference count block.
struct Element_828C3AF8 {
    void *ptr;
    void *rep;
    ~Element_828C3AF8()
    {
        if (rep != 0)
            fn_822315A0(rep);
    }
};

typedef std::list<Element_828C3AF8> List_828C3B70;

// Out of line in fn_828C3AF8.
template <>
template <>
void List_828C3B70::_Insert_rv<Element_828C3AF8>(const_iterator where, Element_828C3AF8 &&value);

struct Owner_828C3B70 {
    char pad[0x2e8];
    List_828C3B70 items;
};

extern "C" {
unsigned char fn_828C38B0(Owner_828C3B70 *self, void *a, void *b);
void *fn_8265C9E0(unsigned int size);                                   // operator new
void *fn_828D7438(void *mem, Owner_828C3B70 *owner, void *a, void *b);  // item constructor
Element_828C3AF8 *fn_828BAB20(Element_828C3AF8 *self, void *p);         // shared pointer from raw pointer
}

extern "C" void fn_828C3B70(Owner_828C3B70 *self, void *a, void *b)
{
    if (!fn_828C38B0(self, a, b)) {
        void *mem = fn_8265C9E0(0x38);
        void *item = mem != 0 ? fn_828D7438(mem, self, a, b) : 0;
        Element_828C3AF8 e;
        self->items.push_back(static_cast<Element_828C3AF8 &&>(*fn_828BAB20(&e, item)));
    }
}
