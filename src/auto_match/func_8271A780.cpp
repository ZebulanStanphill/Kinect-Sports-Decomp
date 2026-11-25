#include "game/String_8268C510.h"

struct Loader_8271A780 {
    char pad00[0x288];
    void *heap; /* 0x288 */
};

struct Movie_8271A780 {
    char pad00[0x78];
    Loader_8271A780 *loader; /* 0x78 */
};

struct Object_8271A780;

struct Vtable_8271A780 {
    void *slots[2];
    int (*getType)(Object_8271A780 *);
};

struct Object_8271A780 {
    Vtable_8271A780 *vtable;
};

struct Request_8271A780 {
    char pad00[4];
    char *value;             /* 0x04 */
    Object_8271A780 *object; /* 0x08 */
    char pad0c[0xc];
    Movie_8271A780 *movie; /* 0x18 */
    int count;             /* 0x1c */
};

struct Name_8271A780 {
    const char *text;
    int pad04;
    int refs; /* 0x08 */
};

struct Value_8271A780 {
    unsigned char type;
    char pad01[7];
    int number; /* 0x08 */
    char pad0c[4];
};

struct Progress_8271A780 {
    int loaded;
    int total;
};

extern "C" {
void *fn_8267B890(void *, unsigned int, int);
void *fn_826C0B08(void *, Movie_8271A780 *);
void fn_826959C8(char *);
void *fn_826957D0(Request_8271A780 *, unsigned int);
void fn_82696D38(Name_8271A780 **, void *, Movie_8271A780 *, int, int);
Progress_8271A780 *fn_8271A720(void *, const String_8268C510 *);
void fn_826A79D8(void *, Loader_8271A780 **, const char *, Value_8271A780 *);
void fn_82696330(Value_8271A780 *);
void fn_82696BC8(char *, void *);
void fn_826944C8(Name_8271A780 *);
void fn_826824B0(void *);
}

static __forceinline void SetNumber_8271A780(Value_8271A780 *value, int number)
{
    value->type = 4;
    value->number = number;
}

extern "C" void fn_8271A780(Request_8271A780 *self)
{
    if (self->count >= 1) {
        char *value = self->value;
        fn_826959C8(value);
        *value = 0;
        if (self->object->vtable->getType(self->object) == 0x19) {
            Object_8271A780 *object = self->object;
            char *base = object ? reinterpret_cast<char *>(object) - 0x10 : 0;
            char *result = 0;
            void *storage = fn_8267B890(self->movie->loader->heap, 0x30, 0);
            Name_8271A780 *name;
            Progress_8271A780 *progress;
            if (storage)
                result = static_cast<char *>(fn_826C0B08(storage, self->movie));
            Movie_8271A780 *movie = self->movie;
            void *request = fn_826957D0(self, 0);
            fn_82696D38(&name, request, movie, -1, 0);
            {
                String_8268C510 key(name->text);
                progress = fn_8271A720(base + 0x30, &key);
            }
            if (progress) {
                Value_8271A780 loaded;
                loaded.type = 4;
                loaded.number = progress->loaded;
                fn_826A79D8(result + 0x10, &self->movie->loader, "bytesLoaded", &loaded);
                fn_82696330(&loaded);

                Value_8271A780 total;
                SetNumber_8271A780(&total, progress->total);
                fn_826A79D8(result + 0x10, &self->movie->loader, "bytesTotal", &total);
                fn_82696330(&total);
            }
            fn_82696BC8(self->value, result);
            Name_8271A780 *current = name;
            if (--current->refs == 0)
                fn_826944C8(current);
            if (result)
                fn_826824B0(result);
        }
    }
}
