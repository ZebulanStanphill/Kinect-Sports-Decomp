struct Str_828B1878 {
    char buf[0x10];
    unsigned int size;
    unsigned int res;
    __forceinline ~Str_828B1878();
};
extern "C" void fn_82230180(Str_828B1878 *s);
__forceinline Str_828B1878::~Str_828B1878() { fn_82230180(this); }

struct Item_828B1878 {
    unsigned short a;
    unsigned short b;
    unsigned short c;
    unsigned char d;
    unsigned char e;
};
struct Vec_828B1878 {
    unsigned int *first;
    unsigned int *last;
    __forceinline unsigned int size() const { return last - first; }
};
struct Holder_828B1878 {
    int pad;
    Vec_828B1878 vec;
};
struct Node_828B1878;
struct NodeVt_828B1878 {
    void *slot0;
    void *slot1;
    void *slot2;
    void *(*activate)(Node_828B1878 *self);
};
struct Node_828B1878 {
    NodeVt_828B1878 *vt;
};
struct Obj_828B1878 {
    char pad00[0x7c];
    int f7c;
    char pad80[0x84 - 0x80];
    int f84;
    char pad88[0x98 - 0x88];
    int f98;
    char pad9c[0xc0 - 0x9c];
    unsigned __int64 id;
    char padc8[0x1dc - 0xc8];
    unsigned char f1dc;
    char pad1dd[0x1e0 - 0x1dd];
    char f1e0[0x278 - 0x1e0];
    char f278[4];
    __forceinline bool HasId(unsigned __int64 v) { return id == v; }
};

extern "C" {
unsigned char fn_828ACC50(Obj_828B1878 *o);
void *fn_82884B20(int size);
void fn_828A39C0(Obj_828B1878 *o, int v);
void *fn_8265C9E0(unsigned int size);
Str_828B1878 fn_828AD7A0();
void *fn_8289D8D8(void *mem, Obj_828B1878 *o, void *buf, int a, int b, int c, const Str_828B1878 &name);
Node_828B1878 *fn_8289EEE0(Obj_828B1878 *o);
void fn_830B4CB8(Node_828B1878 *n, int v);
void fn_8289FAA8(Node_828B1878 *n, int v);
void fn_8289DB78(Node_828B1878 *n, int v);
void fn_8289FAF0(Node_828B1878 *n, int v);
void fn_828AEC88(void *p);
void fn_828A3248(void *p);
void fn_828ACDB8(Obj_828B1878 *o, int v);
void fn_828B00F8(void *p, int v);
void *fn_828DB600(void *mem, int v);
void fn_82886518(void *p, int a, int b);
void *fn_82897BD0(Node_828B1878 *n);
void fn_828BE158(Obj_828B1878 *o, void *a, void *b, int c);
void fn_828B58F0(Item_828B1878 *out, Holder_828B1878 *h, unsigned int i);
int fn_828B5600(Item_828B1878 *it);
int fn_828B55F8(Item_828B1878 *it);
void *fn_828A12E8(Obj_828B1878 *o);
void fn_82890E18(void *p, unsigned short a, unsigned short b);
void fn_828B55B0(Item_828B1878 *it);
void fn_828C8058(Obj_828B1878 *o, int v);

void fn_828B1878(Obj_828B1878 *o, unsigned __int64 id, int unused, int err, int f84, int a, int b, int c,
                 int d, int e, int f, Holder_828B1878 *h)
{
    void *buf;
    void *mem;
    void *tracker;
    Node_828B1878 *node;
    unsigned int i;

    if (fn_828ACC50(o) && o->HasId(id)) {
        if (err == 0) {
            o->f84 = f84;
            buf = fn_82884B20(0x1000);
            fn_828A39C0(o, d);
            mem = fn_8265C9E0(0x68);
            mem ? fn_8289D8D8(mem, o, buf, d, e, o->f7c, fn_828AD7A0()) : 0;
            node = fn_8289EEE0(o);
            fn_828A39C0(o, a);
            fn_830B4CB8(node, a);
            fn_8289FAA8(node, b);
            fn_8289DB78(node, c);
            fn_8289FAF0(node, f);
            fn_828AEC88(node->vt->activate(node));
            fn_828A3248(o->f1e0);
            o->f1dc = 0;
            fn_828ACDB8(o, 3);
            fn_828B00F8(o->f278, 0);
            mem = fn_8265C9E0(0x98);
            tracker = mem ? fn_828DB600(mem, 0) : 0;
            fn_82886518(tracker, -1, -1);
            fn_828BE158(o, tracker, fn_82897BD0(node), 0);
            for (i = 0; i < h->vec.size(); i++) {
                Item_828B1878 item;
                fn_828B58F0(&item, h, i);
                fn_82890E18(fn_828A12E8(o), fn_828B55F8(&item), fn_828B5600(&item));
                fn_828B55B0(&item);
            }
        } else {
            o->f98 = err;
            fn_828C8058(o, 0x11);
        }
        o->f7c = 0;
    }
}
}
