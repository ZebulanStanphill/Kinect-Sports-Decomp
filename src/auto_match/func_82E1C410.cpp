// Constructor of a game (Vince telemetry) class with two std::string members at +0x4 and +0x24: the base
// constructor fn_82E1C8D0 stores the base vtable lbl_8214B728, then this class's vtable lbl_8214B708, the strings
// (basic_string() runs _Tidy(false, 0), fn_82230300), a flag, a short set to 0x50 and 16 bytes cleared (memset).
extern "C" {
extern void *lbl_8214B708[];
void fn_82230300(void *str, unsigned char built, unsigned int newsize);   // std::string::_Tidy
void fn_82E1C8D0(void *self);                                             // base constructor
void fn_82A1EFC0(void *dst, int value, unsigned int size);                // memset
}

struct VinceString {
    unsigned int m_data[7];
};

struct VinceEventParam {
    void **vtbl;              // +0x0
    VinceString m_a;          // +0x4
    unsigned char m_20;       // +0x20
    VinceString m_b;          // +0x24
    unsigned char m_40[16];   // +0x40
    unsigned short m_50;      // +0x50
};

extern "C" VinceEventParam *fn_82E1C410(VinceEventParam *self)
{
    fn_82E1C8D0(self);
    self->vtbl = lbl_8214B708;
    fn_82230300(&self->m_a, 0, 0);
    self->m_20 = 0;
    fn_82230300(&self->m_b, 0, 0);
    self->m_50 = 0x50;
    fn_82A1EFC0(self->m_40, 0, 0x10);
    return self;
}
