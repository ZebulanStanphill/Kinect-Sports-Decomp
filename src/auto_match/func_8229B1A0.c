typedef unsigned short wchar_t;

typedef struct WString_8229B1A0 {
    int data[7];
} WString_8229B1A0;

typedef struct Ptr_8229B1A0 {
    void *ptr;
    void *rep;
} Ptr_8229B1A0;

typedef struct Obj_8229B1A0 {
    Ptr_8229B1A0 owner;       /* 0x00 */
    int unk8;
    int unkc;
    int unk10;
    int unk14;
    float unk18;              /* 0x18 */
    int unk1c;                /* 0x1c */
    int unk20;
    int unk24;
    char pad28[0xc];
    int unk34;                /* 0x34 */
    float unk38;              /* 0x38 */
    char pad3c[0x10];
    int unk4c;                /* 0x4c */
    int unk50;
    int unk54;
    int unk58;
    int unk5c;
    int unk60;
    float unk64;              /* 0x64 */
    int unk68;
    int unk6c;
    WString_8229B1A0 name;    /* 0x70 */
    WString_8229B1A0 text;    /* 0x8c */
    int unka8;
    int unkac;
    int unkb0;
    int unkb4;
} Obj_8229B1A0;

extern wchar_t lbl_820E975C[];
extern void fn_82266D28(Ptr_8229B1A0 *p, int a);
extern void fn_82297428(WString_8229B1A0 *s, const wchar_t *text);
extern void fn_8229B918(Obj_8229B1A0 *self);

Obj_8229B1A0 *fn_8229B1A0(Obj_8229B1A0 *self)
{
    self->owner.ptr = 0;
    self->owner.rep = 0;
    fn_82266D28(&self->owner, 0);
    self->unk8 = 0;
    self->unkc = 0;
    self->unk10 = 0;
    self->unk14 = 0;
    self->unk1c = 1;
    self->unk18 = 0.0f;
    self->unk20 = 0;
    self->unk38 = 0.0f;
    self->unk24 = 0;
    self->unk64 = 0.0f;
    self->unk34 = 0;
    self->unk4c = 0;
    self->unk50 = -1;
    self->unk54 = -1;
    self->unk58 = 0;
    self->unk5c = 0;
    self->unk60 = 0;
    self->unk68 = 0;
    self->unk6c = 0;
    fn_82297428(&self->name, lbl_820E975C);
    fn_82297428(&self->text, lbl_820E975C);
    self->unka8 = 0;
    self->unkac = 0;
    self->unkb0 = 0;
    self->unkb4 = 0;
    fn_8229B918(self);
    return self;
}
