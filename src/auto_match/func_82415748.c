struct Entry { int a; int value; };
struct Object { int index; struct Entry **entries; };
extern unsigned char fn_82415550(struct Object *);
unsigned char fn_82415748(struct Object *object) {
    if (fn_82415550(object)) return 0;
    return object->entries[object->index]->value == 0;
}
