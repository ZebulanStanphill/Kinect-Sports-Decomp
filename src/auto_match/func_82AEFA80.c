typedef struct Obj_82AEFA80 {
    int field_0;
    int field_4;
    unsigned int flags_hi : 18;
    unsigned int kind : 7;
    unsigned int flags_lo : 7;
} Obj_82AEFA80;

static __forceinline unsigned char IsValidKind(unsigned int kind)
{
    return kind >= 1 && kind <= 0x66;
}

unsigned char fn_82AEFA80(Obj_82AEFA80 *p)
{
    unsigned int kind = p->kind;
    if (!IsValidKind(kind)) {
        return 0;
    }
    return kind != 0x60 && kind != 0x61;
}
