// XLip component registration: remembers the root, then checks that its
// directory exists. std::string members are out of line (/Ob0) and keep the
// fn_ names of their units. npos is written out as -1: the game's header
// made it a constant (li -1), the VC10 header loads it from memory.
#include <string>

typedef std::basic_string<char, std::char_traits<char>, std::allocator<char>> String;

template <> String &String::append(const char *);
template <> String &String::append(const String &);
template <> String::size_type String::rfind(char, String::size_type) const;
template <> String String::substr(String::size_type, String::size_type) const;
template <> String::size_type String::size() const;

class Root_826642E0
{
  public:
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual int IsValid(); /* 0x14 */
};

struct RootVector_826642E0 {
    Root_826642E0 **first;
    Root_826642E0 **last;
    Root_826642E0 **end;
};

struct Globals_826642E0 {
    int unused;
    RootVector_826642E0 roots; /* 0x4 */
};

extern "C" {
extern unsigned char lbl_831E7A18;
extern char lbl_831E7A1C[];
extern String *lbl_831E7A2C;
extern Globals_826642E0 lbl_831E7A5C;

void fn_82A2A370(unsigned int error);
unsigned int fn_82A1F470(void);
void fn_8266C340(const wchar_t *format, ...);
void *fn_82665628(void *key);
unsigned int fn_8265D3F0(RootVector_826642E0 *self);
unsigned int *fn_8265CF50(void *self, unsigned int index);
void fn_826660E8(RootVector_826642E0 *self, unsigned int count);
void fn_82666560(RootVector_826642E0 *self, Root_826642E0 *const *value);
const char *fn_82F92218(Root_826642E0 *root);
int fn_8265E4C8(const char *path);
}

extern "C" int fn_826642E0(Root_826642E0 *pRoot)
{
    if (lbl_831E7A18 == 0) {
        fn_82A2A370(0x15);
        return 0;
    }
    if (pRoot == 0) {
        fn_8266C340(L"Assert failed. File: %s. Line: %d. Condition: %s", L".\\XLipComponent.cpp", 0x53,
                    L"pRoot");
    }
    if (pRoot == 0) {
        fn_82A2A370(0x57);
        return 0;
    }
    if (fn_82665628(pRoot) != 0) {
        return 1;
    }
    if (pRoot->IsValid() == 0) {
        return 0;
    }
    if (fn_8265D3F0(&lbl_831E7A5C.roots) == 0) {
        fn_826660E8(&lbl_831E7A5C.roots, *fn_8265CF50(lbl_831E7A1C, 2));
    }
    fn_82666560(&lbl_831E7A5C.roots, &pRoot);
    String::size_type slash = lbl_831E7A2C->rfind('\\', (String::size_type)-1);
    String path(fn_82F92218(pRoot));
    path.append("\\");
    if (slash == (String::size_type)-1) {
        path.append(*lbl_831E7A2C);
    } else {
        path.append(lbl_831E7A2C->substr(slash + 1, (String::size_type)-1));
    }
    if (path.size() > 0x104) {
        fn_82A2A370(0xa1);
        return 0;
    }
    int hr = fn_8265E4C8(path.c_str());
    if (hr < 0 && fn_82A1F470() != 2 && fn_82A1F470() != 3) {
        return 0;
    }
    return 1;
}
