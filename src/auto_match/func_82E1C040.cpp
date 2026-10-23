// Destructor of a game (Vince telemetry) class: stores the class vtable lbl_8214B6E8, clears the
// optional std::string value at +0xC when its "set" flag (+0x8) is on, destroys the member at +0x58
// (its vtable lbl_8214B6E4, then its implementation's slot 1 on its storage), destroys the two strings
// in reverse order (basic_string::_Tidy(true, 0), fn_82230300) and runs the base destructor fn_82E1C8D0.
extern "C" {
extern void *lbl_8214B6E4[];
extern void *lbl_8214B6E8[];
void fn_82230300(void *str, unsigned char built, unsigned int newsize);   // std::string::_Tidy
void fn_82E1C8D0(void *self);                                             // base destructor
}

struct VinceString {
    union {
        char _Buf[16];
        char *_Ptr;
    } _Bx;                    // +0x0
    unsigned int _Mysize;     // +0x10
    unsigned int _Myres;      // +0x14
    char *_Myptr() { return 16 <= _Myres ? _Bx._Ptr : _Bx._Buf; }
    void _Eos(unsigned int n) { _Mysize = n; _Myptr()[n] = 0; }
};

struct VinceCallbackImpl {
    virtual void f0();
    virtual void destroy(void *storage);
};

struct VinceCallback {
    void **vtbl;               // +0x0
    VinceCallbackImpl *impl;   // +0x4
    char storage[8];           // +0x8
    __forceinline ~VinceCallback()
    {
        vtbl = lbl_8214B6E4;
        if (impl != 0) {
            impl->destroy(storage);
        }
    }
};

struct VinceEventParam {
    void **vtbl;              // +0x0
    int pad4;                 // +0x4
    unsigned char m_isSet;    // +0x8
    VinceString m_value;      // +0xC
    char pad24[0x18];         // +0x24
    VinceString m_name;       // +0x3C
    char pad54[0x4];          // +0x54
    VinceCallback m_callback; // +0x58
};

extern "C" void fn_82E1C040(VinceEventParam *self)
{
    self->vtbl = lbl_8214B6E8;
    if (self->m_isSet) {
        self->m_value._Eos(0);
        self->m_isSet = 0;
    }
    self->m_callback.VinceCallback::~VinceCallback();
    fn_82230300(&self->m_name, 1, 0);
    fn_82230300(&self->m_value, 1, 0);
    fn_82E1C8D0(self);
}
