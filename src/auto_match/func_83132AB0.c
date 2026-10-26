/* Havok reflection: lbl_83184040[3] is a class-member table entry (hkInternalClassMember,
   0x18 bytes); its enum pointer is set at static-init time. Havok code is /O2. */
typedef struct {
    const char *name;
    const void *cls;
    const void *enm;
    unsigned char type, subtype;
    short cArraySize;
    unsigned short flags, offset;
    const void *attributes;
} ClassMember;

extern const void *lbl_83183E20;
extern ClassMember lbl_83184040[];

void fn_83132AB0(void)
{
    lbl_83184040[3].enm = lbl_83183E20;
}
