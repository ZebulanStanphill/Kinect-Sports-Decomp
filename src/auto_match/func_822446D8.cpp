// Attaches the object to a free target of the first active entry, when it has
// none yet and fewer than five are in use, and writes the target's address to a
// std::ostringstream (whose text is not used). Returns whether the object has a
// target.
#include "game/OStringStreamObject_8223DCC8.h"

extern "C" {
struct IosBase_822446D8 {
    char pad[0x14];
    unsigned int flags;
};

struct Stream_822446D8 {
    int *vbtable;
    char body[0x9c];
};

struct Target_822446D8 {
    char pad[0x3f4];
    void *owner;
};

struct Slot_822446D8 {
    int pad0;
    Target_822446D8 *target;
    int inUse;
};

struct Holder_822446D8 {
    char pad[0x10];
    Slot_822446D8 slot;
};

struct Node_822446D8 {
    char pad[0xd54];
    Holder_822446D8 *holder;
};

struct Obj_822446D8 {
    char pad[0x80];
    Target_822446D8 *target;
};

extern char lbl_832960A0[]; // a table of 0x30-byte entries starts at 0x28
int fn_82247000(void);
void fn_8223CFC0(Stream_822446D8 *stream, int mode, int mostDerived); // std::ostringstream's constructor
void fn_8223FBB0(Stream_822446D8 *stream, void *value);               // stream << value

unsigned char fn_822446D8(Obj_822446D8 *self)
{
    Stream_822446D8 stream;
    int entry;
    Node_822446D8 *node;
    Holder_822446D8 *holder;
    Slot_822446D8 *slot;
    IosBase_822446D8 *ios;

    if (self->target == 0) {
        if (fn_82247000() < 5) {
            entry = (int)lbl_832960A0 + 0x28;
            do {
                if (*(int *)(entry + 0x10) == 1) {
                    entry = *(int *)(entry + 4);
                    goto found;
                }
                entry = entry + 0x30;
            } while (entry < (int)lbl_832960A0 + 0xe8);
            entry = 0;
found:
            node = (Node_822446D8 *)entry;
            if (node != 0 && (holder = node->holder) != 0 && (slot = &holder->slot)->inUse == 0 && slot->target != 0) {
                slot->target->owner = self;
                self->target = slot->target;
                if (self->target != 0) {
                    fn_8223CFC0(&stream, 2, 1);
                    ios = (IosBase_822446D8 *)((char *)&stream + stream.vbtable[1]);
                    ios->flags = (ios->flags & 0xfffff1ff) | 0x800;
                    fn_8223FBB0(&stream, self->target);
                    DestroyOStringStream_8223DCC8(&stream);
                }
            }
        }
    }
    return self->target != 0;
}
}
