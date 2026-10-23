// Constructor of a game (Vince telemetry) class: the base constructor fn_82E1C8D0 (stores the base vtable
// lbl_8214B728), then stores this class's vtable lbl_8214B6E8 and initializes the members: a word and a flag,
// a std::string at +0xC (basic_string() runs _Tidy(false, 0), fn_82230300), 16 bytes cleared in the body
// (fn_82A1EFC0, a memset), a short set to 0x51, a second std::string at +0x3C and an embedded object
// with its own vtable lbl_8214B6E4 at +0x58.
extern "C" {
extern void *lbl_8214B6E4[];
extern void *lbl_8214B6E8[];
void fn_82230300(void *str, unsigned char built, unsigned int newsize);   // std::string::_Tidy
void fn_82E1C8D0(void *self);                                             // base constructor
void fn_82A1EFC0(void *dst, int value, unsigned int size);                // memset
}

struct VinceString {
    unsigned int m_data[7];
};

struct VinceValue {
    void **vtbl;        // +0x0
    unsigned int m_4;   // +0x4
    unsigned char m_8;  // +0x8
};

struct VinceParam {
    void **vtbl;              // +0x0
    unsigned int m_4;         // +0x4
    unsigned char m_8;        // +0x8
    VinceString m_name;       // +0xC
    unsigned char m_28[16];   // +0x28
    unsigned short m_38;      // +0x38
    VinceString m_value;      // +0x3C
    VinceValue m_58;          // +0x58
};

extern "C" VinceParam *fn_82E1BFA0(VinceParam *self)
{
    fn_82E1C8D0(self);
    self->m_4 = 0;
    self->vtbl = lbl_8214B6E8;
    self->m_8 = 0;
    fn_82230300(&self->m_name, 0, 0);
    self->m_38 = 0x51;
    fn_82230300(&self->m_value, 0, 0);
    self->m_58.m_4 = 0;
    self->m_58.m_8 = 0;
    self->m_58.vtbl = lbl_8214B6E4;
    fn_82A1EFC0(self->m_28, 0, 0x10);
    return self;
}
