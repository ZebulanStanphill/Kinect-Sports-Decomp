typedef struct Key_826C1370 {
    int pad0;
    unsigned char type;
} Key_826C1370;

typedef struct Obj_826C1370 {
    int pad0[2];
    char members[4];
} Obj_826C1370;

extern unsigned char fn_826BFF48(void *members, void *name, unsigned char *out);
extern unsigned char fn_826C06A0(void *members, void *name, unsigned char *out);
unsigned char fn_826C1370(Obj_826C1370 *self, Key_826C1370 *key, void *name, unsigned char *out)
{
    void *members = self->members;
    if (key->type > 6) {
        return fn_826BFF48(members, name, out);
    }
    return fn_826C06A0(members, name, out);
}
