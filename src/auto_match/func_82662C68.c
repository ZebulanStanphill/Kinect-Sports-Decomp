extern char lbl_82001D2C[];

typedef struct Obj_82662C68 {
    void *vtable;
    int value;
} Obj_82662C68;

Obj_82662C68 *fn_82662C68(Obj_82662C68 *self, const int *value)
{
    self->vtable = lbl_82001D2C;
    self->value = *value;
    return self;
}
