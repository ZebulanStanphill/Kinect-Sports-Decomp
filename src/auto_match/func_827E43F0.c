typedef struct {
    char pad0[0x74];
    void *item;
} SlotHead;

typedef struct {
    int unk0;
    int index;
    char pad8[0x18];
    char *slots; /* 0x28-byte records */
} Owner;

extern int fn_827E41F8(void *item);

int fn_827E43F0(Owner *o)
{
    return fn_827E41F8(((SlotHead *)(o->slots + o->index * 0x28))->item);
}
