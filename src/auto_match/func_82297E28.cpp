#include "stdext/xmemory.h"

extern "C" void fn_822315A0(void *rep);

struct SP {
    void *ptr;
    void *rep;
    ~SP() { if (rep != 0) fn_822315A0(rep); }
};

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    char value[0x20];
    char color;
    char isnil;
};

struct Sub16 {
    int a[4];
};

struct Var {
    int type;
    int f4;
    void *data;
    int fc;
};

struct Obj {
    SP h;
    int alloc;
    Node *head;
    unsigned int size;
    int f14;
    Sub16 f18;
    Sub16 f28;
    Sub16 f38;
    int f48;
    int f4c;
    int f50;
    int f54;
    int f58;
    int f5c;
    int f60;
    char f64[0x80 - 0x64];
    float f80;
    int f84;
};

extern "C" {
extern float lbl_821CC160;
void fn_82266D28(SP *h, int a);
void *fn_8266EC60(void);
SP fn_8266ECF0(void *ctx, int p, int a, int b, int c, int d, int flags);
void fn_823F2E20(SP *dst, const SP &src);
void fn_82511350(Sub16 *s);
void fn_82297428(void *p, const wchar_t *s);
void fn_822984D0(void);
void fn_82673BC0(void *h, void (*cb)(void), Obj *o);
void fn_822987B8(Obj *o, void *p);
void fn_82528BF8(void *p, const char *key, wchar_t *buf, int n, int a, int b);
void fn_82273CD8(Var *v, int type);
void fn_82273C88(Var *v);
void fn_82672C20(void *h, const char *name, Var *args, int n);
void *fn_82F4D9D8(int a);
void fn_826728E8(void *h, const char *name, void *tex);

Obj *fn_82297E28(Obj *self, int p2, void *p3)
{
    self->h.ptr = 0;
    self->h.rep = 0;
    fn_82266D28(&self->h, 0);
    self->size = 0;
    self->head = std::_Allocate(1, (Node *)0);
    self->head->left = self->head;
    self->head->parent = self->head;
    self->head->right = self->head;
    self->head->color = 1;
    self->head->isnil = 1;
    fn_82511350(&self->f18);
    fn_82511350(&self->f28);
    fn_82511350(&self->f38);
    self->f48 = 0;
    self->f4c = 0;
    self->f54 = 1;
    self->f58 = 1;
    self->f5c = 0;
    self->f60 = 0;
    fn_82297428(self->f64, L"Game Paused");
    self->f84 = 0;
    self->f80 = lbl_821CC160;
    fn_823F2E20(&self->h, fn_8266ECF0(fn_8266EC60(), p2, 1, 0, -1, 0, 0x18280143));
    fn_82673BC0(self->h.ptr, fn_822984D0, self);
    fn_822987B8(self, p3);
    if (p3 != 0) {
        wchar_t buf1[256];
        wchar_t buf2[256];
        wchar_t buf3[256];
        Var v1;
        Var v2;
        Var v3;

        fn_82528BF8(p3, "troubleshooter", buf1, 0x100, 0, 0);
        v1.type = 0;
        v1.f4 = 0;
        fn_82273CD8(&v1, 5);
        v1.data = buf1;
        fn_82672C20(self->h.ptr, "_root.SetTroubleShooterText", &v1, 1);
        fn_82273C88(&v1);
        fn_82528BF8(p3, "floorSearch", buf2, 0x100, 0, 0);
        v2.type = 0;
        v2.f4 = 0;
        fn_82273CD8(&v2, 5);
        v2.data = buf2;
        fn_82672C20(self->h.ptr, "_root.SetFloorSearchText", &v2, 1);
        fn_82273C88(&v2);
        fn_82528BF8(p3, "confirmGesture", buf3, 0x100, 0, 0);
        v3.type = 0;
        v3.f4 = 0;
        fn_82273CD8(&v3, 5);
        v3.data = buf3;
        fn_82672C20(self->h.ptr, "_root.SetConfirmText", &v3, 1);
        fn_82273C88(&v3);
    }
    {
        void *tex = fn_82F4D9D8(2);
        if (tex != 0) {
            fn_826728E8(self->h.ptr, "OOBEReacquisitionTexture", tex);
        }
    }
    return self;
}
}
