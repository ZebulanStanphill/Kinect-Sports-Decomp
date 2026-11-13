/* Insert {name copied from (*named)->name, value} into the map at +0xcc, then forward. */
typedef struct String_82326670 { unsigned char data[0x1c]; } String_82326670;

typedef struct Entry_82326670 {
    String_82326670 name;
    int value;
} Entry_82326670;

typedef struct Named_82326670 {
    int x0;
    String_82326670 name;
} Named_82326670;

typedef struct InsertResult_82326670 { void *node; unsigned char inserted; } InsertResult_82326670;

typedef struct Obj_82326670 {
    char pad[0xcc];
    int map;
} Obj_82326670;

extern void fn_8223B688(String_82326670 *self, const String_82326670 *src);
extern void fn_82230300(String_82326670 *self, int built, unsigned int newsize);
extern InsertResult_82326670 *fn_82326C58(InsertResult_82326670 *out, void *map, const Entry_82326670 *e);
extern void fn_822C8B40(Obj_82326670 *self, Named_82326670 **named);

void fn_82326670(Obj_82326670 *self, Named_82326670 **named, int value)
{
    InsertResult_82326670 r;
    Entry_82326670 e;

    fn_8223B688(&e.name, &(*named)->name);
    e.value = value;
    fn_82326C58(&r, &self->map, &e);
    fn_82230300(&e.name, 1, 0);
    fn_822C8B40(self, named);
}
