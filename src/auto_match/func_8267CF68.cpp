// Destructor of Cls_8267DB60 (bases Base_8267EA40 and GAcquireInterface at +0xc, owned handle at +0x2c).
extern "C" {
int fn_82A1E658(void *p);
void fn_8267EE90(void *self);
}

class GAcquireInterface {
public:
    virtual ~GAcquireInterface() {}
};

class __declspec(novtable) Base_8267EA40 {
public:
    virtual __forceinline ~Base_8267EA40() { fn_8267EE90(this); }
    char pad[8];
};

struct Handle_82A1E658 {
    void *p;
    __forceinline ~Handle_82A1E658() { if (p != 0) { fn_82A1E658(p); p = 0; } p = 0; }
};

extern "C" {
extern unsigned int lbl_8200565C[];
extern unsigned int lbl_82005670[];
}

class Cls_8267DB60 : public Base_8267EA40, public GAcquireInterface {
public:
    virtual ~Cls_8267DB60();
    char pad2[0x1c];
    Handle_82A1E658 h;
    int pad30;
};

extern "C" void fn_8267CF68(Cls_8267DB60 *self)
{
    void *hp = self->h.p;
    *(void **)self = lbl_82005670;
    *(void **)((char *)self + 0xc) = lbl_8200565C;
    if (hp != 0) { fn_82A1E658(hp); self->h.p = 0; }
    self->h.p = 0;
    self->GAcquireInterface::~GAcquireInterface();
    self->Base_8267EA40::~Base_8267EA40();
}
