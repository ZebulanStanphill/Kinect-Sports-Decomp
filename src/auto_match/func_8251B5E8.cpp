// std::map<std::string, Mapped>::operator[] with the global key string lbl_8329EA40
// ("ScriptID"); the insert of the default value stays the out-of-line fn_8251BC68.
struct String;
struct RefCount;
extern "C" {
String *fn_8223B688(String *self, const String *src);
void fn_82230300(String *self, int built, unsigned int newsize);
int fn_8260D428(const String *self, unsigned int pos, unsigned int n0, const char *ptr, unsigned int count);
void fn_822315A0(RefCount *rep);
}

struct String {
    union {
        char buf[16];
        char *ptr;
    } bx;
    unsigned int size;
    unsigned int res;
    char alval;
    String(const String &o) { fn_8223B688(this, &o); }
    ~String() { fn_82230300(this, 1, 0); }
    const char *myptr() const { return 16 <= res ? bx.ptr : bx.buf; }
    unsigned int length() const { return size; }
    int compare(const String &r) const { return fn_8260D428(this, 0, size, r.myptr(), r.length()); }
};

static inline bool less(const String &a, const String &b) { return a.compare(b) < 0; }

struct Ptr_8251B5E8 {
    void *ptr;
    RefCount *rep;
    Ptr_8251B5E8() { rep = 0; ptr = 0; }
    ~Ptr_8251B5E8() { if (rep != 0) fn_822315A0(rep); }
};

struct Mapped_8251B5E8 {
    Ptr_8251B5E8 object;
    unsigned char flag;
    Mapped_8251B5E8() : flag(0) {}
};

struct Value {
    String first;
    Mapped_8251B5E8 second;
    Value(const String &k) : first(k) {}
};

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    Value value;
    char color;
    char isnil;
};

struct It {
    Node *p;
};

struct Map;
extern "C" It *fn_8251BC68(It *ret, Map *self, Node *where, Value &val);
extern "C" String lbl_8329EA40;

struct Map {
    int alloc;
    Node *head;
    unsigned int size;
    __forceinline Node *lbound(const String &key)
    {
        Node *p = head->parent;
        Node *where = head;
        while (!p->isnil) {
            if (less(p->value.first, key))
                p = p->right;
            else {
                where = p;
                p = p->left;
            }
        }
        return where;
    }
};

extern "C" Mapped_8251B5E8 *fn_8251B5E8(Map *self)
{
    Node *where = self->lbound(lbl_8329EA40);
    if (where == self->head || less(lbl_8329EA40, where->value.first)) {
        It r;
        where = fn_8251BC68(&r, self, where, Value(lbl_8329EA40))->p;
    }
    return &where->value.second;
}
