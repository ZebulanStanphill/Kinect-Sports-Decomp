// Destructor of a game (Vince telemetry) class with two std::string members at +0x4 and +0x24: stores the
// class vtable lbl_8214B708, destroys the strings in reverse order (basic_string::_Tidy(true, 0),
// fn_82230300), then runs the base destructor fn_82E1C8D0 (which stores the base vtable lbl_8214B728).
extern "C" {
extern void *lbl_8214B708[];
void fn_82230300(void *str, unsigned char built, unsigned int newsize);   // std::string::_Tidy
void fn_82E1C8D0(void *self);                                             // base destructor
}

struct VinceString {
    unsigned int m_data[8];
};

struct VinceEventParam {
    void **vtbl;          // +0x0
    VinceString m_a;      // +0x4
    VinceString m_b;      // +0x24
};

extern "C" void fn_82E1C490(VinceEventParam *self)
{
    self->vtbl = lbl_8214B708;
    fn_82230300(&self->m_b, 1, 0);
    fn_82230300(&self->m_a, 1, 0);
    fn_82E1C8D0(self);
}
