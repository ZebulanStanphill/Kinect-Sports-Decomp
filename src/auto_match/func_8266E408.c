typedef struct Entry_8266E408 {
    unsigned int id;
    float value;
} Entry_8266E408;

typedef struct Obj_8266E408 {
    char pad0[0x1e0];
    char list[0x10];
    unsigned int nextId;
} Obj_8266E408;

extern int fn_83062D28(void *list, Entry_8266E408 *entry);

unsigned int fn_8266E408(Obj_8266E408 *o, float value)
{
    Entry_8266E408 e;

    if (++o->nextId == 0) {
        ++o->nextId;
    }
    e.id = o->nextId;
    e.value = value;
    fn_83062D28(o->list, &e);
    return e.id;
}
