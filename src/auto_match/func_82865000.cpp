#include <string>

/* Converts a wide string to a narrow one by length: std::string self = other (wstring) via
   assign(other.size(), ' ') and replacing the contents with the wide characters (fn_82865E68,
   std::string::_Replace over std::wstring::const_iterator). The mirror of fn_82864F80. */

/* std::string::assign(size_type, char) stays a call (defined in its own unit). */
template <> std::string &std::string::assign(std::string::size_type count, char ch);

typedef struct WStr_82865000 {
    union {
        wchar_t buf[8];
        wchar_t *ptr;
    } u;
    unsigned int size;
    unsigned int capacity;
} WStr_82865000;

typedef struct Tag_82865000 {
    unsigned char unused;
} Tag_82865000;

extern "C" void fn_82230300(std::string *self, int a, int b);
extern "C" void fn_82865E68(std::string *self, const wchar_t *first, const wchar_t *last, Tag_82865000 tag);

static __forceinline const wchar_t *Ptr(const WStr_82865000 *s) { return s->capacity >= 8 ? s->u.ptr : s->u.buf; }

extern "C" std::string *fn_82865000(std::string *self, const WStr_82865000 *other)
{
    Tag_82865000 tag;
    unsigned int size = other->size;
    const wchar_t *last;

    fn_82230300(self, 0, 0);
    self->assign(size, ' ');
    last = Ptr(other) + other->size;
    fn_82865E68(self, Ptr(other), last, tag);
    return self;
}
