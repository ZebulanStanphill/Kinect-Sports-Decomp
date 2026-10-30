extern "C" {
void fn_8267D608(void *self, void *arg);
void fn_8267EA40(void *self, int flag);
extern unsigned int lbl_8200565C[];
extern unsigned int lbl_82005670[];
}

class GAcquireInterface {
public:
    virtual ~GAcquireInterface() {}
};

class __declspec(novtable) Base_8267EA40 {
public:
    __forceinline Base_8267EA40() { fn_8267EA40(this, 1); }
    virtual __forceinline ~Base_8267EA40() {}
    char pad[8];
};

class Cls_8267DB60 : public Base_8267EA40, public GAcquireInterface {
public:
    Cls_8267DB60(void *arg);
};

Cls_8267DB60::Cls_8267DB60(void *arg)
{
    *(void **)this = lbl_82005670;
    *(void **)((char *)this + 0xc) = lbl_8200565C;
    fn_8267D608(this, arg);
}
